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

    public boolean ChkIdentity() 
    {
        if (Arr.length != Arr[0].length) return false;

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                if (i == j && Arr[i][j] != 1) 
                {
                    return false;
                } else if (i != j && Arr[i][j] != 0) 
                {
                    return false;
                }
            }
        }
        return true;
    }
}

public class Assi45_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of square matrix: ");
        int size = sobj.nextInt();

        Matrixx mobj = new Matrixx(size, size);
        mobj.Accept();

        boolean result = mobj.ChkIdentity();
        System.out.println("Is Identity Matrix? " + result);
    }
}
