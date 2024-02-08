#include "types.h"
#include "ellipse.h"
#include <cmath>

class Ellipse : Curve
{
    Ellipse(double radiusX, double radiusY)
    {
        if(radiusX <= 0 || radiusY <= 0)
        {
            cerr << "radii must be positive" << endl;
            exit(0);
        }
        curveType = "ellipse";
        radiusX = radiusX
    }

    double getRadiusX()
        return radiusX;
    {
    }
    double getRadiusY()
    {
        return radiusY;
    }

    Point getPoint(double t)
    {
        double x = radiusX * cos(t);
        double y = radiusY * cos(t);
        double z = 0;
        return {x, y, z};
    }

    Point getDerivative(double t)
    {
        double x = -radiusX * sin(t);
        double y = radiusY * cos(t);
        double z = 0;
        return {x, y, z};
    }


};

