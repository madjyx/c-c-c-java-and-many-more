/*Napisi java program koji ucitava matricu brojeva dimenzija 3x3*/


package mmm;

import java.util.Scanner;

public class Main {

  

		public static void main(String[] args) {
			
	      Scanner unos = new Scanner(System.in);
	      System.out.println("Unesite broj redova i kolona");
	      int red = unos.nextInt();
	      int kolona = unos.nextInt();
	      int[][] matrica = new int[red][kolona];
	      System.out.println("Unesite clanove matrice ");
	      
	      for(int i = 0; i < red; i++)
	      {
	    	  for(int j = 0; j < kolona; j++)
	    	  {
	    		  System.out.println("X[" +i+ "," +j + "]" + "--->");
	    		  matrica[i][j] = unos.nextInt();
	    	  }
	      }
	      
	      for (int i = 0; i < red; i++) {
	    	    for (int j = 0; j < kolona; j++) {
	    	        System.out.print(matrica[i][j] + " ");
	    	    }
	    	    System.out.println();}
		}
}
	
	


        
       
		

