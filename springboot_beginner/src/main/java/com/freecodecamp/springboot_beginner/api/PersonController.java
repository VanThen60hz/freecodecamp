    package com.freecodecamp.springboot_beginner.api;

    import com.freecodecamp.springboot_beginner.model.Person;
    import com.freecodecamp.springboot_beginner.service.PersonService;
    import org.springframework.beans.factory.annotation.Autowired;
    import org.springframework.web.bind.annotation.*;

    import java.util.List;

    @RestController
    @RequestMapping("api/v1/person")
    public class PersonController {
        private final PersonService personService;

        @Autowired
        public PersonController(PersonService personService) {
            this.personService = personService;
        }

        @GetMapping
        public List<Person> getAllPeople(){
            return personService.listAllPeople();
        }

        @PostMapping
        public void addPerson(@RequestBody Person person){
            personService.addPerson(person);
        }

    }
