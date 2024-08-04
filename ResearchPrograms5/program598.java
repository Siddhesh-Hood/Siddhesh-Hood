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

        for(int i =0; i< Arr.length; i++)
        {
            System.out.println("Length is : "++Arr[i] +"is : "Arr[i].length());
        }

    }  
}