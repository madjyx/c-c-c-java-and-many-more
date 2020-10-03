/*Napisi main funkciju koja pravi 2 stringa, poredi ih po vrijednosti i ispisuje ih na ekran*/
package mm;

import java.util.Scanner;

public class poredenje {

	public static void main(String[] args) {
		
		Scanner unos = new Scanner(System.in);
		
		System.out.println("Unesi dva stringa");
		
		String rijec1 = unos.next();
		String rijec2 = unos.next();
		
		if(rijec1.equals(rijec2))
			System.out.println("Rijec: " +rijec1+ " " +"i rijec " +rijec2+ " jednake su");

		else
			
		
			System.out.println("Rijec: " +rijec1+ " " +"i rijec " +rijec2+ " nisu jednake ");
			
			
		if(rijec1.length()>rijec2.length())
			System.out.println("Rijec " +rijec1+ " veca je od rijeci " +rijec2);
		
		else if(rijec1.length()<rijec2.length())
			System.out.println("Rijec " +rijec2+ " veca je od rijeci " +rijec1);
		
		else
			System.out.println("Rijeci " +rijec1+ " i " +rijec2+ " su iste ");
			
			
			
			
			
		

	}

}
