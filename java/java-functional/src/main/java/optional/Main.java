package optional;

import java.util.Optional;

public class Main {

    public static void main(String[] args) {
        Optional.ofNullable("john@gmail.com").ifPresentOrElse(
                email -> System.out.println("Sending email to" + email),
                () -> {
                    System.out.println("Cannot send email");
                });

    }
}
