// polymorphism
//	concept of virtual fn
// we shall make a case for inheritance
// We will have a class called Tester which supports a method called test
// which takes a reference to an object of class A and so of any class which extends
// A.
// foo is an interface of class A
public class Example3
{
	public static void main(String[] args)
	{
// experiment 1
//	we create object of A and B; call test of Tester
//	which in turn calls foo polymorphically
		A x = new A();
		Tester.test(x);
		B y = new B();
		Tester.test(y);
	
// experiment 2:
//	we will add another class C which extends A.
		C z = new C();
		Tester.test(z);
//	should we recompile Tester as it did not know about C earlier?
//	would this give a compile time error? runtime error?
//  would test of Tester call foo of A? Or foo of C?
//	do we require an if statement to check the object type in test of Tester?


//	This is the beauty of inheritance. Adding a new type or class does not
//	require that we modify the existing code. No if statements required!
	}

}
