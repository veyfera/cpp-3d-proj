#pragma once

#include "curve.h"
#include "types.h"

namespace circle
{
    class Circle : public curve::Curve
    {
        double cRadius;
        public:
        explicit Circle(double radius);
        double getRadius();
        Point getPoint(double t) override;
        Point getDerivative(double t) override;
    };
}

