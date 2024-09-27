import java.sql.*;

public class JdbcTutorial {

    public static void main(String[] args) {

        try {
            Class.forName("org.h2.Driver"); // Register the H2 JDBC driver

            String url = "jdbc:h2:mem:;INIT=RUNSCRIPT FROM 'classpath:users.sql'";
            Connection connection = DriverManager.getConnection(url);

            if (connection != null) {
                System.out.println("Connection established successfully!");
            } else {
                System.out.println("Failed to establish connection.");
            }

            // Close the connection
            connection.close();
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
    }
}