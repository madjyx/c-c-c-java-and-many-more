package pkg13.pkg4;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import static pjip.util.SwingConsole.*;

public class SimpleMenus extends JFrame
{
   
   
    private JRadioButton  jrb = new JRadioButton("Neska");

    private JPanel jp = new JPanel();

    public SimpleMenus()
    {
        jp.add(jrb);
        add(jp);
    }

    
    public static void main(String[] args)
    {
        run(new SimpleMenus(), 200, 150);
    }

}