import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MouseClickCircles extends JFrame {

    public MouseClickCircles() {
        setTitle("Mouse Click Circles");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                Graphics g = getGraphics();
                g.setColor(Color.BLUE);
                g.fillOval(e.getX() - 10, e.getY() - 10, 20, 20);
            }
        });

        setVisible(true);
    }

    public static void main(String[] args) {
        new MouseClickCircles();
    }
}
