package LabWork.WorkWithMatrix;

/**
 * Created by Александр Сергеевич on 27.03.2016.
 */
public class MatrixOutput
{
    public static void show (int[][] arr, int sizeX, int sizeY)
    {
        for(int i = 0; i < sizeY; i++)
        {
            for (int j = 0; j < sizeX; j++)
                System.out.printf("%4d", arr[i][j]);

            System.out.println();
        }
    }
}
