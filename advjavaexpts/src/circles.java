import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class circles extends JFrame {

    public circles() {
        setTitle("Mouse Click Circles");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent
                                             e) {
                Graphics g = getGraphics();

                // Set a specific color (choose your desired color)
                g.setColor(Color.BLUE); // Change this line to your preferred color (e.g., Color.RED, Color.GREEN)

                g.fillOval(e.getX() - 10, e.getY() - 10, 20, 20);
            }
        });

        setVisible(true);
    }

    public static void main(String[] args) {
        new circles();
    }
}
