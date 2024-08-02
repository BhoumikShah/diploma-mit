import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class CalSquareDemo extends JFrame implements ActionListener {
    JLabel l1 = new JLabel("Enter number to square");
    JLabel l2 = new JLabel("Result");
    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();
    JButton jb = new JButton("Square the number");

    CalSquareDemo() {
        setLayout(new BorderLayout());
        JPanel inputPanel = new JPanel(new GridLayout(2, 2));
        inputPanel.add(l1);
        inputPanel.add(t1);
        inputPanel.add(l2);
        inputPanel.add(t2);

        add(inputPanel, BorderLayout.CENTER);
        add(jb, BorderLayout.SOUTH);

        jb.addActionListener(this);
        setSize(300, 200);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent ae) {
        int n1 = Integer.parseInt(t1.getText());
        int n2 = n1 * n1;
        t2.setText(String.valueOf(n2));
    }

    public static void main(String args[]) {
        new CalSquareDemo();
    }
}
