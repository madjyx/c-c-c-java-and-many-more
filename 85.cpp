package gi.util;


import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import static gi.util.SwingConsole.*;

public class SimpleMenusss extends JFrame {

	
		 private JMenu[] menus = {
			        new JMenu("PRVI"),
			        new JMenu("DRUGI"),
			        new JMenu("TRECI") };
			    
			    public SimpleMenusss()
			    {
			       
			      
			      JMenuBar mb = new JMenuBar();
			        
			      for (int i = 0; i < menus.length; i++)
			      
			      mb.add(menus[i]);
			      setJMenuBar(mb);  
			    }

			    public static void main(String[] args)
			    {
			        run(new SimpleMenusss(), 600,600);
			    }
			}






	