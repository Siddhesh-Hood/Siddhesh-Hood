import java.util.*;
class program674
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter String : ");
        String str=sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println(str);

        String Arr[] = str.split(" ");

        for(String a : Arr)
        {
            System.out.println(a);
        }
        
    }
}

