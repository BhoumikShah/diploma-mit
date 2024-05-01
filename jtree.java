import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;

public class jtree extends JFrame {

    public jtree() {
        setTitle("JTree Example");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 300);

        // Create the root node and its children
        DefaultMutableTreeNode rootNode = new DefaultMutableTreeNode("Root");
        DefaultMutableTreeNode child1 = new DefaultMutableTreeNode("Child 1");
        DefaultMutableTreeNode child2 = new DefaultMutableTreeNode("Child 2");
        rootNode.add(child1);
        rootNode.add(child2);

        // Create grandchildren for child 1
        DefaultMutableTreeNode grandchild1 = new DefaultMutableTreeNode("Grandchild 1");
        DefaultMutableTreeNode grandchild2 = new DefaultMutableTreeNode("Grandchild 2");
        child1.add(grandchild1);
        child1.add(grandchild2);

        // Create the JTree with the root node
        JTree tree = new JTree(rootNode);

        // Add the JTree to the JFrame's content pane
        JScrollPane scrollPane = new JScrollPane(tree);
        getContentPane().add(scrollPane);

        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new jtree());
    }
}
