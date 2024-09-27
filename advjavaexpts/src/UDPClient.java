import java.net.*;
import java.io.*;

public class UDPClient {

    public static void main(String[] args) throws IOException {
        // Replace with the server's IP address or hostname
        String serverAddress = "localhost";
        // Replace with the desired port number
        int port = 9876;

        String message = "Hello Server (UDP)";
        byte[] data = message.getBytes();

        // Create a DatagramSocket
        DatagramSocket socket = new DatagramSocket();

        // Create a DatagramPacket to send
        DatagramPacket sendPacket =
                new DatagramPacket(data, data.length, InetAddress.getByName(serverAddress), port);

        // Send the packet to the server
        socket.send(sendPacket);

        System.out.println("Sent message to server: " + message);

        // Close the socket (no receiving in this example)
        socket.close();
    }
}