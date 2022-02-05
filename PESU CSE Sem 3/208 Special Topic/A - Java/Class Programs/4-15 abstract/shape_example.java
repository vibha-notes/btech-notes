// By default public abstract
interface Shape {
    double area();
}

class Rect implements Shape {
    int l, b;

    Rect(int l, int b) {
        this.l = l;
        this.b = b;
    }

    // Cannnot reduce visibility
    // Must be public
    public double area() {
        return (double)l*b;
    }
}

class Circle implements Shape {
    int r;
    Circle(int r) {
        this.r = r;
    }

    public double area() {
        return (double) 3.14159*r*r;
    }
}

public class shape_example {
    public static void main(String[] args) {
        Shape rect = new Rect(10, 20);
        System.out.println(rect.area());

        Shape circle = new Circle(10);
        System.out.println(circle.area());
    }
}
