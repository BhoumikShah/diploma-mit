import java.util.Scanner;

class Book1 {
    String author;
    String title;
    String publisher;

    // Constructor
    public Book1(String author, String title, String publisher) {
        this.author = author;
        this.title = title;
        this.publisher = publisher;
    }
}

class BookInfo1 extends Book {
    double price;
    int stockPosition;

    // Constructor
    public BookInfo1(String author, String title, String publisher, double price, int stockPosition) {
        super(author, title, publisher);
        this.price = price;
        this.stockPosition = stockPosition;
    }

    // Method to display book information
    public void show() {
        System.out.println("Author: " + author);
        System.out.println("Title: " + title);
        System.out.println("Publisher: " + publisher);
        System.out.println("Price: " + price);
        System.out.println("Stock Position: " + stockPosition);
    }
}

public class acceptbook {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get input from the user for BookInfo objects
        System.out.println("Enter details for Book 1:");
        BookInfo1 book1 = getBookInfoFromUser(scanner);

        System.out.println("\nEnter details for Book 2:");
        BookInfo1 book2 = getBookInfoFromUser(scanner);

        System.out.println("\nEnter details for Book 3:");
        BookInfo1 book3 = getBookInfoFromUser(scanner);

        // Displaying information for the objects
        System.out.println("\nBook 1 Information:");
        book1.show();

        System.out.println("\nBook 2 Information:");
        book2.show();

        System.out.println("\nBook 3 Information:");
        book3.show();

        scanner.close();
    }

    private static BookInfo1 getBookInfoFromUser(Scanner scanner) {
        System.out.print("Enter author: ");
        String author = scanner.nextLine();

        System.out.print("Enter title: ");
        String title = scanner.nextLine();

        System.out.print("Enter publisher: ");
        String publisher = scanner.nextLine();

        System.out.print("Enter price: ");
        double price = scanner.nextDouble();

        System.out.print("Enter stock position: ");
        int stockPosition = scanner.nextInt();
        scanner.nextLine(); // Consume newline character

        return new BookInfo1(author, title, publisher, price, stockPosition);
    }
}
