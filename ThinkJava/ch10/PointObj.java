import java.awt.Point;
import java.awt.Rectangle;
public class PointObj{

	public static void main(String[] args){

		Rectangle box;
		box = new Rectangle(0, 0, 50, 100);
		//box.translate(10,20);
		System.out.println(box);
		System.out.println("Center: " + findCenter(box));

		Point blank;
		blank = new Point(3, 4);

		System.out.println(blank);
		movePoint(blank);	
	}



	/** Increase one unit both the coordinates of an object of type Point
 	*
 	* @param blank the type Point object to move
 	*/

	public static void movePoint(Point blank){
		blank.x = blank.x + 1;
		blank.y = blank.y + 1;
		System.out.println(blank);
	}

	/** Finds out the coordinates of the geometric 
	 *  center of a Rectangle object
	 *
	 * @param box the Rectangle object
	 * */

	public static Point findCenter(Rectangle box){
		int x = box.x + box.width/2;
		int y = box.y + box.height/2;
		return new Point(x, y);
	}
}
