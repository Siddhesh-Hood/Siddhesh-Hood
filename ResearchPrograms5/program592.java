import java.util.*;

class program592
{ 
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        System.out.println("Entered String is : "+str);

        str = str.trim();
        str = str.replaceAll("  ", " ");

        char Arr[] = str.toCharArray();

        int iCnt =0, i=0;

        for(i =0; i< Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of words are : "+(iCnt +1));
    }
    
}