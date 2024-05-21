class Vehicle {
    public void start() {
        System.out.println("Vehicle started.");
    }
}

class Car extends Vehicle {
    @Override
    public void start() {
        System.out.println("Car started with key.");
    }
}

public class MOExample {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        vehicle.start();

        Vehicle car = new Car();
        car.start();
    }
}