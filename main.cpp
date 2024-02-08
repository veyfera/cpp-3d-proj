#include "lib/circle.h"
#include "lib/ellipse.h"


int main()
{
    circle::Circle c1(5);
    ellipse::Ellipse e1(3, 5);

    c1.getPoint(1);
    e1.getPoint(1);
    
    return 0;
}
