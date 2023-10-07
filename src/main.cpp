
#include <stdio.h>
#include <iostream>

#include "shape.h"
#include "rectangle.h"
#include "triangle.h"

int main(int argc, char *argv[])
{

    // printf("You have entered %d arguments:\n", argc);
    //
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("%s\n", argv[i]);
    // }

    Rectangle rect;
    Triangle tri;

    constexpr int width = 5;
    constexpr int height = 8;

    rect.setWidth(width);
    rect.setHeight(height);
    std::cout << "Rectangle:\n"
        "\tHeight: " << rect.dimension.height << "\n"
        "\tWidth: " << rect.dimension.width << "\n"
        "\tArea:" << rect.getArea() <<std::endl;;

    tri.setWidth(width);
    tri.setHeight(height);
    std::cout << "Triangle:\n"
        "\tHeight: " << rect.dimension.height << "\n"
        "\tWidth: " << rect.dimension.width <<  "\n"
        "\tArea:" << rect.getArea() <<std::endl;;
    return 0;
}