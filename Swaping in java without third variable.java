public class Main
{
	public static void main(String[] args) {
	String a="hello";
	String b="bye"; 
	 a=a.concat(b);
	 b=a.substring(0,a.length()-b.length());
	a=a.substring(b.length());
	System.out.println(b);
	System.out.print(b);

	}
} 


