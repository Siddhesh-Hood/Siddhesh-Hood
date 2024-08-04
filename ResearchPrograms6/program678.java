import java.util.*;
class program678
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

        HashMap<String, Integer>hobj = new HashMap<String,Integer>();

        int Frequency =0;

        for(String A : Arr)
        {
            if(hobj.containsKey(A))  //String already Occurs
            {
                Frequency = hobj.get(A);
                hobj.put(A,Frequency+1);
            }
            else            //String occurs first time
            {
                hobj.put(A,1);
            }
        }
        
        Set <String>setobj = hobj.keySet();
        
        for(String B : setobj)
        {
            System.out.println(B+" Occurs "+hobj.get(B) + " Times");
        }
    }
}

