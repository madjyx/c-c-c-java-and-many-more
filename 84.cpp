package gi.util;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

import static gi.util.SwingConsole.run;


class Ibutton extends JFrame {
	
	private JButton b = new JButton("KLIK");
	
	private JTextField tekst  = new JTextField(10);
	
	class ButtonListener implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			String ime = ((JButton)e.getSource()).getText();
			tekst.setText(ime);
		}
	}
	
	private final ButtonListener blist = new ButtonListener();
	

	public Ibutton()
	 {
		b.addActionListener(blist);
		setLayout(new FlowLayout());
		add(b);
		add(tekst);
	 }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		run(new Ibutton(),300,400);
	}
	}


