import com.mongodb.*;
import com.mongodb.client.*;

public class jdbc {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Connect to MongoDB server
            MongoClient mongoClient = MongoClients.create("mongodb://localhost:27017");

            // Get the database (creates it if it doesn't exist)
            MongoDatabase database = mongoClient.getDatabase("your_database_name");

            // Get the collection (creates it if it doesn't exist)
            MongoCollection<Document> collection = database.getCollection("your_collection_name");

            // Get student data from user input
            System.out.print("Enter student name: ");
            String name = scanner.nextLine();
            System.out.print("Enter student age: ");
            int age = scanner.nextInt();

            // Create a document to store student data
            Document studentDocument = new Document()
                    .append("name", name)
                    .append("age", age);

            // Insert the document into the collection
            collection.insertOne(studentDocument);

            System.out.println("Student data inserted successfully!");

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            scanner.close(); // Close the Scanner to avoid resource leaks
        }
    }
}