package intro_to_java_programming;


public class Main {

    public static void main(String[] args) {
        Level lv = Level.LOW;
        lv.setLevelCode(5);
        System.out.println(lv.getLevelCode());
    }
}
