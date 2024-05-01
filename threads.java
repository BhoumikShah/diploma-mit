public class threads {
    public static void main(String[] args) {
        NumberPrinter printer = new NumberPrinter();

        Thread thread1 = new Thread(new PrintNumbers(printer, true));
        Thread thread2 = new Thread(new PrintNumbers(printer, false));

        thread1.start();
        thread2.start();
    }
}

class NumberPrinter {
    private boolean printedSecond = false;

    public synchronized void print(int num, boolean increasingOrder) {
        if (!increasingOrder && !printedSecond && num == 2) {
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.println(num);
        if (increasingOrder && num == 2) {
            printedSecond = true;
            notify();
        }
    }
}

class PrintNumbers implements Runnable {
    private NumberPrinter printer;
    private boolean increasingOrder;

    public PrintNumbers(NumberPrinter printer, boolean increasingOrder) {
        this.printer = printer;
        this.increasingOrder = increasingOrder;
    }

    @Override
    public void run() {
        if (increasingOrder) {
            for (int i = 1; i <= 10; i++) {
                printer.print(i, increasingOrder);
            }
        } else {
            for (int i = 10; i >= 1; i--) {
                printer.print(i, increasingOrder);
            }
        }
    }
}
