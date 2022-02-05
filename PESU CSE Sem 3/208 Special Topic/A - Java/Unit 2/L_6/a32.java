import java.util.Scanner;
class a32
{
	static stack top=null;
	public static void main(String args[])
	{
		
		push(10);
		push(20);
		push(30);
		disp();
		pop();
		pop();
		pop();
		pop();
		disp();
	}
	static void push(int data)
	{
		stack s1=new stack();
		s1.info=data;
		if(top==null)
			top=s1;
		else
			s1.ref=top;
			top=s1;
	}
	static void pop()
	{
		if(top==null)
			System.out.println("empty");
		else
		{
			int tmp=top.info;
			top=top.ref;
			System.out.println("node with data "+tmp+"deleted");
		}	
	}
	static void disp()
	{
		if(top==null)
			System.out.println("empty");
		else
		{
			stack s=top;
			while(s!=null)
			{
				System.out.println(" "+s.info);
				s=s.ref;
			}
		}
	}
}

class stack
{
	int info;
	stack ref=null;
}
