import javax.swing.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;


public class keyup3 implements KeyListener {
    JTextField jf1 = new JTextField(20);
    JFrame jt1 = new JFrame();


    keyup3() {
        jf1.setBounds(10, 10, 200, 30);
        jt1.add(jf1);
        jt1.setLayout(null);
        jt1.setSize(300, 200);
        jt1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jt1.setVisible(true);
        jf1.addKeyListener(this); // Corrected spelling
    }




    @Override
    public void keyPressed(KeyEvent e) {
        // Handle key released events if needed
        jf1.setText("Key Pressed: " + KeyEvent.getKeyText(e.getKeyCode()));


    }


    @Override
    public void keyTyped(KeyEvent e) {
        // Handle key typed events if needed
        jf1.setText("Key Typed: " + e.getKeyChar());


    }
    public void keyReleased(KeyEvent e) {
        jf1.setText("Key Released: " + KeyEvent.getKeyText(e.getKeyCode()));
    }
    public static void main(String[] args) {
        new keyup3();
    }
}
