#pragma once
#include "Figure.h"
class Circle :
    public Figure
{
private: 
    // x = radius
public:
    Circle();
    Circle(int);
    Circle(Circle&);
    ~Circle();

    virtual int Square() override;
    virtual int Perimeter() override;

};

