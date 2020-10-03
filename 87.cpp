package pkg13.pkg4;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import static pjip.util.SwingConsole.*;

public class SimpleMenus extends JFrame
{
   
    private JTextField jtf = new JTextField(15);
    private JPanel jp = new JPanel();

    public SimpleMenus()
    {
        jtf.setText("Nesiba Spahic");
        jtf.setEditable(false);
        
        jp.add(jtf);
        add(jp);

    }
    

    public static void main(String[] args)
    {
        run(new SimpleMenus(), 200, 150);
    }

}