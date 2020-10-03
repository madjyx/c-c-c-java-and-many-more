/*Napisi Java program koji ucitava tekst sa tastature u String objekat, a zatim ispisuje taj objekat n ekran*/

package neska;

import java.util.Scanner;

public class Printt {

	public static void main(String[] args) {

		Scanner unos = new Scanner(System.in);
		String text = unos.nextLine();
		
		System.out.println(text +" ");
				
	}

}
