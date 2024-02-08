#include "types.h"
#include "circle.h"
#include <cmath>
#include <iostream>

//class Circle : Curve
//{

    //public:
namespace circle
{
    Circle::Circle(double radius)
    {
        if(radius <= 0)
        {
            cerr << "radius must be positive" << endl;
            exit(0);
        }

        //curveType = 'circle';
        setType('circle');
        //getType();
        cRadius = radius;
    }

    double Circle::getRadius()
    {
        return cRadius;
    }

    Point Circle::getPoint(double t)
    {
        double x = cRadius * cos(t);
        double y = cRadius * sin(t);
        double z = 0;
        return {x, y, z};
    }

    Point Circle::getDerivative(double t)
    {
        double x = -cRadius * sin(t);
        double y = cRadius * cos(t);
        double z = 0;
        return {x, y, z};
    }

    //};

}

