import java.awt.*;
import java.awt.event.*;

public class CheckboxDemo extends Frame implements ItemListener {
    Checkbox checkbox1, checkbox2;
    Label label;

    public CheckboxDemo() {
        // Set the frame title
        super("Checkbox Demo");

        // Create checkboxes
        checkbox1 = new Checkbox("C++");
        checkbox2 = new Checkbox("Java");

        // Add item listeners to checkboxes
        checkbox1.addItemListener(this);
        checkbox2.addItemListener(this);

        // Create a label to display selected options
        label = new Label("Selected options: ");
        label.setPreferredSize(new Dimension(300, 20)); // Set preferred size

        // Add components to the frame
        add(label, BorderLayout.NORTH); // Add label to north for visibility
        add(checkbox1, BorderLayout.WEST); // Add checkbox1 to west
        add(checkbox2, BorderLayout.EAST); // Add checkbox2 to east

        // Set frame size
        setSize(400, 200);

        // Make the frame visible
        setVisible(true);
    }

    // Handle item events
    public void itemStateChanged(ItemEvent e) {
        String selectedOptions = "Selected options: ";
        if (checkbox1.getState()) {
            selectedOptions += "C++ ";
        }
        if (checkbox2.getState()) {
            selectedOptions += "Java ";
        }
        label.setText(selectedOptions);
    }

    public static void main(String[] args) {
        new CheckboxDemo();
    }
}