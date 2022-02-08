//
//public class Variables {
//
//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//    {
// 
//byte b;
//int i=257;
//double d=323.124;
//System.out.println("Conversion of int to byte");
//b=(byte)i;
//System.out.println("i= "+i+"b= "+b);
//
//System.out.println("Conversion of double to byte");
//b=(byte)d;
//System.out.println("d= "+i+"d= "+b);
//
//   }
//	}
//}

//Akku
//Akku
//30
class Box
{
	double width, height, depth;

	// constructor used when all dimensions
	// specified
	Box(double w, double h, double d)
	{
		width = w;
		height = h;
		depth = d;
	}
	// constructor used when no dimensions
	// specified
	Box()
	{
		width = height = depth = 0;
	}
	// constructor used when cube is created
	Box(double len)
	{
		width = height = depth = len;
	}
	// compute and return volume
	double volume()
	{
		return width * height * depth;
	}
}
// Driver code
public class Jasleen1905345
{
	public static void main(String args[])
	{
		// create boxes using the various
		// constructors
		Box mybox1 = new Box(10, 20, 15);
		Box mybox2 = new Box();
		Box mycube = new Box(7);
		double vol;
		// get volume of first box
		vol = mybox1.volume();
		System.out.println(" Volume of mybox1 is " + vol);
		// get volume of second box
		vol = mybox2.volume();
		System.out.println(" Volume of mybox2 is " + vol);
		// get volume of cube
		vol = mycube.volume();
		System.out.println(" Volume of mycube is " + vol);
	}
}

