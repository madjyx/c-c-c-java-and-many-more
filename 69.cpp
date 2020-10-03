/*Ako apstraktna Java klasa Instrument koja ima metod sviraj(Nota n), napisi Java klasu Flauta koja
implementira dati metod ispisom od kojeg materijala je napravljena Klasa Flauta ima tekstualno polje materijal*/


package neska;

public abstract  class Instrument {
	
	abstract void sviraj(Nota n);
	

}



II KLASA


package neska;

	
		 public  class Flautaaa implements Instrument {

				private String materijal = "Zeljezo;

				 
				    void sviraj()
				    {
				    	
				    System.out.println("Materijal: " +materijal);
						
				    }
				  
				    
				    
				
				public static void main(String[] args) 
				
				 {
					
					Flautaaa obj = new Flautaaa();
					obj.sviraj();
					
					
				 }}