class Mythread1 extends Thread {
    public void run() {
        for (int i = 0; i < 10; i++) {
            try {
                System.out.println("Thread 1 running " + (i + 1) + " time");
                this.sleep(1000);
            } catch (Exception e) {
                System.out.println("Error Occured in thread 1");
            }
        }
    }
}

class Mythread2 extends Thread {
    public void run() {
        for (int i = 0; i < 10; i++) {
            try {
                System.out.println("-------------Thread 2 running " + (i + 1) + " time-------------");
                this.sleep(2000);
            } catch (Exception e) {
                System.out.println("Error Occured in thread 2");
            }
        }
    }
}

public class Multithreading {
    public static void main(String[] args) {
        System.out.println("Name: Aniket Tiwari");
        System.out.println("Roll No: 21143285");
        Mythread1 th1 = new Mythread1();
        Mythread2 th2 = new Mythread2();
        th1.start();
        th2.start();
    }
}