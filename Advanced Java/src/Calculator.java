import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Calculator extends JFrame implements ActionListener {
    private JTextField textField;
    private JButton[] numberButtons = new JButton[10];
    private JButton addButton, subtractButton, multiplyButton, divideButton, decimalButton, equalButton, deleteButton, clearButton;
    private JPanel panel;
    private double num1 = 0, num2 = 0, result = 0;
    private char operator;

    public Calculator() {
        textField = new JTextField(16);
        textField.setEditable(false);
        textField.setHorizontalAlignment(JTextField.RIGHT);

        addButton = new JButton("+");
        subtractButton = new JButton("-");
        multiplyButton = new JButton("*");
        divideButton = new JButton("/");
        decimalButton = new JButton(".");
        equalButton = new JButton("=");
        deleteButton = new JButton("Del");
        clearButton = new JButton("C");

        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
        }

        panel = new JPanel();
        panel.setLayout(new GridLayout(5, 4, 5, 5));

        // First row
        panel.add(numberButtons[7]);
        panel.add(numberButtons[8]);
        panel.add(numberButtons[9]);
        panel.add(divideButton);

        // Second row
        panel.add(numberButtons[4]);
        panel.add(numberButtons[5]);
        panel.add(numberButtons[6]);
        panel.add(multiplyButton);

        // Third row
        panel.add(numberButtons[1]);
        panel.add(numberButtons[2]);
        panel.add(numberButtons[3]);
        panel.add(subtractButton);

        // Fourth row
        panel.add(numberButtons[0]);
        panel.add(decimalButton);
        panel.add(equalButton);
        panel.add(addButton);

        // Fifth row
        panel.add(deleteButton);
        panel.add(clearButton);
        panel.add(new JLabel()); // Empty label for spacing
        panel.add(new JLabel()); // Empty label for spacing

        for (int i = 0; i < 10; i++) {
            numberButtons[i].addActionListener(this);
        }
        addButton.addActionListener(this);
        subtractButton.addActionListener(this);
        multiplyButton.addActionListener(this);
        divideButton.addActionListener(this);
        decimalButton.addActionListener(this);
        equalButton.addActionListener(this);
        deleteButton.addActionListener(this);
        clearButton.addActionListener(this);

        add(textField, BorderLayout.NORTH);
        add(panel);

        setSize(250, 300);
        setTitle("Calculator");
        setLocationRelativeTo(null);
    }

    public void actionPerformed(ActionEvent e) {
        String buttonText = e.getActionCommand();

        if (buttonText.matches("[0-9]+")) {
            textField.setText(textField.getText() + buttonText);
        } else if (buttonText.equals("+")) {
            num1 = Double.parseDouble(textField.getText());
            operator = '+';
            textField.setText("");
        } else if (buttonText.equals("-")) {
            num1 = Double.parseDouble(textField.getText());
            operator = '-';
            textField.setText("");
        } else if (buttonText.equals("*")) {
            num1 = Double.parseDouble(textField.getText());
            operator = '*';
            textField.setText("");
        } else if (buttonText.equals("/")) {
            num1 = Double.parseDouble(textField.getText());
            operator = '/';
            textField.setText("");
        } else if (buttonText.equals("=")) {
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
                    if (num2 == 0) {
                        textField.setText("Error");
                        return;
                    }
                    result = num1 / num2;
                    break;
            }
            textField.setText(String.valueOf(result));
        } else if (buttonText.equals("C")) {
            textField.setText("");
            num1 = 0;
            num2 = 0;
            result = 0;
        } else if (buttonText.equals("Del")) {
            String text = textField.getText();
            if (text.length() > 0) {
                textField.setText(text.substring(0, text.length() - 1));
            }
        }
    }

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        calculator.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        calculator.setVisible(true);
    }
}
