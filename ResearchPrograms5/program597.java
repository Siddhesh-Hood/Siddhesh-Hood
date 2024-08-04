import java.util.*;

class program597
{ 
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");
        
        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

    }  
}