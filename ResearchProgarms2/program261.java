import java.util.Scanner;

class program261
{
    public static void main(String Arg [])
    {
        Scanner sobj = new Scanner (System. in) ;

        System.out.println("Enter Your name: ");
        String name = sobj.nextLine( ) ;

        char Arr[] = name.toCharArray();

        
        System.out.println("Array Length is: "+Arr.length);     //length property
        System.out.println("String Length is: "+name.length()); //length method

       
    }
    
}
    
