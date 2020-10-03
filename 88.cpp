package pkg13.pkg2;
import javax.swing.*;
import static pjip.util.SwingConsole.run;

public class Polje extends JFrame
{
    private JTextField jtf = new JTextField(15);
    private JPanel jp = new JPanel();

    public Polje()
    {
        
        jtf.setText(jtf.getText());
        jtf.setEditable(true);
        
        jp.add(jtf);
        add(jp);
    }


  public static void main(String[] args)
    {
        run(new SimpleMenus(), 200, 150);
    }

}

