import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class bigger extends JFrame implements ActionListener {
    JLabel l1 = new JLabel("Enter number 1");
    JLabel l2 = new JLabel("Enter number 2");
    JLabel l3 = new JLabel("Result");
    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();
    JTextField t3 = new JTextField();
    JButton jb = new JButton("Largest");

    bigger() {
        setLayout(new GridLayout(4, 2));
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(l3);
        add(t3);
        add(jb);
        jb.setBounds(5,5,10,10);
        jb.addActionListener(this);
        setSize(300, 300);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent ae) {
        int n1 = Integer.parseInt(t1.getText());
        int n2 = Integer.parseInt(t2.getText());

        if (n1 > n2) {
            t3.setText(String.valueOf(n1));
        } else {
            t3.setText(String.valueOf(n2));
        }
    }

    public static void main(String args[]) {
        new bigger();
    }
}

