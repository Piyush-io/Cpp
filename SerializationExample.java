import java.io.*;

public class SerializationExample {

    public static void main(String[] args) {
        // Create an object to serialize
        Person person = new Person("John Doe", 30);
        try (
            FileOutputStream fileOut = new FileOutputStream("person.ser");
            ObjectOutputStream out = new ObjectOutputStream(fileOut)
        ) {
            out.writeObject(person);
            System.out.println("Object serialized successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
        // Deserialize the object from the file
        try (
            FileInputStream fileIn = new FileInputStream("person.ser");
            ObjectInputStream in = new ObjectInputStream(fileIn)
        ) {
            Person deserializedPerson = (Person) in.readObject();
            System.out.println("Deserialized object: " + deserializedPerson);
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}

class Person implements Serializable {

    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getters and setters
    @Override
    public String toString() {
        return "Person{name='" + name + "', age=" + age + "}";
    }
}
