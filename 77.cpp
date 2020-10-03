package a;

import java.util.ArrayList;

public class Osoba {


    private String ime;
    
	public Osoba()
	{
		ime = "Neska";
		System.out.println("Ime: " +ime);
	}
	
}

class Ucenik
{
     private Integer godine;
      
	public Ucenik()
	{
		godine = 20;
		System.out.println("Godine: " +godine);
	}
}



class Nasljedivanje {

	public static void main(String[] args) {
		
		ArrayList student = new ArrayList();
                student.add(new Osoba());                  
		student.add(new Ucenik());
		

	}

}
