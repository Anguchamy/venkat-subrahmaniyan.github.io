import java.util.*;
public class digichar {
	public static void main(String[] args)
	{
		String sentence;
		Scanner s=new Scanner(System.in);
		System.out.println("enter something");
		sentence=s.nextLine();
		char[] a=sentence.toCharArray();
		boolean num=Character.isDigit(a[0]);
		
			if(num)
			{
				System .out.println(num);
			}
			else
			{
			   System.out.println(num);
			}
		
	s.close();}

}
