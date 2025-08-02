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
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() 
    {
        System.out.println("Matrix is:");
        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void AddColumn() 
    {
        int rows = Arr.length;
        int cols = Arr[0].length;
        for (int j = 0; j < cols; j++) 
        {
            int sum = 0;
            for (int i = 0; i < rows; i++) 
            {
                sum += Arr[i][j];
            }
            System.out.println("Sum of column " + (j + 1) + ": " + sum);
        }
    }
}

public class Assi44_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number of rows and columns: ");
        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        Matrixx mobj = new Matrixx(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        mobj.AddColumn();
    }
}
