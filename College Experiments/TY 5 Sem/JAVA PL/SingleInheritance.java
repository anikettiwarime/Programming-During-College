public class SingleInheritance {
    public static void main(String[] args) {
        System.out.println("Name : Aniket Tiwari 21143285");
        Car c = new Car();
        c.Display();
        c.newDisplay();
    }
}

class Vehicle {
    protected String type;

    public void Display() {
        System.out.println("This is vehicle");
    }
}

class Car extends Vehicle {

    public Car() {
        type = "Car";
    }

    public void newDisplay() {
        System.out.println("The type of this vehicle is " + type);
    }
}