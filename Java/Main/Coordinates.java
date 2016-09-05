package LabWork.Main;

/**
 * Created by Александр Сергеевич on 27.03.2016.
 */
public class Coordinates
{
    private int x, y;

    public Coordinates(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    @Override
    public String toString()
    {
        return "x=" + x + " y=" + y + ";";
    }
}
