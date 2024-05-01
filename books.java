class Book {
    String author;
    String title;
    String publisher;

    // Constructor
    public Book(String author, String title, String publisher) {
        this.author = author;
        this.title = title;
        this.publisher = publisher;
    }
}

class BookInfo extends Book {
    double price;
    int stockPosition;

    // Constructor
    public BookInfo(String author, String title, String publisher, double price, int stockPosition) {
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

public class books {
    public static void main(String[] args) {
        // Creating and initializing objects of BookInfo
        BookInfo book1 = new BookInfo("John Doe", "Java Programming", "ABC Publications", 29.99, 50);
        BookInfo book2 = new BookInfo("Jane Smith", "Introduction to Algorithms", "XYZ Books", 39.99, 30);
        BookInfo book3 = new BookInfo("Michael Johnson", "Python Basics", "DEF Press", 19.99, 20);

        // Displaying information for the objects
        System.out.println("Book 1 Information:");
        book1.show();

        System.out.println("\nBook 2 Information:");
        book2.show();

        System.out.println("\nBook 3 Information:");
        book3.show();
    }
}
