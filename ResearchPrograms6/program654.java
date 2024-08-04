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

    //Select * from employee where Ename ="Sagar";
    public void SelectSpecific(String Name)
    {
        System.out.println("Information of Employee whose Name is : "+Name);
        for(Employee eref : lobj)
        {
            if(Name.equals(eref.EName))
            {
                eref.DisplayInfo();
            }
        }
    }

    //delete from Employee where EID = 3;
    public void DeleteFrom(int ID)
    {
        int index = 0;
        boolean bflag = false;

        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                bflag = true;
                break;
            }
            index++;
        }
        
        if(bflag == false)
        {
            System.out.println("Unable to delete the element from database as given id is not prsent");
        }
        else
        {
            lobj.remove(index);
        }
    }
}

class program654
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
        mobj.SelectSpecific("Chimayee Patil");

        mobj.DeleteFrom(4);
        mobj.SelectStar();
    } 
}