public class Multilevel {
    public static void main(String[] args) {
        System.out.println("Name : Aniket Tiwari \nRollNo : 21143285");
        SportsCar c = new SportsCar();
        c.Display();
    }
}

class Vehicle {
    protected String type;

    public void Display() {
        System.out.println("This is vehicle");
        System.out.println("The type of this vehicle is " + type);
    }
}

class Car extends Vehicle {
    public Car() {
        type = "Car";
    }
}

class SportsCar extends Car {

    public SportsCar() {
        type = "Sports Car";
    }
}