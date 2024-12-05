// StudentRegistrationTest.java
import static org.junit.jupiter.api.Assertions.*;

import java.util.List;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class StudentRegistrationTest {
    private StudentRegistration registration;

    @BeforeEach
    public void setUp() {
        registration = new StudentRegistration();
    }

    @Test
    public void testRegisterStudent_ValidInput() {
        boolean result = registration.registerStudent("John Doe", "john.doe@example.com");
        assertTrue(result);
        
        List<Student> registeredStudents = registration.getRegisteredStudents();
        assertEquals(1, registeredStudents.size());
        assertEquals("John Doe", registeredStudents.get(0).getName());
        assertEquals("john.doe@example.com", registeredStudents.get(0).getEmail());
    }

    @Test
    public void testRegisterStudent_InvalidName() {
        boolean result = registration.registerStudent("", "john.doe@example.com");
        assertFalse(result);
        
        result = registration.registerStudent(null, "john.doe@example.com");
        assertFalse(result);
    }

    @Test
    public void testRegisterStudent_InvalidEmail() {
        boolean result = registration.registerStudent("John Doe", "");
        assertFalse(result);
        
        result = registration.registerStudent("John Doe", null);
        assertFalse(result);
    }

    @Test
    public void testRegisterStudent_MultipleRegistrations() {
        registration.registerStudent("Jane Doe", "jane.doe@example.com");
        registration.registerStudent("John Smith", "john.smith@example.com");
        
        List<Student> registeredStudents = registration.getRegisteredStudents();
        assertEquals(2, registeredStudents.size());
    }
}
