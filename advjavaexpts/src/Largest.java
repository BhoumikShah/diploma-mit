import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Largest  extends JFrame implements ActionListener{
    JLabel l1= new JLabel("enter number");
    JLabel l2 = new JLabel("enter number 2");
    JLabel l3 = new JLabel("result:");
    JTextField t1 =new JTextField();
    JTextField t2 = new JTextField();
    JTextField t3 =new JTextField();
    JButton jb =new JButton("Largest");

    Largest(){
        setLayout(new GridLayout(5,3));
        add(l1);
        add(l2);
        add(l3);
        add(t1);
        add(t2);
        add(t3);
        add(jb);
        jb.setBounds(8,8,8,8);
        jb.addActionListener(this);
        setSize(400,400);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        int n1 = Integer.parseInt(t1.getText());
        int n2 =Integer.parseInt(t2.getText());
        if (n1>n2){
            t3.setText(String.valueOf(n1));
        }
         else if (n1<n2){
            t3.setText(String.valueOf(n2));
        }
        else {
            t3.setText("Equal");
        }

    }
    public static void main(String args[]){
        new Largest()
;    }
}