import javax.swing.*;
import java.awt.*;

public class SmilingFace extends JFrame {

    public SmilingFace() {
        setTitle("Smiling Face");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // Center the frame
        setResizable(false);

        SmilingFacePanel panel = new SmilingFacePanel();
        add(panel);

        setVisible(true);
    }

    public static void main(String[] args) {
        new SmilingFace();
    }
}

class SmilingFacePanel extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Draw face
        g.setColor(Color.YELLOW);
        g.fillOval(50, 50, 200, 200);

        // Draw eyes
        g.setColor(Color.BLACK);
        g.fillOval(100, 100, 30, 30);
        g.fillOval(170, 100, 30, 30);

        // Draw mouth (smile)
        g.setColor(Color.BLACK);
        g.drawArc(100, 120, 100, 80, 180, 180);
    }
}
