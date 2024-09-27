import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.Random; // Import for random selection

public class MouseClickCircles extends JFrame {

    public MouseClickCircles() {
        setTitle("Mouse Click Circles");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                Graphics g = getGraphics();

                // Randomly choose a color (blue, red, or green)
                Random rand = new Random();
                int colorChoice = rand.nextInt(3); // Generate 0, 1, or 2

                switch (colorChoice) {
                    case 0:
                        g.setColor(Color.BLUE);
                        break;
                    case 1:
                        g.setColor(Color.RED);
                        break;
                    case 2:
                        g.setColor(Color.GREEN);
                        break;
                }

                g.fillOval(e.getX() - 10, e.getY() - 10, 20, 20);
            }
        });

        setVisible(true);
    }

    public static void main(String[] args) {
        new MouseClickCircles();
    }
}