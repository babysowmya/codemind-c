class Point
{
    int x,y;  //instance variables
    Point(int x, int y)  //(int a,int b) -> local variables
    {
        this.x=x;  //x=a; -> initializing instance variable x with local variable x
        this.y=y;  //y=b; -> initializing instance variable y with local variable y
        printPoint();
    }
    void printPoint()
    {
        System.out.println("(" + x + ", " + y + ")");
    }
}
class ThisKeyExample {
    static void printDistance(Point p1,Point p2)
    {
        double distance=Math.sqrt(Math.pow(p2.x-p1.x,2)+Math.pow(p2.y-p1.y,2));
        System.out.printf("%.2f",distance);
    }
    static void change(Point p)
    {
        p.x=100;
        p.y=200;
    }
    public static void main(String[] args) {
        Point p1= new Point(3,4);
        System.out.println("Before method call: ");
        p1.printPoint();
        change(p1);
        System.out.println("After method call: ");
        p1.printPoint();
        //Point p2= new Point(7,8);
        //printDistance(p1,p2);
    }
}