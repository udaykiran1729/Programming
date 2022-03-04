import java.awt.*;
import java.applet.*;

public class aplet extends Applet{
    public void mine(Graphics g){
        g.setColor(Color.red);
        g.drawString("hello uday", 100, 100);
    }
}

/*
<applet code="aplet.class" height=1000 width=1000>
</applet>
*/