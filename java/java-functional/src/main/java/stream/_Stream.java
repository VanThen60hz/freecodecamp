package stream;


import java.util.List;

import static stream._Stream.Gender.*;


public class _Stream {
    public static void main(String[] args) {
        List<Person> people = List.of(
                new Person("John", MALE),
                new Person("Maria", FEMALE),
                new Person("Aisha", FEMALE),
                new Person("Alex", MALE),
                new Person("Alice", FEMALE),
                new Person("Bob", PREFER_NOT_TO_SAY)
        );

//        people.stream()
//                .map(person -> person.name)
//                .mapToInt(String::length)
//                .forEach(System.out::println);

        boolean containsOnlyFemale = people.stream()
                .noneMatch(person -> PREFER_NOT_TO_SAY.equals(person.gender));

        System.out.println(containsOnlyFemale);

        
    }

    static class Person {
        private final String name;
        private final Gender gender;

        public Person(String name, Gender gender) {
            this.name = name;
            this.gender = gender;
        }

        @Override
        public String toString() {
            return "Person{" +
                    "name='" + name + '\'' +
                    ", gender=" + gender +
                    '}';
        }
    }

    enum Gender {
        MALE, FEMALE, PREFER_NOT_TO_SAY
    }
}
