package mmm;

public class Osoba {

	
	   private String ime;
	   private String prezime;
	   private int godiste;
	        
	    public Osoba() {}
	    
	    public Osoba(String i, String p, int g)
	    {
	        ime = i;
	        prezime = p;
	        godiste = g;
	    }
}

----------------------------------------------------------------------------------------------------

public class Ucenik extends Osoba{

	    private String skola;
	    private int razred;
	    
	    public Ucenik()
	    {
	        super();
	    }

	    public Ucenik(String i, String p, int g)
	    {
	        super(i,p,g);
	    }
	    
	    
	    public Ucenik(String i, String p, int g, String s, int r)
	    {
	        super(i,p,g);
	        skola = s;
	        razred = r;
	    }
}
