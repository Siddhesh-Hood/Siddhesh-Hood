import java.util.*;

class program594
{ 
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int i = 0;

        System.out.println("Words from the String are : ");

        for(i =0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

    }
    
}