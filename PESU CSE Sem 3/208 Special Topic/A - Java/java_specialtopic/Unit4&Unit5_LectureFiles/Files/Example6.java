//Object Stream:
//Serialization
import java.io.*;
public class Example6
{
	public static void main(String[] args) throws Exception
	{
		Sample s=new Sample();
		s.i=99;
		System.out.println(s.i);
		//Sample s1=new Sample();
		//s1.i;
		//System.out.println(s.i);
		//Sample s2=s;
		File f=new File("input2.txt");
		FileOutputStream fo=new FileOutputStream(f);
		ObjectOutputStream oo=new ObjectOutputStream(fo);
		oo.writeObject(s);//is responsible for writing the state of the object for its particular class
	}
}
class Sample implements Serializable //marker interface 
{
	int i;
}