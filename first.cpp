#include <iostream>
using namespace std;

int Sum(int a, int b) 
{
    return a + b;
}

int Diff(int a, int b) 
{
    return a - b;
}

int Prod(int a, int b) 
{
    return a * b;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    
    int num1, num2;

    cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите ывторое число: ";
        cin >> num2;

        cout << "Сумма: " << Sum(num1, num2) << endl;
        cout << "Разность: " << Diff(num1, num2) << endl;
        cout << "Произведнние:" << Prod(num1, num2) << endl;
   
    return 0;
}
