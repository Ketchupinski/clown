/*
Створити абстрактний базовий клас Figure з віртуальними методами обчислення
площі і периметру. Створити похідні класи: Rectangle (прямокутник), Circle (круг),
Trapezium (трапеція) з своїми функціями площі і периметру. Самостійно визначити,
які поля необхідні, які з них можна задати в базовому класі, а які – в похідних.
*/

#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Trapezium.h"
#include "Rectangle.h"

int main()
{
    Rectangle r(5, 3);
    cout << "rectangle perimetr: " << r.Perimeter() << endl;
    cout << "rectangle square: " << r.Square() << endl;

    Circle c(4);
    cout << "circle perimetr: " << c.Perimeter() << endl;
    cout << "rectangle square: " << c.Square() << endl;

    Trapezium t(5, 4, 7, 2);
    cout << "trapezium perimetr: " << t.Perimeter() << endl;
    cout << "trapezium square: " << t.Square() << endl;

}
