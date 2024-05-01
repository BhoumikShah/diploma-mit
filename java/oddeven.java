class OddNumberPrinter implements Runnable {
    public void run() {
        for (int i = 1; i <= 20; i += 2) {
            System.out.println("Odd Thread: " + i);
            try {
                Thread.sleep(500); // Sleep for a short while for better readability
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class EvenNumberPrinter implements Runnable {
    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Even Thread: " + i);
            try {
                Thread.sleep(500); // Sleep for a short while for better readability
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class oddeven {
    public static void main(String[] args) {
        Thread oddThread = new Thread(new OddNumberPrinter());
        Thread evenThread = new Thread(new EvenNumberPrinter());

        oddThread.start();
        evenThread.start();
    }
}