// importing Java AWT class  
/*import java.awt.*;    
  
public class aplet extends Frame {    
 
   aplet() {  
  
      // creating a button   
      Button b = new Button("Click Me!!");  
  
      // setting button position on screen  
      b.setBounds(30,100,80,30);  
  
      // adding button into frame    
      add(b);  
  
      // frame size 300 width and 300 height    
      setSize(1000,1000);  
  
      // setting the title of Frame  
      setTitle("welco");   
          
      // no layout manager   
      setLayout(null);   
  
      // now frame will be visible, by default it is not visible    
      setVisible(true);  
}    

public static void main(String args[]) {   
     
aplet f = new aplet();    
  
}  
  
}  */

/*import java.util.*;

import java.awt.*;

class aplet extends Frame{
    aplet(){

        Button b=new Button("Register");
        b.setBounds(30,100,80,30);
        add(b);
        setTitle("uday's applet");
        setSize(1000,1000);
        
        setVisible(true);
    }
    public static void main(String args[]){
        aplet f=new aplet();
    }
}*/

/*
import java.awt.*;    
  
// class AWTExample2 directly creates instance of Frame class  
class aplet {    
  
   // initializing using constructor  
   aplet() {  
  
      // creating a Frame  
      Frame f = new Frame();  
  
      // creating a Label  
      Label l = new Label("Employee id:");   
  
      // creating a Button  
      Button b = new Button("Submit");  
  
      // creating a TextField  
      TextField t = new TextField();  
  
      // setting position of above components in the frame  
      l.setBounds(20, 80, 80, 30);  
      t.setBounds(20, 100, 80, 30);  
      b.setBounds(100, 100, 80, 30);  
  
      // adding components into frame    
      f.add(b);  
      f.add(l);  
      f.add(t);  
  
      // frame size 300 width and 300 height    
      f.setSize(400,300);  
  
      // setting the title of frame  
      f.setTitle("Employee info");   
          
      // no layout  
      f.setLayout(null);   
  
      // setting visibility of frame  
      f.setVisible(true);  
}    
  
// main method  
public static void main(String args[]) {   
  
// creating instance of Frame class   
aplet awt_obj = new aplet();    
  
}  
  
}    */


import java.awt.*;

//import javax.swing.plaf.metal.MetalBorders.TextFieldBorder;

class aplet extends Frame{
    aplet(){
        Font f = new Font("Aerial Black",Font.BOLD,40);
        Button b=new Button("Register");
        //b.setColor("orange");
        TextField t=new TextField("enter the name");
        t.setBounds(30,100,80,20);
        add(t);
        
        b.setBounds(500,500,80,30);
        add(b);
        setTitle("uday's applet");
        setLayout(null);
        setVisible(true);
    }
    public static void main(String args[]){
        aplet a=new aplet();
    }
}