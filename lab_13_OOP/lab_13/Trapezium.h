#pragma once
#include "Figure.h"
class Trapezium : 
    public Figure
{
private:
    int a, b, c; // a,c - bichni storoni, b, x - osnovi 
public:
    Trapezium();
    Trapezium(int, int, int, int);
    Trapezium(Trapezium&);
    ~Trapezium();

    void SetA(int);
    void SetB(int);
    void SetC(int);

    int GetA() { return a; }
    int GetB() { return b; }
    int GetC() { return c; }

    virtual int Square() override;
    virtual int Perimeter() override;
};

