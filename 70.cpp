public class Nota
{
    private String nota;
    
    public Nota() {}
    
    public Nota(String n)
    {
        if(n.equals("C") || n.equals("D") || n.equals("E") || n.equals("F") || n.equals("G") || n.equals("A") || n.equals("H") || n.equals("C#"))
            nota = n;
        else
            nota = "C";
    }
    }