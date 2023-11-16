package functional_interface;

import java.util.function.BiPredicate;
import java.util.function.Predicate;

public class _PredicateAndBiPredicate {
    public static void main(String[] args) {
        System.out.println("Without predicate");
        System.out.println(isPhoneNumberValid("07000000000"));
        System.out.println(isPhoneNumberValid("0700000000"));
        System.out.println(isPhoneNumberValid("09033445000"));


        System.out.println("Predicate");
        System.out.println(isPhoneNumberValidPredicate.test("07000000000"));
        System.out.println(isPhoneNumberValidPredicate.test("0700000000"));
        System.out.println(isPhoneNumberValidPredicate.test("09033445000"));

        System.out.println(
                "Is phone number valid and contains 3 = " +
                        isPhoneNumberValidPredicate.and(containsNumber3).test("07000000003")
        );

        System.out.println(
                "Is phone number valid and contains 3 = " +
                        isPhoneNumberValidPredicate.and(containsNumber3).test("0912135435435")
        );

        System.out.println(
                "Is phone number valid and contains 3 = " +
                        isPhoneNumberValidPredicate.or(containsNumber3).test("07000000000")
        );

        System.out.println(
                "Is phone number valid and password right format = " +
                        isPhoneNumberAndPasswordFormat.test("07000000000", "Tester1231@")
        );

        System.out.println(
                "Is phone number valid and password right format = " +
                        isPhoneNumberAndPasswordFormat.test("07000000000", "test@")
        );
    }

    static boolean isPhoneNumberValid(String phoneNumber) {
        return phoneNumber.startsWith("07") && phoneNumber.length() == 11;
    }

    static Predicate<String> isPhoneNumberValidPredicate =
            phoneNumber -> phoneNumber.startsWith("07") && phoneNumber.length() == 11;

    static Predicate<String> containsNumber3 =
            phoneNumber -> phoneNumber.contains("3");

    static BiPredicate<String, String> isPhoneNumberAndPasswordFormat =
            (phoneNumber, password) ->
                    isPhoneNumberValidPredicate.test(phoneNumber) && password.matches("[A-z]?[1-9]?.{8,}");


}
