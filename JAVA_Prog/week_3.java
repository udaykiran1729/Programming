/*i.	Write a program for the following:  an inner class named Inner is defined within the scope of class Outer. Therefore, any code in class Inner can directly access the variable outer_x. An instance method named display( ) is defined inside Inner. This method displays outer_x on the standard output stream. The main( ) method of InnerClassDemo creates an instance of class Outer and invokes its test( ) method. That method creates an instance of class Inner and the display( ) method is called.
*/

class week_3{
    static int a=10;
    class inner{
        public void display(){
            System.out.println(a);
        }
        
    }
    public static void main(String args[]){
        week_3.inner i=new week_3.inner();
        i.display();
        new week_3().test();
    }
    public void test(){
        System.out.println("test method called");
    }
}