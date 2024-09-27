import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
public class Checkbox {
    public static void main(String [] args){
        JFrame frame = new JFrame("Checkbox");
        JPanel panel= new JPanel(new GridLayout(2,2));
        JCheckBox javacheckbox = new JCheckBox("Java");
        JCheckBox cppcheckbox = new JCheckBox("C++");
        JCheckBox Ccheckbox = new JCheckBox("C");
        JTextField langfield = new JTextField(30);
        langfield.setEditable(false);
        ItemListener itemListener=new ItemListener() {
            @Override
            public void itemStateChanged(ItemEvent e) {
                StringBuilder languages=new StringBuilder();
                if (javacheckbox.isSelected()){
                    languages.append("Java");
                }
                if (cppcheckbox.isSelected()){
                    languages.append("C++");
                }
                if (Ccheckbox.isSelected()){
                    languages.append("C");
                }
                langfield.setText(languages.toString().trim());
            }
        };
        javacheckbox.addItemListener(itemListener);
        cppcheckbox.addItemListener(itemListener);
        Ccheckbox.addItemListener(itemListener);


        panel.add(javacheckbox);
        panel.add(Ccheckbox);
        panel.add(cppcheckbox);
        panel.add(langfield);


        frame.add(panel);
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}