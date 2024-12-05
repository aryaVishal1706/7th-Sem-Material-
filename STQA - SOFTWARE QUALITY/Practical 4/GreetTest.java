import org.junit.Assert;
import org.junit.Test;
public class GreetTest {
     @Test
     public void test(){
          Greet  gre= new Greet();
          Assert.assertEquals("Hello", gre.says());
     }
}
