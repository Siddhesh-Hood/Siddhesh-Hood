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
    {
        node newn = new node(No);
        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;  
    }

    public int Pop()
    {
        int Value = 0;

        if(First == null)
        {
            System.out.println("Stack Is Empty");
            return -1;
        }
        else 
        {
            Value = First.data;
            First = First.next;
        }
        iCount--;
        return Value;
    }

    public void Display()
    {
        System.out.println("Elements of Stack are: ");

        node temp = First;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }  
        
    public int Count()
    {
        return iCount;
    }
}

class program421   
{
    public static void main(String[] Arg)
    {
        Stack obj = new Stack();
        int iRet =0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);
        obj.Push(50);

        obj.Display();
        iRet = obj.Pop();
        System.out.println("Pop Element is: "+iRet);

        obj.Display();
    }
}
