import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class password1 extends JFrame implements ActionListener {
    private final JPasswordField passwordField;
    private final JTextField resultField;


    public password1() {
        super("Password Check");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());


        passwordField = new JPasswordField(10);
        resultField = new JTextField(20);
        resultField.setEditable(false);


        JButton checkButton = new JButton("Check");
        checkButton.addActionListener(this);


        add(new JLabel("Password:"));
        add(passwordField);
        add(checkButton);
        add(resultField);


        pack();
        setVisible(true);
    }


    public void actionPerformed(ActionEvent e) {
        char[] passwordChars = passwordField.getPassword();

        String password = new String(passwordChars);


        if (password.equals("bhoumik")) {
            resultField.setText("Correct Password");
        } else {
            resultField.setText("Incorrect Password");
        }
    }


    public static void main(String[] args) {
        new password1();
    }
}