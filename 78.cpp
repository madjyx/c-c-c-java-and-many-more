import java.util.Scanner;

public class Main {

	
	public static int unesi(Scanner ulaz) throws Exception
	 {
		
		int broj;
		if(ulaz.hasNextInt())
		 {
			broj = ulaz.nextInt();
			System.out.println("Uspjesno ste unijeli cijeli broj");
		 }
		
		else
			
		throw new Exception("Unijeli ste pogresnu vrijednost");
		
		return broj;
	 }
	
	
	public static void main(String[] args) {
		
		Scanner citac = new Scanner(System.in);
		int br = -1;
		
		try
		 {
			System.out.println("Unesite cijeli broj");
		    br = unesi(citac);
		 }
		
		catch(Exception e)
		 {
			System.out.println(e.toString());
			citac.reset();
			
			if(citac.hasNextInt())
			br = citac.nextInt();
			
			else
				
				br = 0;
		 }
		
		finally
		 {
		System.out.println("Unijeli ste vrijednost " +br);
		 }
	}

}
