import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionEvent;
public class calc extends JFrame implements ActionListener{
    JTextField jt=new JTextField();
    JTextField jt1=new JTextField();
    JTextField jt2=new JTextField();
    JButton jb=new JButton("=");
    JButton ja=new JButton("+");
    JButton js=new JButton("-");
    JButton jm=new JButton("*");
    JButton jd=new JButton("/");
    calc(){
      setLayout(new GridLayout(3,3));
      add(jt);
      add(jt1);
      add(jt2);
      add(jb);
      add(js);
      add(jm);
      add(jd);
      add(ja);
      setBounds(9,9,9,9);
      js.addActionListener(this);
      ja.addActionListener(this);
      jm.addActionListener(this);
      jd.addActionListener(this);
      setSize(200,200);
      setVisible(true);
    }


    @Override
    public void actionPerformed(ActionEvent e) {
        int n1=Integer.parseInt(jt.getText());
        int n2=Integer.parseInt(jt1.getText());
        int result = 0;

        if (e.getSource() == ja) {
            result = n1 + n2;
        } else if (e.getSource() == js) {
            result = n1 - n2;
        } else if (e.getSource() == jm) {
            result = n1 * n2;
        } else if (e.getSource() == jd) {
            result=n1/n2;
        }jt2.setText(String.valueOf(result));
    }
    public static void main(String [] args){
        new calc();
    }
}
