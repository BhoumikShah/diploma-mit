import java.io.*;
import java.net.*;

public class MyServer {

    public static void main(String[] args) {

        try {
            // Use a valid port number (between 1024 and 49151)
            int portNumber = 8070; // Example port number (change as needed)
            ServerSocket ss = new ServerSocket(portNumber);

            System.out.println("Server started on port: " + portNumber);

            Socket s = ss.accept();

            DataInputStream dis = new DataInputStream(s.getInputStream());

            String str = (String) dis.readUTF();

            System.out.println("message= " + str);
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());
            dos.writeUTF("Hello from Server!");
            dos.flush();

            ss.close();

        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

    }
}