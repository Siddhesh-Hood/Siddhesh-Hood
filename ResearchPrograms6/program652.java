import java.util.*;
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
    public LinkedList <Employee> lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started sucessfully...");
        lobj = new LinkedList<Employee>();
    }

    // Insert into Employee values(1, "Sagar", "Pune",1100);
    public void InsertIntoTable(String name, String Address, int Salary)
    {
        Employee eobj = new Employee(name, Address, Salary);
        lobj.add(eobj);
    }

    // Select * from Employee;
    public void SelectStar()
    {
        System.out.println("Data from the Employee Database: ");
        for(Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
    }

    //Select * from employee where Eid =3;
    public void SelectSpecific(int ID)
    {
        System.out.println("Information of Employee whose EID is : "+ID);
        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                eref.DisplayInfo();
                break;
            }
        }
    }
}

class program652
{
    public static void main(String args[])
    {
        System.out.println("--------Marvellous Database Management System--------");

        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar Kulkarni","Karve Road Pune 4",11000);
        mobj.InsertIntoTable("Gurav Sharma","SB Road Nasik",21000);
        mobj.InsertIntoTable("Chimayee Patil","LB Road Mumbai",20000);
        mobj.InsertIntoTable("Akash Sudamne","FC Road Satara",25000);
        mobj.InsertIntoTable("Mansi Joshi","Panchavati Nasik",12000);

        mobj.SelectStar();

        mobj.SelectSpecific(4);
    } 
}