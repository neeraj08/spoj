import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
class Crazysk
{
public static int main(String args[])
{
//	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	Scanner sc =new Scanner(System.in);
	BigInteger one=new BigInteger("1");
	int t;
	BigInteger res,n,cards;
	t=Integer.parseInt(sc.next());
	while(t-- >0)
	{
		cards=sc.nextBigInteger();
		n=sc.nextBigInteger();
		
		res=cards;
		while((cards.add(one)).compareTo(n)==1)
		{
			res=res.add(cards.divide(n));
			cards=(cards.divide(n)).add(cards.mod(n));
			
		}
		System.out.println(res);
	}
return 0;
}
}
