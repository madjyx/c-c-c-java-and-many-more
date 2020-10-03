/*Ako java klasa Artikal ima polja naziv, cijena i proizvodac, definiraj konstruktor klase*/
package jj;

package mmm;

import java.util.Scanner;

public class Artikal {

	
    private double cijena;
    private String naziv;
    private String proizvodjac;
	
	public  Artikal(double c, String n, String p)
	 {
		this.cijena = c;
		this.naziv = n;
		this.proizvodjac = p;
	 }
	 

	public static void main(String[] args) {
		
		 Artikal mlijeko = new  Artikal(15.2,"Lindo","Austrija");
		
		System.out.println("Cijena mlijeka: " + mlijeko.cijena);
		System.out.println("Naziv mlijeka: " + mlijeko.naziv);
		System.out.println("Proizvodjac mlijeka: " + mlijeko.proizvodjac);
	}

}


	
			
	     

	
	


        
       
		

