
import javax.swing.JFrame;
import javax.swing.JTabbedPane;

class pre extends JFrame{
    pre(){
        try{
        JFrame f=new JFrame();
        JTabbedPane p=new JTabbedPane();
        add(p);
        p.setBounds(100,80,60,30);
        
        setSize(300,300);
        setLayout(null);
        setVisible(true);}
        catch(Exception e){System.out.println(e);}
    }
}

class pra{
    public static void main(String args[]){
        pre pa=new pre();
    }
}