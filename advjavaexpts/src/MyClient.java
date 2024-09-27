import java.io.*;
import java.net.*;

public class MyClient {

    public static void main(String[] args) {

        try {
            Socket s = new Socket("localhost", 8070);

            DataOutputStream dout = new DataOutputStream(s.getOutputStream());
            dout.writeUTF("Hello Server");
            dout.flush();

            // Receive message from server (before closing socket)
            DataInputStream din = new DataInputStream(s.getInputStream());
            String serverMessage = din.readUTF();
            System.out.println("Received from server: " + serverMessage);

            // Close connections (in reverse order)
            din.close();
            dout.close();
            s.close();

        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

    }
}