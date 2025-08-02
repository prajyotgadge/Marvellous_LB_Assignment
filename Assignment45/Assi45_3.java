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

    public void DisplayReversedColumns() 
    {
        System.out.println("Reversed Columns:");
        for (int i = Arr.length - 1; i >= 0; i--) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

public class Assi45_3 
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
        mobj.DisplayReversedColumns();
    }
}
