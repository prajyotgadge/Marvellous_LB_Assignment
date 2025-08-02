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

    public void SwapRows() {
        for (int i = 0; i < Arr.length - 1; i += 2) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
    }

    public void Display() 
    {
        System.out.println("Matrix after swapping rows:");
        for (int[] row : Arr) 
        {
            for (int val : row) 
            {
                System.out.print(val + "\t");
            }
            System.out.println();
        }
    }
}

public class Assi44_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number of rows and columns: ");
        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        Matrixx mobj = new Matrixx(iRow, iCol);
        mobj.Accept();

        mobj.SwapRows();
        mobj.Display();
    }
}
