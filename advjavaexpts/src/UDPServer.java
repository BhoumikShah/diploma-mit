import java.net.*;
import java.io.*;

public class UDPServer {

    public static void main(String[] args) throws IOException {
        // Replace with the desired port number
        int port = 9876;

        // Create a DatagramSocket to listen on the specified port
        DatagramSocket serverSocket = new DatagramSocket(port);

        System.out.println("Server started on port: " + port);

        byte[] receiveData = new byte[1024];

        while (true) {
            // Create a DatagramPacket to receive data
            DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);

            // Receive data from the client
            serverSocket.receive(receivePacket);

            // Extract the message and sender information
            String message = new String(receivePacket.getData());
            InetAddress clientAddress = receivePacket.getAddress();
            int clientPort = receivePacket.getPort();

            System.out.println("Received message from client: " + message);




        }
    }
}