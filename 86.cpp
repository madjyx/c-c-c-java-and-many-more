public class SimpleMenus extends JFrame
{
    private JMenu[] menus =
    {
        new JMenu("POLJE1"),
        new JMenu("POLJE2"),
        new JMenu("POLJE3") 
    };
    
    private JMenuItem[] items = 
    {
        new JMenuItem("Neska"),
        new JMenuItem("Emina"),
        new JMenuItem("Amina")
          
    };
            
    public SimpleMenus() {
            
      for(int i = 0; i < items.length; i++) 
      { 
      menus[i].add(items[i]);
      }
      
      JMenuBar mb = new JMenuBar();
      for(JMenu jm : menus)
          mb.add(jm); 
      setJMenuBar(mb);
      Container cp = getContentPane();
      cp.setLayout(new FlowLayout());

      
    }}
