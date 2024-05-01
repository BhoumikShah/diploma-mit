import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class JTableExample extends JFrame {

    public JTableExample() {
        setTitle("JTable Example");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 300);

        // Data for the table
        Object[][] data = {
            {"John", 25, "Male"},
            {"Alice", 30, "Female"},
            {"Bob", 20, "Male"},
            {"Eve", 35, "Female"}
        };

        // Column names
        String[] columns = {"Name", "Age", "Gender"};

        // Create the table model
        DefaultTableModel model = new DefaultTableModel(data, columns);

        // Create the JTable with the model
        JTable table = new JTable(model);

        // Add the JTable to the JFrame's content pane
        JScrollPane scrollPane = new JScrollPane(table);
        getContentPane().add(scrollPane);

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(JTableExample::new);
    }
}
