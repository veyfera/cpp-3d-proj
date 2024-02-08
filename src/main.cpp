#include "../inc/circle.h"
#include "../inc/ellipse.h"
#include "../inc/helix.h"


int main()
{
    circle::Circle c1(5);
    ellipse::Ellipse e1(3, 5);
    helix::Helix h1(5, 1);

    c1.getPoint(1);
    c1.getDerivative(1);
    e1.getPoint(1);
    e1.getDerivative(1);
    h1.getPoint(1);
    h1.getDerivative(1);
    
    return 0;
}
