package intro_to_java_programming;

public class OuterClass {


    public void inner(){
        class  InnerClass{
            public void display(){
                System.out.println("This is an inner class");
            }
        }

        InnerClass inner = new InnerClass();
        inner.display();
    }
}
