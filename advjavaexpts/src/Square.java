import javax.swing.*;
import java.awt.event.*;
import java.awt.event.ActionEvent;
import java.awt.*;
 public class Square extends JFrame implements ActionListener{
    JLabel l1 = new JLabel("Enter the number:");
    JLabel l2 = new JLabel("Result:");
    JButton jb = new JButton("Square");
    JTextField jt=new JTextField();
    JTextField jt1=new JTextField();

    Square(){
        setLayout(new BorderLayout());
        JPanel inputPanel = new JPanel(new GridLayout(2,2));
        inputPanel.add(l1);
        inputPanel.add(l2);
        inputPanel.add(jt);
        inputPanel.add(jt1);
        inputPanel.add(jb);
       add(inputPanel, BorderLayout.CENTER);
       add(jb,BorderLayout.SOUTH);
       setSize(400,400);
       jb.addActionListener(this);
       setVisible(true);}
     public void actionPerformed(ActionEvent e){
        int n1=Integer.parseInt(jt1.getText());
        int n2= n1*n1;
        jt.setText(String.valueOf(n2));
     }
     public static void main(String [] args  ){
        new Square();
     }


 }