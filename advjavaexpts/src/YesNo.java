import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class YesNo implements ActionListener {
    private final JTextField jt1 = new JTextField(" ");
    private final JButton yes = new JButton("Yes");
    private final JButton no = new JButton("No");
    private final JButton cancel = new JButton("Cancel");
    private final JFrame jf = new JFrame();

    public YesNo() {
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jf.setTitle("Yes/No/Cancel");

        jf.setLayout(null); // Use null layout

        // Set component positions and sizes
        jt1.setBounds(100, 50, 200, 30);
        yes.setBounds(50, 100, 100, 30);
        no.setBounds(170, 100, 100, 30);
        cancel.setBounds(110, 150, 100, 30);

        jf.add(jt1);
        jf.add(yes);
        jf.add(no);
        jf.add(cancel);

        yes.addActionListener(this);
        no.addActionListener(this);
        cancel.addActionListener(this);

        jf.pack();
        jf.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == yes) {
            jt1.setText("You Pressed Yes");
        } else if (e.getSource() == no) {
            jt1.setText("You Pressed No");
        } else if (e.getSource() == cancel) {
            jt1.setText("You Pressed Cancel");
        }
    }

    public static void main(String[] args) {
        new YesNo();
    }
}