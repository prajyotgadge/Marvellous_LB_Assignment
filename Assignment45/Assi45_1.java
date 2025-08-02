import java.util.*;

class Matrixx 
{
    private int[][] Arr;

    public Matrixx(int A, int B) 
    {
        Arr = new int[A][B];
    }

    public void Accept() 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() 
    {
        System.out.println("Matrix:");
        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void Transpose() 
    {
        System.out.println("Transpose:");
        for (int i = 0; i < Arr[0].length; i++) 
        {
            for (int j = 0; j < Arr.length; j++) 
            {
                System.out.print(Arr[j][i] + "\t");
            }
            System.out.println();
        }
    }
}

 class  Assi45_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Matrixx mobj = new Matrixx(iRow, iCol);
        mobj.Accept();
        mobj.Display();
        mobj.Transpose();
    }
}
