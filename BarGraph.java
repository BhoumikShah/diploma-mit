import javax.swing.*;
import java.awt.*;

public class BarGraph extends JFrame {

    private int[] values;

    public BarGraph(int[] values) {
        this.values = values;
        setTitle("Bar Graph");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // Center the frame
        setResizable(false);

        BarGraphPanel panel = new BarGraphPanel();
        add(panel);

        setVisible(true);
    }

    public static void main(String[] args) {
        int[] data = {10, 20, 30, 40, 50}; // Sample data
        new BarGraph(data);
    }

    class BarGraphPanel extends JPanel {

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

            int barWidth = (getWidth() - (values.length + 1) * 10) / values.length; // Adjusted for spacing
            int maxValue = getMaxValue(values);

            // Draw bars
            for (int i = 0; i < values.length; i++) {
                int barHeight = (int) ((double) values[i] / maxValue * getHeight() * 0.8);
                int x = i * (barWidth + 10) + 10; // Adjusted for spacing
                int y = getHeight() - barHeight;
                g.setColor(Color.BLUE);
                g.fillRect(x, y, barWidth, barHeight);

                // Draw value labels
                g.setColor(Color.BLACK);
                g.drawString(String.valueOf(values[i]), x + 5, y - 5);

                // Draw category labels
                g.drawString("Category " + (i + 1), x, getHeight() - 5);
            }
        }

        private int getMaxValue(int[] array) {
            int max = Integer.MIN_VALUE;
            for (int value : array) {
                if (value > max) {
                    max = value;
                }
            }
            return max;
        }
    }
}
