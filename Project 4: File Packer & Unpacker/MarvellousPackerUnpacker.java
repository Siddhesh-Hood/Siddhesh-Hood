import java.util.*;
import java.io.*;

class MarvellousPackerUnpacker
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-----------------------------------------------------");
        System.out.println("------- Marvellous Packer Unpacker CUI Module -------");
        System.out.println("-----------------------------------------------------");

        System.out.println("Choose an option:");
        System.out.println("1. Packing");
        System.out.println("2. Unpacking");
        int choice = sobj.nextInt();

        switch (choice) {
            case 1:
                packing(sobj);
                break;
            case 2:
                unpacking(sobj);
                break;
            default:
                System.out.println("Invalid choice");
                return;
        }
    }

    public static void packing(Scanner sobj) throws Exception
    {
        System.out.println("----------------- Packing Activity ------------------");
        System.out.println();

        System.out.println("Enter the name of Directory that you want to open for packing : ");
        String FolderName = sobj.next();

        File fobj = new File(FolderName);

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.next();

        File Packobj = new File(PackedFile);
        
        boolean bret = Packobj.createNewFile();
        if(bret == false)
        {
            System.out.println("Unable to create packed file");
            return;
        }

        FileOutputStream foobj = new FileOutputStream(Packobj);

        if(fobj.exists())
        {
            int i = 0, j = 0;
            int iCount = 0;

            File Arr[] = fobj.listFiles();

            
            String Header = null;
            int iRet = 0;
            byte Buffer[] = new byte[1024];
            FileInputStream fiobj = null;
            
            for(i = 0; i < Arr.length; i++)
            {
                Header = Arr[i].getName();
                
                if(Header.endsWith(".txt"))
                {
                    System.out.println("File packed with name : "+Header);
                    
                    Header = Header + " " + Arr[i].length();

                    for(j = Header.length(); j < 100; j++)
                    {
                        Header = Header + " ";
                    }

                    foobj.write(Header.getBytes(),0,100);

                    fiobj = new FileInputStream(Arr[i]);

                    while((iRet = fiobj.read(Buffer))!= -1)
                    {
                        foobj.write(Buffer,0,iRet);
                    }

                    fiobj.close();
                    iCount++;
                }
            }

            System.out.println("-----------------------------------------------------");
            System.out.println("Packing activity completed..");
            System.out.println("Number of files scan : "+Arr.length);
            System.out.println("Number of files packed : "+iCount);
            System.out.println("-----------------------------------------------------");

            System.out.println("Thank you for using Marvellous Packer Unpacker tool");
            foobj.close();
        }
        else
        {
            System.out.println("There is no such directory");
        }
    }

    public static void unpacking(Scanner sobj) throws Exception
    {
        System.out.println("----------------- Unpacking Activity ------------------");
        System.out.println();

        System.out.println("Enter the name of packed file that you want to unpack : ");
        String PackedFile = sobj.next();

        File Packobj = new File(PackedFile);

        if(!Packobj.exists())
        {
            System.out.println("There is no such packed file");
            return;
        }

        FileInputStream fiobj = new FileInputStream(Packobj);

        byte Buffer[] = new byte[1024];
        int iRet = 0;

        String FolderName = "Unpacked_Files";
        File fobj = new File(FolderName);
        if(!fobj.exists())
        {
            fobj.mkdir();
        }

        while((iRet = fiobj.read(Buffer))!= -1)
        {
            String Header = new String(Buffer, 0, 100);
            String FileName = Header.substring(0, Header.indexOf(' '));
            int FileSize = Integer.parseInt(Header.substring(Header.indexOf(' ') + 1));

            FileOutputStream foobj = new FileOutputStream(FolderName + "/" + FileName);

            int i = 0;
            while(i < FileSize)
            {
                iRet = fiobj.read(Buffer);
                foobj.write(Buffer, 0, iRet);
                i += iRet;
            }

            foobj.close();
            System.out.println("File unpacked with name : "+FileName);
        }

        fiobj.close();

        System.out.println("-----------------------------------------------------");
        System.out.println("Unpacking activity completed..");
        System.out.println("-----------------------------------------------------");

        System.out.println("Thank you for using Marvellous Packer Unpacker tool");
    }
}