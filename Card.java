import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Card {
    public static void main(String[] args) {
        // Create a JFrame
        JFrame frame = new JFrame("CardLayout Example");

        // Create a JPanel with CardLayout
        JPanel panel = new JPanel(new CardLayout());

        // Create buttons to switch cards
        JButton nextButton = new JButton("Next");
        JButton previousButton = new JButton("Previous");

        // Create cards
        JPanel card1 = new JPanel();
        card1.add(new JLabel("Card 1"));
        JPanel card2 = new JPanel();
        card2.add(new JLabel("Card 2"));
        JPanel card3 = new JPanel();
        card3.add(new JLabel("Card 3"));

        // Add cards to the panel
        panel.add(card1, "card1");
        panel.add(card2, "card2");
        panel.add(card3, "card3");

        // Add buttons to switch between cards
        JPanel buttonPanel = new JPanel();
        buttonPanel.add(previousButton);
        buttonPanel.add(nextButton);

        // Add action listeners to buttons
        nextButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                CardLayout layout = (CardLayout) panel.getLayout();
                layout.next(panel);
            }
        });

        previousButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                CardLayout layout = (CardLayout) panel.getLayout();
                layout.previous(panel);
            }
        });

        // Add panel and buttonPanel to the frame
        frame.add(panel, BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        // Set frame properties
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
