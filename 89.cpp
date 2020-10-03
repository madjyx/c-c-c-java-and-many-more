public class SimpleMenus extends JFrame
{
   
   
    private JCheckBox jcb = new JCheckBox("JCheckBox");  
    private JPanel jp = new JPanel();

    public SimpleMenus()
    {
        jp.add(jcb);
        
        add(jp);
    }
    
    public static void main(String[] args)
    {
        run(new SimpleMenus(), 200, 150);
    }

}