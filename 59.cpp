/*Napisi main funkciju koja pravi objekat klase Artikal koja ima cijenu, naziv i proizvodac*/

package mm;

import java.util.Scanner;

public class Artikall {
	
	private String naziv;
	private double cijena;
	private String proizvodac;
	

	public static void main(String[] args) {
	
		Artikall keks = new Artikall();
		keks.naziv = "Lindo";
		keks.cijena = 4.40;
		keks.proizvodac = "Australija";
		
		
		
	}

}
