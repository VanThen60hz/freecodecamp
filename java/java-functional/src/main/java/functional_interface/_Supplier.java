package functional_interface;

import java.util.List;
import java.util.function.Supplier;

public class _Supplier {
    public static void main(String[] args) {
        System.out.println(getDBConnectUrl());
        System.out.println(getDBConnectUrlSupplier.get());
    }

    static String getDBConnectUrl() {
        return "jdbc://localhost:5432/users";
    }

    static Supplier<List<String>> getDBConnectUrlSupplier =
            () -> List.of(
                    "jdbc://localhost:5432/users",
                    "jdbc://localhost:5432/customers"
            );
}
