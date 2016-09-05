package LabWork.Main;

import LabWork.WorkWithMatrix.MatrixOutput;
import LabWork.WorkWithMatrix.FindAFirstNegativeElementInTheColumns;

import java.util.LinkedList;
import java.util.Random;

public class Main
{
    private static final int m = 3;
    private static final int n = 5;
    private static Random rand = new Random();

    public static void main(String[] args)
    {
	    int[][] arr = new int[m][n];

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                arr[i][j] = rand.nextInt(201) - 100;

        MatrixOutput.show(arr, n, m);
        LinkedList<Coordinates> coordinates = FindAFirstNegativeElementInTheColumns.Find(arr, n, m);

        System.out.println();

        for(Coordinates coord : coordinates)
            System.out.println(coord);
    }
}
