package gi.util;
import java.awt.FlowLayout;
import javax.swing.*;
import static  gi.util.SwingConsole.run;

public class Tipka extends JFrame {

	
    private JButton b = new JButton("Tipka 1");
    private JPanel jp = new JPanel();	
	
	
	public Tipka()
	{

		jp.add(b);
		add(jp);
		setLayout(new FlowLayout());

		
		
	}
	

	public static void main(String[] args)
	{
       run(new Tipka(),600,400);

	}
	
	

}


-------------------------------------------------------------------------------



package gi.util;

import javax.swing.*;
import javax.swing.JFrame;
import javax.swing.SwingUtilities;

public class SwingConsole  {

	 public static void run(final JFrame f,  int sirina, int  visina)
		{
	        SwingUtilities.invokeLater(new Runnable()
			{
				
				public void run()
				{
					f.setTitle(f.getClass().getSimpleName());
	                f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	                f.setSize(sirina,visina);
	                f.setVisible(true);
		      	}
				});
		

	            }
}
