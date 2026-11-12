#include <iostream>

using namespace std;

int avgint(int a, int b, int c) 
{
    return (a + b + c) / 3;
}

double avgdouble(int a, int b, int c) 
{

    return (a + b + c) / 3.0;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;

    cout << "Введите три оценки: ";
    cin >> a >> b >> c;

    cout << "Средний балл (целое число): " << avgint(a, b, c) << endl;
    cout << "Средний балл (дообное): " << avgdouble(a, b, c) << endl;

    return 0;
}
