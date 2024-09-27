import javax.swing.*;
import java.awt.event.KeyListener;
import java.awt.event.KeyEvent;
public class keyup implements KeyListener{
    JTextField jf1 = new JTextField(20) ;
    JFrame jt1 =new JFrame();
    keyup() {
        jf1.setBounds(10,20,200,40);
        jt1.add(jf1);
        jt1.setLayout(null);
        jt1.setSize(200,200);
        jt1.setVisible(true);
        jf1.addKeyListener(this);

    }
    public void keyPressed(KeyEvent e){
        jf1.setText("Key Pressed :" + KeyEvent.getKeyText(e.getKeyCode()));
    }
    public void keyTyped(KeyEvent e){
        jf1.setText("Key Typed :"+ e.getKeyChar());

    }
    public void keyReleased(KeyEvent e){
        jf1.setText("Key Released: " + KeyEvent.getKeyText(e.getKeyCode()));
    }
    public static void main(String[] args){
        new keyup();
    }
}
