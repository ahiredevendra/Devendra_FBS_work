package p1;

class Shape
{
	double area;

	void calculateArea(Triangle t)
	{
		area=0.5*t.base*t.height;
		System.out.println("Area of Triangle: "+area);
	}
	void calculateArea(Rectangle r)
	{
		area=r.length*r.breadth;
		System.out.println("Area of Rectangle: "+area);
	}
	void calculateArea(Circle c)
	{
		area=3.14*c.radius*c.radius;
		System.out.println("Area of Circle: "+area);
	}
}
class Triangle
{
	double base;
	double height;
	
	Triangle(double base, double height)
	{
		this.base = base;
		this.height = height;
	}
}
class Rectangle
{
	double length;
	double breadth;
	
	Rectangle(double length, double breadth)
	{
		this.length = length;
		this.breadth = breadth;
	}
}
class Circle
{
	double radius;
	
	Circle(double radius)
	{
		this.radius = radius;
	}
}

class TestShape
{
	public static void main(String[] args)
	{
		Shape s;    //reference
		s = new Shape();
		
		Triangle t=new Triangle(10,5);
		Rectangle r=new Rectangle(10,4);
		Circle c=new Circle(5);
		
		s.calculateArea(t);
		s.calculateArea(r);
		s.calculateArea(c);

	}
}