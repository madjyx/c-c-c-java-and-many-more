/*Napisi Java klasu artikal bez metoda koja ima informacije o cijeni, proizvodacu i nazivu artikla*/
package neska;

public class Artikal {
	
	    private double cijena;
	    private String naziv;
	    private String proizvodjac;

	public static void main(String[] args) {
		
		Artikal mlijeko = new Artikal();

		mlijeko.cijena = 3;
		mlijeko.naziv = "Meggle";
		mlijeko.proizvodjac = "Meggle 2.8%";
		System.out.println("Cijena mlijeka: " + mlijeko.cijena);
		System.out.println("Naziv mlijeka: " + mlijeko.naziv);
		System.out.println("Proizvodjac mlijeka: " + mlijeko.proizvodjac);
	
	}

}
