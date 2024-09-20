
#include <iostream>
#include <windows.h> 
#include <string>

using namespace std;

enum Colors { DARKGREEN = 2, RED = 12, YELLOW = 14 };
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//task2
void line(int howMany, string  symvol, int color, bool howYouWant)
{
    if (howYouWant == true)
    {
        for (int i = 0;i < howMany;++i)
        {
            SetConsoleTextAttribute(h, color);
            cout << symvol;
        }
    }
    else
    {
        for (int i = 0;i < howMany;++i)
        {
            SetConsoleTextAttribute(h, color);
            cout << symvol << "\n";
        }
    }
}

//task3
void squar(int weight, int height, string  symvolRamki, int colorRamki, string  symvolZalivki, int colorZalivki)
{
    for (int i = 0; i < height; ++i)
    {
        for (int y = 0;y < weight; ++y)
        {
            if (i == 0 || y == 0 || i == height - 1 || y == weight - 1)
            {
                SetConsoleTextAttribute(h, colorRamki);
                cout << symvolRamki;
            }
            else
            {
                SetConsoleTextAttribute(h, colorZalivki);
                cout << symvolZalivki;
            }
        }
        cout << "\n";
    }
}

//task5
void prostoe(int munber)
{
    for (int i = 2; i <= sqrt(munber); i++) {
        if (munber % i == 0) {
            cout << "Ne prostoe";
        }
    }
    cout << "Prostoe";
}

//task6
void twoNumber(int number1, int number2)
{
    int sum = 0;
    for (int i = number1; i < number2;++i)
    {
        sum += i;
    }
    cout << sum;
}

int main()
{
    //line(20,"0",RED,true);
    //line(20,"0",RED,false);

    //squar(10, 50, "0", RED, "K", YELLOW);

    //prostoe(4);

    //twoNumber(2, 20);
}

