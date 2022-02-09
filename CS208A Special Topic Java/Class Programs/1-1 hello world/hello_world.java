// Single line comment

/* Multiple line comment */

/* 
Core Java - Textbook

Everything is a class in Java

Access specifiers:
1. public: 
    - default for classes
    - JVM needs access to this path and start execution to main
    - any class by default gets public
    - only classes with the same name as the file will be allowed to be public
    - in this case, Test cannot be public as file name is hello_world
    - if class name was hello_world, public could be specified

2. private
    - private int a; -> only class members can access

3. protected
    - can be access by sub-class/non sub-class from same package
    - and same class
    - and sub-classes outside

*/

/* Student is the class specifier */
class Test {
    /* Each class needs main as an entrypoint */
    public static void main(final String args[]) {
        /* 
        Should be public -> JVM
        Should be static -> not associated with an instance 
        void -> no return value
        args[] -> command line arguments
        */

        System.out.println("Hello world");
        /* 
        print() -> does not move to new line
        println() -> moves to a new line 
        */
    }
}

/* 
How to execute a .java program

1. Compile:
    - javac 01_hello_world.java 
    - Creates a .class file
    - Test.class file generated for class Test
    - One class -> one .class file

2. Execute:
    - java Test
*/