import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class yesno implements ActionListener{
    JTextField jt1=new JTextField(" ");
    JButton yes=new JButton("Yes");
    JButton no=new JButton("No");
    JButton Cancel=new JButton("Cancel");
    JFrame jf=new JFrame();
    yesno () {
        jt1.setBounds(200,200,200,20);
        jf.add(jt1);
        yes.setBounds(10,20,40,50);
        no.setBounds(15,25,45,55);
        Cancel.setBounds(20,30,50,60);
        jf.setLayout(null);
        jt1.setVisible(true);
        yes.addActionListener(this);
        no.addActionListener(this);
        Cancel.addActionListener(this);
    }
    public void actionPerformed (ActionEvent e){
        if (e.getSource()== yes){
            jt1.setText("You Pressed Yes");
        }
        if (e.getSource()== no){
            jt1.setText("You Pressed No");
        }
        else if (e.getSource()== Cancel){
            jt1.setText("You Pressed Cancel");
        }
    }

    public static void main(String[] args){
        new yesno();
    }
}
