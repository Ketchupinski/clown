#include "Rectangle.h"

int main()
{
    Rectangle r;
    r.Read();
    r.Display();
    cout << endl;
    cout << "Area: " << getArea(r) << endl;
    cout << "Perimeter: " << getPerimeter(r) << endl;
}
