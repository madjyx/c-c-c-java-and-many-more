/*Napisi Java klasu sa primjerom preopterecenog metoda*/
package neska;

public class preopterecenje {
	
	void suma(int a, int b) { System.out.println(a+b);}
	void suma(int a, int b, int c) {System.out.println(a+b+c);}
	

	public static void main(String[] args) {
		
	    preopterecenje rez = new preopterecenje();
		rez.suma(10,20);
		rez.suma(2,4,6);
		

	}

}

ILIIII NA OSNOVU PROMJENE TIPA, SVEJEDNO :)

/*Napisi Java klasu sa primjerom preopterecenog metoda*/
package neska;

public class preopterecenje {
	
	void suma(int a, int b) {System.out.println(a+b);}
	void suma(double a,double b){System.out.println(a+b);}
	
	

	public static void main(String[] args) {
		
	   preopterecenje obj = new preopterecenje();
	   obj.suma(30,10);
	   obj.suma(10.3,10.4);

	}

}





