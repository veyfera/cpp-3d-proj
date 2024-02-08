#include "../inc/helix.h"
#include <cmath>
#include <iostream>

namespace helix
{
    Helix::Helix(double r, double s)
    : circle::Circle(r)
    {
        if(r<= 0 || step <= 0)
        {
            cerr << "radius and step must me positive" << endl;
        }

        setType(HELIX);
        setRadius(r);
        step = s;
    }
    
    Point Helix::getPoint(double t)
    {
        double x = getRadius() * cos(t);
        double y = getRadius() * sin(t);
        double z = t * step / (2 * M_PI);
        return {x, y, z};
    }

    Point Helix::getDerivative(double t)
    {
        double x = -getRadius() * sin(t);
        double y = getRadius() * cos(t);
        double z = step * 2 * M_PI;
        return {x, y, z};
    }

}
