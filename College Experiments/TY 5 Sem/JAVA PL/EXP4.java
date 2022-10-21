import java.util.*;

class ExceptResult extends Exception {
    String detail;

    ExceptResult(String str) {
        detail = str;
    }

    public String getMessage() {
        return "ExceptResult[" + this.detail + "]";
    }
}

class Result {
    int n;
    int marks[];
    double percentage;

    void getMarks() {
        int flag = 0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter total number of subjects:");
            n = sc.nextInt();
            this.marks = new int[n];
            try {
                System.out.print("Enter marks [out of 100] of all subjects!\n");
                for (int i = 0; i < n; i++) {
                    System.out.print("Enter marks of subject" + (i + 1) + ":");
                    marks[i] = sc.nextInt();
                    if (marks[i] < 40) {
                        flag = 1;
                    }
                }
                if (flag == 1) {
                    throw new ExceptResult("You Failed as your marks < 40!");
                } else {
                    this.calResult();
                }
            } catch (ExceptResult er) {
                System.out.print("\nCaught an exception: " + er.getMessage());
            } catch (Exception e) {
                System.out.print("\nCaught an exception: " + e);
            } finally {
                if (flag == 0) {
                    System.out.println("Well done! You Have passed the exam");
                } else {
                    System.out.println("Sorry You Failed!\n Please Try again!");
                }
            }
        }
    }

    void calResult() {
        int sum = 0;
        for (int i = 0; i < this.n; i++) {
            sum = sum + this.marks[i];
        }
        System.out.println("Sum : " + sum);
        this.percentage = ((double) sum / this.n);
        System.out.println("Percentage : " + this.percentage);
    }
}

class EXP4 {

    public static void main(String args[]) {
        System.out.println("Name : Aniket Tiwari");
        System.out.println("ROll No : 21143285");
        Result r1 = new Result();
        r1.getMarks();
    }
}
