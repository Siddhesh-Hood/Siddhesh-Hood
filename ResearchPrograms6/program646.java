class Employee
{
    public int EID;
    public String EName;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static 
    {
        Counter = 0;
    }

    public Employee(String B, String C, int D)
    {
        this.EID = ++Counter;
        this.EName =B;
        this.EAddress =C;
        this.ESalary = D;
    }

    void DisplayInfo()
    {
        System.out.println("EID: "+EID+ " Name : "+EName+" Address : "+EAddress+" Salaray : "+ESalary);
    }
}
class MarvellousDBMS
{
    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started sucessfully...");
    }
}
class program646 
{
    public static void main(String args[])
    {
        System.out.println("--------Marvellous Database Management System--------");

        MarvellousDBMS mobj = new MarvellousDBMS();

    } 
}