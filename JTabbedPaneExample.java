import javax.swing.*;

public class JTabbedPaneExample extends JFrame {

    public JTabbedPaneExample() {
        setTitle("JTabbedPane Example");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 300);

        // Create a JTabbedPane
        JTabbedPane tabbedPane = new JTabbedPane();

        // Create panels for each tab
        JPanel panel1 = new JPanel();
        JPanel panel2 = new JPanel();
        JPanel panel3 = new JPanel();

        // Add some components to the panels
        panel1.add(new JLabel("This is Panel 1"));
        panel2.add(new JLabel("This is Panel 2"));
        panel3.add(new JLabel("This is Panel 3"));

        // Add tabs to the JTabbedPane
        tabbedPane.addTab("Tab 1", panel1);
        tabbedPane.addTab("Tab 2", panel2);
        tabbedPane.addTab("Tab 3", panel3);

        // Add the JTabbedPane to the JFrame's content pane
        getContentPane().add(tabbedPane);

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(JTabbedPaneExample::new);
    }
}
