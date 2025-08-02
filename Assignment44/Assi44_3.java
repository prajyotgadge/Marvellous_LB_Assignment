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

    public int MaxDiagonal() 
    {
        int max = Arr[0][0];
        int n = Arr.length;
        int m = Arr[0].length;
        for (int i = 0; i < n; i++) 
        {
            if (Arr[i][i] > max) max = Arr[i][i];
            if (Arr[i][m - i - 1] > max) max = Arr[i][m - i - 1];
        }
        return max;
    }
}

public class Assi44_3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number of rows and columns (square matrix): ");
        int size = sobj.nextInt();

        Matrixx mobj = new Matrixx(size, size);
        mobj.Accept();
        mobj.Display();

        int result = mobj.MaxDiagonal();
        System.out.println("Maximum element from both diagonals: " + result);
    }
}
