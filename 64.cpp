/*Napisi Java klasu Osoba sa 3 polja i 1 konstruktorom*/

package neska;

public class Osoba {
	
	private String ime;
    private String prezime;
    private int godiste;
    
    public Osoba(String i, String p, int g)
    {
    	ime = i;
    	prezime = p;
    	godiste = g;
    }
    
	public static void main(String[] args) {
		

		Osoba x;
	   x = new Osoba("Neska","Spahic",1997);
		
		System.out.println("IME: " + x.ime);
		System.out.println("PREZIME: " + x.prezime);
		System.out.println("GODISTE: " + x.godiste);


		
		
	}

}
