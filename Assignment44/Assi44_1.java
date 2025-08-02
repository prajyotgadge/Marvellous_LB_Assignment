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

    public int AddDiagonal() 
    {
        int iSum = 0;
        for (int i = 0; i < Arr.length; i++) 
        {
            iSum += Arr[i][i];
        }
        return iSum;
    }
}

public class Assi44_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter rows and columns (same): ");
        int size = sobj.nextInt();

        Matrixx mobj = new Matrixx(size, size);
        mobj.Accept();
        mobj.Display();

        int result = mobj.AddDiagonal();
        System.out.println("Addition of diagonal elements: " + result);
    }
}
