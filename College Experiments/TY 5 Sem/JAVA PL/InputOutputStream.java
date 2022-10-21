
// File class 
import java.io.File;
import java.io.FileWriter;
// IOException class to handle errors 
import java.io.IOException;
import java.util.Scanner;

class Student {
    int RollNo;
    String name;
    Double cgpa;
    String Dept;

    Student() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Your Name");
        name = scan.next();
        System.out.println("Enter Your Roll NO");
        RollNo = scan.nextInt();
        System.out.println("Enter Your cgpa");
        cgpa = scan.nextDouble();
        System.out.println("Enter Your Department Name");
        Dept = scan.next();
    }

}

public class InputOutputStream {
    public static void main(String[] args) {
        System.out.println("Name: Aniket Tiwari");
        System.out.println("RollNo: 21143285");

        try {

            File Record = new File("Students.txt");

            if (Record.createNewFile()) {
                System.out.println("New File created successfully");

                Student s = new Student();

                FileWriter Fr = new FileWriter(Student);
                

            } else {
                System.out.println("File already exists");
            }

        } catch (Exception e) {
            System.out.println("Some exception occured");
        }

    }
}
