import java.util.*;

class program591
{ 
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        System.out.println("String before Replacement : "+str);

        str = str.replaceAll("a", "z");

        System.out.println("String after Replacement : "+str);
    }
    
}