package a;

class genericko {
	
	public static <T> void f(T x)
	{
		System.out.println(x.getClass().getName());
	}
	
	public static <T> void ispis(T x)
	{
		System.out.println("Objekat: " +x);
	}

	public static void main(String[] args) {

		f("");
		f(1);
		f(1.0);
		f(' ');
		
              String a = new String(" neskic ");
	      ispis(a);
	}

}
