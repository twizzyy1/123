#include <iostream>

using namespace std;

void printTime(int totalMinutes) 
{
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    cout << totalMinutes << " мин -> " << hours << " ч " << minutes << " мин" << endl;
}

int main() 
{
    setlocale(LC_ALL, "Russian");

    int userMinutes;
    cout << "Введите колтчество минут: ";
    cin >> userMinutes;
    printTime(userMinutes);

    cout << "\ntest" << endl;

    printTime(125);
    printTime(60);
    printTime(45);

    return 0;
}
