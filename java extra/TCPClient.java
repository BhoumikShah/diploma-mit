import java.io.*;
import java.net.*;

public class TCPClient {
    public static void main(String[] args) throws IOException {
        if (args.length == 0) {
            // Server mode
            ServerSocket serverSocket = new ServerSocket(1234);
            System.out.println("Server listening on port 1234...");

            while (true) {
                Socket socket = serverSocket.accept();
                System.out.println("Client connected!");

                BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                PrintWriter out = new PrintWriter(new OutputStreamWriter(socket.getOutputStream()), true);

                String message = in.readLine();
                System.out.println("Client message: " + message);

                out.println("Hello from the server!");

                socket.close();
                System.out.println("Client disconnected.");
            }
        } else {
            // Client mode
            String hostname = args[0];
            int port = Integer.parseInt(args[1]);

            Socket socket = new Socket(hostname, port);
            System.out.println("Connected to server!");

            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(new OutputStreamWriter(socket.getOutputStream()), true);

            out.println("Hello from the client!");

            String response = in.readLine();
            System.out.println("Server response: " + response);

            socket.close();
            System.out.println("Disconnected from server.");
        }
    }
}