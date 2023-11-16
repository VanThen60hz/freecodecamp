package functional_interface;

import java.util.function.BiConsumer;

public class _BiConsumer {
    public static void main(String[] args) {
        Customer john = new Customer("John", "9999");

//        BiConsumer Functional Interface like void takes 2 argument

        greetCustomerBiCosumer.accept(john, false);
    }

    static BiConsumer<Customer, Boolean> greetCustomerBiCosumer =
            (customer, showPhoneNumber) ->
                    System.out.println(
                            "Hello " + customer.customerName +
                                    ", thanks for registering phone number " +
                                    (showPhoneNumber ? customer.customerPhoneNumber : "*********")
                    );


    static class Customer {
        private final String customerName;
        private final String customerPhoneNumber;

        Customer(String customerName, String customerPhoneNumber) {
            this.customerName = customerName;
            this.customerPhoneNumber = customerPhoneNumber;
        }
    }
}
