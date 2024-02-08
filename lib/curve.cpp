#include "curve.h"

namespace curve
{
    curveType Curve::getType ()
    {
        return type;
    }
    void Curve::setType (curveType cType)
    {
        type = cType;
    }

}
