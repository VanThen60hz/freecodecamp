package functional_interface;

import java.util.function.Function;

public class _Function {
    public static void main(String[] args) {

        int increment = increment(1);
        System.out.println(increment);
        //Function takes 1 argument and produce 1 result
        Integer increment2 = incrementByOneFunction.apply(1);
        System.out.println(increment2);

        int multiply = multipleBy10Function.apply(increment2);
        System.out.println(multiply);

        Function<Integer, Integer> addByOneAndMultiplyBy10
                = incrementByOneFunction.andThen(multipleBy10Function);

        System.out.println(addByOneAndMultiplyBy10.apply(4));
    }

    static Function<Integer, Integer> incrementByOneFunction =
            number -> number + 1;

    static Function<Integer, Integer> multipleBy10Function =
            number -> number * 10;

    static int increment(int number) {
        return number + 1;
    }
}
