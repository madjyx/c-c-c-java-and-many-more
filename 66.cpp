/*Ako Java interface Stampac ima metod ispis(), napisi klasu koja implementira taj interface proizvoljnim ispisom na ekran*/   

package neska;

public interface Stampac {
	
	public void ispis();

}


public class Print implements Stampac {

        @Override
	public void ispis() 
	{
		System.out.println("Esselamu alejkum. Ja sam Neska Spahic. Haj cao!");

	}

	public static void main(String[] args) {
		
		Print obj = new Print();
	
		obj.ispis();
		

	}

}
