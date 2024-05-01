import javax.swing.*;
import java.awt.*;

public class ExamForm extends JFrame {

    public ExamForm() {
        setTitle("Exam Form");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 300);
        setResizable(false);
        setLocationRelativeTo(null); // Center the frame

        JPanel mainPanel = new JPanel();
        mainPanel.setLayout(new BorderLayout());

        // Panel for form fields
        JPanel formPanel = new JPanel();
        formPanel.setLayout(new GridLayout(6, 2, 10, 10));

        // Labels and text fields
        JLabel nameLabel = new JLabel("Name:");
        JTextField nameField = new JTextField();

        JLabel rollLabel = new JLabel("Roll Number:");
        JTextField rollField = new JTextField();

        JLabel subjectLabel = new JLabel("Subject:");
        JTextField subjectField = new JTextField();

        JLabel dateLabel = new JLabel("Date:");
        JTextField dateField = new JTextField();

        JLabel timeLabel = new JLabel("Time:");
        JTextField timeField = new JTextField();

        JLabel venueLabel = new JLabel("Venue:");
        JTextField venueField = new JTextField();

        // Add labels and text fields to form panel
        formPanel.add(nameLabel);
        formPanel.add(nameField);
        formPanel.add(rollLabel);
        formPanel.add(rollField);
        formPanel.add(subjectLabel);
        formPanel.add(subjectField);
        formPanel.add(dateLabel);
        formPanel.add(dateField);
        formPanel.add(timeLabel);
        formPanel.add(timeField);
        formPanel.add(venueLabel);
        formPanel.add(venueField);

        // Panel for buttons
        JPanel buttonPanel = new JPanel();
        JButton submitButton = new JButton("Submit");
        JButton cancelButton = new JButton("Cancel");
        buttonPanel.add(submitButton);
        buttonPanel.add(cancelButton);

        // Add panels to main panel
        mainPanel.add(formPanel, BorderLayout.CENTER);
        mainPanel.add(buttonPanel, BorderLayout.SOUTH);

        // Add main panel to frame
        add(mainPanel);

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(ExamForm::new);
    }
}
