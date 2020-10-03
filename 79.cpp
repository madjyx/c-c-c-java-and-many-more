package bb;

class Memorija {}

public class BlokMemorije<T> {
	
	private  T a;
	
	public BlokMemorije(T a)
	{
		this.a = a;
		
        }
	
	
	
	public T getDohvati()
	{
		return a;
		
        }
	
	public void setPostavi(T a)
	{
		this.a = a;
		
	}

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		BlokMemorije<Memorija> s1 = new BlokMemorije<Memorija>(new Memorija());
		Memorija  a = s1.dohvati();
		
		

		
	
	}

}
