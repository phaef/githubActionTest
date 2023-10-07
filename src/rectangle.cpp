#include "shape.h"
#include "rectangle.h"

// Derived classes

int Rectangle::getArea()
{
    return (dimension.width * dimension.height);
}