package final_section;

import java.util.function.*;

public class Lambdas {
    Integer number = null;
    int counter = 0;


    public static void main(String[] args) {

        System.out.println(upperCaseName.apply("Alex", null));
    }

    static BiFunction<String, Integer, String> upperCaseName = (name, age) -> {
        if (name.isBlank()) throw new IllegalArgumentException("");
        return name.toUpperCase() + " is " + age;
    };


}
