/*Ako Java klasa Artikal ima polja naziv,cijena i proizvodac,definiraj konsturktor klase*/
public class Artikal {

	
	private String naziv;
	private double cijena;
	private String proizvodac;
	
	public String getNaziv() 
	{
		return naziv;
	}
	
	public double getCijena()
	{
		return cijena;
	}
	
	public String getProizvodac()
	{
		return proizvodac;
	}
	
	public void setNaziv(String novo)
	{
		naziv = novo;
	}
	
	public void setCijena(double iznos)
	{
		cijena = iznos;
	}
	
	public void setProizvodac(String novi)
	{
		proizvodac = novi;
		
	}

	   public static void main(String[] args) {
		
		Artikal mlijeko = new Artikal();
		mlijeko.setNaziv("Mlijeko");
		mlijeko.setCijena(2.50);
		mlijeko.setProizvodac("Meggle");
		
		
		System.out.println("Naziv\tCijena\tProizvodjac\t");
		System.out.println(mlijeko.getNaziv()+"\t"+mlijeko.getCijena()+"\t"+mlijeko.getProizvodac());
		

}
}


