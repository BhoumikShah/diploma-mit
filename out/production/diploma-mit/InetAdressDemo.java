import java.net.*;

public class InetAdressDemo {
    public static void main(String[] args) {
        // Creating InetAddress objects using different factory methods
        InetAddress address1 = null;
        InetAddress address2 = null;
        InetAddress[] addresses = null;
        InetAddress localAddress = null;

        try {
            address1 = InetAddress.getByName("www.google.com");
            address2 = InetAddress.getByName("127.0.0.1");
            addresses = InetAddress.getAllByName("www.example.com");
            localAddress = InetAddress.getLocalHost();
        } catch (UnknownHostException e) {
            System.err.println("Error: " + e.getMessage());
            return;
        }

        System.out.println("Hostname: " + address1.getHostName());
        System.out.println("IP Address: " + address1.getHostAddress());

        System.out.println("Hostname: " + address2.getHostName());
        System.out.println("IP Address: " + address2.getHostAddress());

        for (InetAddress address : addresses) {
            System.out.println("Hostname: " + address.getHostName());
            System.out.println("IP Address: " + address.getHostAddress());
        }

        System.out.println("Local Hostname: " + localAddress.getHostName());
        System.out.println("Local IP Address: " + localAddress.getHostAddress());
    }
}
