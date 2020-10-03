/*Napisi main funkciju koja pravi objekat klase Artikal koja ima cijenu, naziv i proizvodaca, a zatim ga isisuje na ekran*/

package mmm;

class Artikal {

	
	private String naziv;
	private double cijena;
	private String proizvodac;
	

	public static void main(String[] args) {
	
		Artikal keks = new Artikal();
		keks.naziv = "Lindo";
		keks.cijena = 4.40;
		keks.proizvodac = "Australija";
		
		System.out.println(keks.naziv+ " " +keks.cijena+ " "+keks.proizvodac);	
	}
		
	}


