import java.util.*;

class program604
{ 
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str =str.reverse();


        System.out.println("Reverse String is : "+str);
    }  
}