#include <iostream>
#include <Windows.h>
#include <time.h>

typedef int Info;
struct Elem
{
    Elem* next,
        * prev;
    Info info;
};

using namespace std;
void enqueue(Elem*& first, Elem*& last, Info value);
void Check(Elem* L, Info x);
void Print(Elem* L);

int main()
{
    srand((unsigned)time(NULL));
    SetConsoleCP(1251); // встановлення сторінки win-cp1251 в потік вводу
    SetConsoleOutputCP(1251); // встановлення сторінки win-cp1251 в потік виводу

    Elem* first = NULL,
        * last = NULL;
    for (int i = 1; i <= 10; i++) {
        Info numb = 1 + rand() % 10;
        enqueue(first, last, numb);
    }

    cout << endl;
    Print(first);
    cout << endl;
    int x; 
    cout << "Введіть число, яке буде провірятись на дублювання: "; cin >> x;
    cout << endl;
    Check(first, x);
    cout << endl;
}


void enqueue(Elem*& first, Elem*& last, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    tmp->next = NULL;
    if (last != NULL)
        last->next = tmp;
    tmp->prev = last;
    last = tmp;
    if (first == NULL)
        first = tmp;
}

void Print(Elem* L) {
    cout << "Вивід списку: ";
    while (L->next != NULL)
    {
        cout << L->info << " ";
        L = L->next;
    }
}

void Check(Elem* L, Info x) {
    cout << "Дублювання однакових цифр: ";
    while (L->next != NULL)
    {
        cout << L->info << " ";
        if (L->info == x) { // Якщо число знайдено, то воно дублюється
            cout << "*" << L->info << "*" << " ";
        }
        L = L->next;
    }
}