#pragma once

#include "iostream"

struct Dimensions_t {
    int height;
    int width;
};
typedef Dimensions_t Dimensions;


// Base class
class Shape
{
public:
    virtual int getArea()=0;    // pure virtual function providing interface framework.

    void setWidth(int); 
    void setHeight(int);
    Dimensions dimension;

protected:
    int prot;

};