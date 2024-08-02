import javax.swing.*;
import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

public class CheckBoxExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("CheckBox Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel(new GridLayout(3, 1));

        JCheckBox javaCheckBox = new JCheckBox("Java");
        JCheckBox cCheckBox = new JCheckBox("C");
        JCheckBox cppCheckBox = new JCheckBox("C++");

        JTextField selectedLanguagesField = new JTextField(30);
        selectedLanguagesField.setEditable(false);

        // Create an ItemListener to handle checkbox events
        ItemListener itemListener = new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                StringBuilder selectedLanguages = new StringBuilder();
                if (javaCheckBox.isSelected()) {
                    selectedLanguages.append("Java ");
                }
                if (cCheckBox.isSelected()) {
                    selectedLanguages.append("C ");
                }
                if (cppCheckBox.isSelected()) {
                    selectedLanguages.append("C++ ");
                }
                selectedLanguagesField.setText(selectedLanguages.toString().trim());
            }
        };

        // Add the ItemListener to each checkbox
        javaCheckBox.addItemListener(itemListener);
        cCheckBox.addItemListener(itemListener);
        cppCheckBox.addItemListener(itemListener);

        panel.add(javaCheckBox);
        panel.add(cCheckBox);
        panel.add(cppCheckBox);
        panel.add(selectedLanguagesField);

        frame.add(panel);
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}
