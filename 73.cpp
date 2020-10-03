package mmm;

public class Proizvod {
	
	
	private static long brojac;
	private final long id;
	

	
	public Proizvod()
	{
		id = brojac++;
	}
	
	public long id()
	{
		return id;
	}
	
	@Override
	public String toString()
	{
		return "Proizvod ID-a: " + id + " ";
	}
}


JASKO JE HAMAN SAMO TRAZIO OVU GORU KLASU DA NAPRAVIMO HAHA  ^^

--------------------------------------------------------------------------------------------------

package mmm;

import java.util.ArrayList;

class Keks extends Proizvod {}
class Sok extends Proizvod {}


public class Main {

	public static void main(String[] args) {

		ArrayList<Proizvod> proizvodi = new ArrayList<Proizvod>();
		proizvodi.add(new Keks());
		proizvodi.add(new Sok());
	
		
		for(Proizvod p : proizvodi)
			System.out.println(p);
		
	}

}



