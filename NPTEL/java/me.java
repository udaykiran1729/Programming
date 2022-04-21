import javax.swing.*;


public class me extends JFrame{
    public me(){
        JFrame f=new JFrame("uday");
        // int s[][]={{1,2,3},{4,5,6},{7,8,9}};
        // int m1[]={1,2,3};
        // JTable m=new JTable(s,m1);
        JMenu m1=new JMenu("menu");
        JMenu m11=new JMenu("m1");
        JMenuItem m123=new JMenuItem("m123");
        m11.add(m123);
        JMenuItem m12=new JMenuItem("m2");
        m1.add(m11);
        m1.add(m12);
        m.add(m1);
        m.setBounds(1,100,80,80);
        f.setSize(400,400);
        //f.add(l);
        f.add(m1);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[]){
        new me();
    }
}
