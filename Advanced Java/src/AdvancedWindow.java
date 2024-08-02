import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class AdvancedWindow extends JFrame {
    public AdvancedWindow() {
        setTitle("Advanced Window");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create components and layout
        JPanel contentPane = new JPanel(new BorderLayout());


        // Add event listeners
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                int confirm = JOptionPane.showConfirmDialog(null, "Are you sure you want to exit?");
                if (confirm == JOptionPane.YES_OPTION) {
                    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                }
            }
        });

        setContentPane(contentPane);
        setVisible(true);
    }

    public static void main(String[] args) {
        new AdvancedWindow();
    }
}
