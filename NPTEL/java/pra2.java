import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;
import javax.swing.tree.DefaultMutableTreeNode.*;
class pra2 extends JFrame{
    public void paint(){
        JFrame f=new JFrame("uday");
        
        /*
        DefaultMutableTreeNode m=new DefaultMutableTreeNode("m-1");
        DefaultMutableTreeNode m1=new DefaultMutableTreeNode("m-2");
        DefaultMutableTreeNode m2=new DefaultMutableTreeNode("m-3");
        m.add(m1);
        m1.add(m2);
        JTree p=new JTree();
        p.add(m);*/

        /*
        JScrollBar p=new JScrollBar();
        */
        
        /*combo box
        String s[]={"me","mine"};
        JComboBox p=new JComboBox(s);
        */

        /*radio
        JRadioButton p=new JRadioButton("option-1");
        JRadioButton p1=new JRadioButton("option-2");
        p1.setBounds(150,100,100,40);
        f.add(p1);
        */

        /*check box
        JCheckBox p=new JCheckBox("me myself",true);
        JCheckBox p1=new JCheckBox("me1");
        p1.setBounds(150,100,100,40);
        f.add(p1);
        */
        
        /*text field
        JTextField p=new JTextField("type here");
        */
        
        /*tabbed pane
        JPanel p1=new JPanel();
        JPanel p2=new JPanel();
        JTabbedPane p=new JTabbedPane();
        p.add("mine1",p1);
        p.add("mine2",p2);
        p.setBounds(50,50,200,200);
        */
        
        //m.setBounds(150,50,40,200);
        f.setSize(400,500);
        f.add(p);
        
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[]){
        pra2 p=new pra2();
        p.paint();
    }
}