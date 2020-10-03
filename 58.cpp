package mmm;

class Artikal {

	
	private String naziv;
	private double cijena;
	private String proizvodac;
	
	public String getNaziv() { return naziv;}
	public double getCijena() { return cijena;}
	public String getProizvodac() { return proizvodac;}
	
	public void setNaziv(String novo) { naziv = novo;}
	public void setCijena(double iznos) { cijena = iznos;}
	public void setProizvodac(String novi) { proizvodac = novi;}
	
	public void setPromijeniNaziv(String novo) { naziv = novo;}
	public void setPromijeniCijena(double iznos) { cijena = iznos;}
	public void setPromijeniProizvodac(String novi) { proizvodac = novi;}
	

	public static void main(String[] args) {
		
		Artikal keks1 = new Artikal();
		
		keks1.setNaziv("Lindo");
		keks1.setCijena(2.00);
		keks1.setProizvodac("Austrija");
	
		System.out.println(keks1.getNaziv() + "\t" +keks1.getCijena()+ "\t" +keks1.getProizvodac());
		
		System.out.println("Nakon izmjene ");
		
		keks1.setPromijeniNaziv("Jadro");
		keks1.setPromijeniCijena(6.00);
		keks1.setPromijeniProizvodac("Belgija");
	
		System.out.println(keks1.getNaziv() + "\t" +keks1.getCijena()+ "\t" +keks1.getProizvodac());


	}

}
