import java.lang.*;
import java.util.*;

public class prac1 {

    public static void main(String[] args) {

        Timer t = new Timer();

        t.scheduleAtFixedRate(
                new TimerTask() {
                    public void run() {
                        System.out.println((int) (Math.random() * (9999 - 1000 + 1) + 1000));
                    }
                }, 0, 1000);

        System.out.println("out of the delusion");

    }

}
