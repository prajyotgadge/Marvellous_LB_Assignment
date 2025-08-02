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

    public int CountFrequency(int iNo) 
    {
        int count = 0;
        for (int[] row : Arr) 
        {
            for (int val : row) 
            {
                if (val == iNo) 
                {
                    count++;
                }
            }
        }
        return count;
    }
}

public class Assi44_2
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

        System.out.print("Enter number to find frequency: ");
        int num = sobj.nextInt();
        int result = mobj.CountFrequency(num);
        System.out.println("Frequency of " + num + " is: " + result);
    }
}
