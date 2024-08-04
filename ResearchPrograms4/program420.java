class node  //Stack
{
    public int data;
    public node next;
    public node prev;

    public node (int Value) 
    {
        data = Value;
        next = null;
    }
}

class Stack 
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("Object Of Stack Gets Created Sucessfully");

        First = null;
        iCount = 0;
    }

    public void Push(int No)
    {}

    public int Pop()
    {
        return 0;
    }

    public void Display()
    {}  
        
    public int Count()
    {
        return iCount;
    }
}

class program420   
{
    public static void main(String[] Arg)
    {
        Stack obj = new Stack();
    }
}



