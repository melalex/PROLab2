package LabWork.WorkWithMatrix;

import LabWork.Main.Coordinates;
import java.util.LinkedList;

/**
 * Created by Александр Сергеевич on 27.03.2016.
 */

public class FindAFirstNegativeElementInTheColumns
{
    static private Coordinates FindNegative(int[][] arr, int coordX, int sizeY)
    {
        for(int i = 0; i < sizeY; i++)
            if(arr[i][coordX] < 0) return new Coordinates(coordX, i);

        return null;
    }

    public static LinkedList<Coordinates> Find (int[][] arr, int sizeX, int sizeY)
    {
        LinkedList<Coordinates> list = new LinkedList<>();
        Coordinates coord;
        for(int i = 0; i < sizeX; i++)
        {
            coord = FindNegative(arr, i, sizeY);
            if(coord != null)
            {
                list.add(coord);
            }
        }

        return list;
    }
}

