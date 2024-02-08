#pragma once

#include "curve.h"
#include "types.h"

namespace ellipse
{
    class Ellipse : public curve::Curve
    {
        double radiusX, radiuxY;
        public:
        Ellipse(double radiusX, double radiusY);

        double getRadiusX();
        double getRadiusY();
        Point getPoint(double t) override;
        Point getDerivative(double t) override;
    };

}

