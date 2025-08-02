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

    public boolean ChkSparse() 
    {
        int zCount = 0;
        int tElements = Arr.length * Arr[0].length;

        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                if (Arr[i][j] == 0) {
                    zCount++;
                }
            }
        }
        return zCount > (tElements / 2);
    }
}

public class Assi45_5
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

        boolean result = mobj.ChkSparse();
        System.out.println("Is Sparse Matrix? " + result);
    }
}
