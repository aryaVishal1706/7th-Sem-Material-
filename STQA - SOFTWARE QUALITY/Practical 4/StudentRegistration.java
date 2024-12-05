// StudentRegistration.java
import java.util.ArrayList;
import java.util.List;

public class StudentRegistration {
    private List<Student> students = new ArrayList<>();

    public boolean registerStudent(String name, String email) {
        if (name == null || email == null || email.isEmpty() || name.isEmpty()) {
            return false;
        }
        Student student = new Student(name, email);
        students.add(student);
        return true;
    }

    public List<Student> getRegisteredStudents() {
        return students;
    }
}
