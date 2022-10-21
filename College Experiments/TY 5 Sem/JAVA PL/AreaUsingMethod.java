class AreaUsingMethod {

	public static void main(String args[]) {

		Area(15);
		Area(158, 20);
		Area(15.5);
		Area(15.6, 19.3);
	}

	static void Area(int a) {
		System.out.println("Area of Square is : " + (a * a));
	}

	static void Area(int a, int b) {
		System.out.println("Area of Triangle is : " + (a * b));
	}

	static void Area(double a, double b) {
		System.out.println("Area of Rectangle is : " + (a * b));
	}

	static void Area(double r) {
		System.out.println("Area of Circle is : " + (3.14 * r * r));
	}
}