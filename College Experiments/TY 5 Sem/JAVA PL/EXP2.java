class Area {
	String shape;
	double area;

	public void display() {
		System.out.println("Area of " + shape + " is : " + area);
	}

	Area(double l, double b) {
		area = l * b;
		shape = "Rectangle";
	}

	Area(int b, int h) {
		area = (h * b) / 2;
		shape = "Triangle";
	}

	Area(int side) {
		area = side * side;
		shape = "Square";
	}

	Area(double r) {
		area = 3.14 * (r * r);
		shape = "Cirle";
	}
}

class EXP2 {

	public static void main(String Args[]) {

		Area s = new Area(15);
		Area r = new Area(15.5, 20.2);
		Area c = new Area(12.5);
		Area t = new Area(5, 9);

		s.display();
		r.display();
		c.display();
		t.display();

	}
}
