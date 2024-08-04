import java.util.*;
class program671
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter String : ");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        HashMap<Character, Integer> hobj = new HashMap<Character, Integer> ();

        int Frequency =0;
        for (char ch : Arr)
        {
            if (hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch, Frequency + 1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }
        Set <Character> setobj = hobj.keySet();

        int iMax =0;
        char ch = '\0';
        for(char data : setobj)
        {
            if (hobj.get(data) > iMax)
            {
                iMax = hobj.get(data);
                ch = data;
            }  
        }
        System.out.println("Character "+ch + " Ocuurs maximum number of times in string i.e "+iMax+" times");
    }
}

//put(key,value)
//get(key)
//containsKey(key)