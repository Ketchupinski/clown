/*
Створити клас Студент, що має ім’я (вказівник на рядок), курс та
ідентифікаційний номер. Визначити конструктори, деструктор і функцію виведення.
Створити public-похідний клас – студент-дипломник, що має тему дипломної роботи,
та студент-практикант. Визначити конструктори за умовчанням та з різним числом
параметрів, деструктор, функцію виведення. Визначити функції зміни назви
дипломної роботи.
*/

#include "Student.h"
#include "Diplom.h"
#include "Practic.h"

int main()
{
    string name = "Mike";
    string* n = &name;

    Student s(n, 4, 142414);
    s.Display();

    cout << endl;
    s.Change();
    cout << endl << s << endl;
       
    Diplom d(s, "Cars");
    d.Display();

    cout << endl;
    d.Change();
    cout << endl << d << endl;
   
    Practic p(s, 5);
    p.Display();
    
    cout << endl;
    p.Change();
    cout << endl << p << endl;


}

