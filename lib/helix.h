#include "circle.h"

namespace helix
{
    class Helix : public circle::Circle
    {
        double step;
        public:
        Helix(double radius, double step);
        
        Point getPoint(double t);
        // use getX, getY, getZ for inheritance
        Point getDerivative(double t);
    }

}
