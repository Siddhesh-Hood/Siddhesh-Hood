import java.util.Scanner;

 class program205 
{
    public static void main(String[] args) 
    { 
        Scanner sobj = new Scanner(System.in);
        
        int iValue =0;
        int iCnt = 0, iSum =0;

        System.out.println("Enter Number:");
        iValue =sobj.nextInt();

        for(iCnt =1; iCnt<= iValue/2 ; iCnt++ )
      {
          if(iValue % iCnt ==0)
          {
              iSum = iSum +iCnt;
          }
      }
        System.out.println("Summation of factors is: "+iSum);
    }
    
}
