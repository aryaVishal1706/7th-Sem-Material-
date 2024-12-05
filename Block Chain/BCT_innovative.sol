// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract NAACAccreditation {
    // Define a struct for institution data
    struct Institution {
        string name;
        string accreditationStatus;
        mapping(string => uint8) subjects;
        uint timestamp;
        address owner;
    }
    
    // Mapping to store institutions by address
    mapping(address => Institution) private institutions;
    
    // Event to log updates
    event InstitutionDataUpdated(address institution, string newStatus, uint timestamp);
    event SubjectGradeAdded(address institution, string subject, uint8 grade, uint timestamp);
    event OwnershipTransferred(address previousOwner, address newOwner);

    // Modifier to check institution ownership
    modifier onlyOwner() {
        require(institutions[msg.sender].owner == msg.sender, "Not the owner");
        _;
    }

    // Function to add or update institution data
    function addInstitutionData(string memory _name, string memory _accreditationStatus) public {
        Institution storage inst = institutions[msg.sender];
        inst.name = _name;
        inst.accreditationStatus = _accreditationStatus;
        inst.timestamp = block.timestamp;
        inst.owner = msg.sender;
        
        emit InstitutionDataUpdated(msg.sender, _accreditationStatus, block.timestamp);
    }
    
    // Function to update accreditation status
    function updateAccreditationStatus(string memory _newStatus) public onlyOwner {
        Institution storage inst = institutions[msg.sender];
        inst.accreditationStatus = _newStatus;
        inst.timestamp = block.timestamp;
        
        emit InstitutionDataUpdated(msg.sender, _newStatus, block.timestamp);
    }
    
    // Function to add or update a subject grade
    function addSubjectAndGrade(string memory _subject, uint8 _grade) public onlyOwner {
        require(_grade <= 100, "Grade must be between 0 and 100");
        institutions[msg.sender].subjects[_subject] = _grade;
        
        emit SubjectGradeAdded(msg.sender, _subject, _grade, block.timestamp);
    }
    
    // Function to retrieve a subject grade for an institution
    function getSubjectGrade(address _institution, string memory _subject) public view returns (uint8) {
        return institutions[_institution].subjects[_subject];
    }

    // Function to transfer contract ownership
    function transferOwnership(address _newOwner) public onlyOwner {
        require(_newOwner != address(0), "New owner address is invalid");
        emit OwnershipTransferred(msg.sender, _newOwner);
        institutions[msg.sender].owner = _newOwner;
    }
    
    // Function to remove institution data (only by owner or contract deployer)
    function removeInstitutionData() public onlyOwner {
        delete institutions[msg.sender];
    }
}
