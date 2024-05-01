import javax.swing.*;
import java.awt.*;

public class ConcentricCircles extends JFrame {

    public ConcentricCircles() {
        setTitle("Concentric Circles");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // Center the frame
        setResizable(false);

        CirclesPanel panel = new CirclesPanel();
        add(panel);

        setVisible(true);
    }

    public static void main(String[] args) {
        new ConcentricCircles();
    }

    class CirclesPanel extends JPanel {

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

            int centerX = getWidth() / 2;
            int centerY = getHeight() / 2;
            int radius1 = 50;
            int radius2 = 100;
            int radius3 = 120;

            g.setColor(Color.RED);
            g.drawOval(centerX - radius1, centerY - radius1, 2 * radius1, 2 * radius1);

            g.setColor(Color.GREEN);
            g.drawOval(centerX - radius2, centerY - radius2, 2 * radius2, 2 * radius2);

            g.setColor(Color.BLUE);
            g.drawOval(centerX - radius3, centerY - radius3, 2 * radius3, 2 * radius3);
        }
    }
}
