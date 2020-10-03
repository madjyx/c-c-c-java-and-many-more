/*Napisi proizvoljan Java interface sa 2 metoda*/
/*KAD HTJEDNEŠ KOMPAJLIRAT TREBALA BI OVA KLASA INTERFACE BIT U ZASEBNOM, JA SAM TAKO RADILA*/

package neska;


public interface informationn {
	
	public String getMessage();
	public String getSender();

}


public class StringInformationn implements informationn {

	@Override
	public String getMessage()
	{
		System.out.println("Zdravo, Neska ");
		return null;
	}
	
	@Override
	public String getSender()
	{
		System.out.println("By: Emina");
		return null;
	}

	public static void main(String[] args) {
		
		StringInformationn obj = new StringInformationn();
		obj.getMessage();
		obj.getSender();
		
		
		
		

	}

}
