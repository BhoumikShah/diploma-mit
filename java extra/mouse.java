import javax.swing.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

public class mouse implements MouseListener,MouseMotionListener{
    JTextField jf1 = new JTextField(20);
    JFrame jt1 = new JFrame();

    mouse() {
        jf1.setBounds(10, 10, 200, 30);
        jt1.add(jf1);
        jt1.setLayout(null);
        jt1.setSize(300, 200);
        jt1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jt1.setVisible(true);
        jf1.addMouseListener(this);
        jf1.addMouseMotionListener(this);
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        jf1.setText("Mouse Clicked");
    }

    @Override
    public void mousePressed(MouseEvent e) {
        jf1.setText("Mouse Pressed");
    }

    @Override
    public void mouseReleased(MouseEvent e) {
        jf1.setText("Mouse Released");
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        jf1.setText("Mouse Entered");
    }

    @Override
    public void mouseExited(MouseEvent e) {
        jf1.setText("Mouse Exited");
    }
    public void mouseDragged(MouseEvent e) {
        jf1.setText("Mouse Dragged: (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseMoved(MouseEvent e) {
        jf1.setText("Mouse Moved: (" + e.getX() + ", " + e.getY() + ")");
    }

    public static void main(String[] args) {
        new mouse();
    }


}
