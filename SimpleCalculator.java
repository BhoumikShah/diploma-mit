import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SimpleCalculator extends JFrame implements ActionListener {

    private JTextField textField;
    private JButton[] numberButtons;
    private JButton[] functionButtons;
    private JButton addButton, subButton, mulButton, divButton, eqlButton, clrButton;
    private JPanel panel;

    private double num1, num2, result;
    private char operator;

    SimpleCalculator() {
        setTitle("Simple Calculator");
        setSize(300, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setResizable(false);

        textField = new JTextField();
        textField.setHorizontalAlignment(JTextField.RIGHT);
        textField.setEditable(false);

        numberButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            numberButtons[i].addActionListener(this);
        }

        functionButtons = new JButton[6];
        addButton = new JButton("+");
        subButton = new JButton("-");
        mulButton = new JButton("*");
        divButton = new JButton("/");
        eqlButton = new JButton("=");
        clrButton = new JButton("C");

        functionButtons[0] = addButton;
        functionButtons[1] = subButton;
        functionButtons[2] = mulButton;
        functionButtons[3] = divButton;
        functionButtons[4] = eqlButton;
        functionButtons[5] = clrButton;

        for (int i = 0; i < 6; i++) {
            functionButtons[i].addActionListener(this);
        }

        panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4, 10, 10));

        panel.add(textField);
        panel.add(clrButton);

        for (int i = 1; i < 10; i++) {
            panel.add(numberButtons[i]);
        }
        panel.add(addButton);
        panel.add(numberButtons[0]);
        panel.add(subButton);
        panel.add(mulButton);
        panel.add(divButton);
        panel.add(eqlButton);

        add(panel);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                textField.setText(textField.getText().concat(String.valueOf(i)));
            }
        }
        if (e.getSource() == clrButton) {
            textField.setText("");
        }
        if (e.getSource() == addButton) {
            num1 = Double.parseDouble(textField.getText());
            operator = '+';
            textField.setText("");
        }
        if (e.getSource() == subButton) {
            num1 = Double.parseDouble(textField.getText());
            operator = '-';
            textField.setText("");
        }
        if (e.getSource() == mulButton) {
            num1 = Double.parseDouble(textField.getText());
            operator = '*';
            textField.setText("");
        }
        if (e.getSource() == divButton) {
            num1 = Double.parseDouble(textField.getText());
            operator = '/';
            textField.setText("");
        }
        if (e.getSource() == eqlButton) {
            num2 = Double.parseDouble(textField.getText());

            switch (operator) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0)
                        result = num1 / num2;
                    else
                        textField.setText("Error");
                    break;
            }

            textField.setText(String.valueOf(result));
            num1 = result;
        }
    }

    public static void main(String[] args) {
        new SimpleCalculator();
    }
}
