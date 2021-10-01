# Semestre2021_club_algoritmia
#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Dame el numero de veces que aparezca de 'o' :" << endl;
    cin >> num1;
    char letra[num1],numerodeo;
    cout << "W";
    while(num1--)
    {
        letra[num1] = {'o'};
        cout << letra[num1];
    }
    cout << "w";
    return 0;
}
