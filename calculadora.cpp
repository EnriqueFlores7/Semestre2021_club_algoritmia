# Semestre2021_club_algoritmia
#include <iostream>

using namespace std;

int main()
{
    cout << "(1)Suma" << endl;
    cout << "(2)Resta" << endl;
    cout << "(3)Multiplicacion" << endl;
    cout << "(4)Division" << endl;
    cout << endl;

    int  operacion;
    cout << "Que operacion quieres hacer : ?" << endl;
    cin  >> operacion;

    int num1,num2,operaciones_alge;
    if(operacion == 1)
    {
        cout << "Usted a seleccionado la suma " << endl;

        cout << "Dame el primer valor" << endl;
        cin >> num1;
        cout << "Dame el Segundo valor" << endl;
        cin >> num2;
        operaciones_alge = num1 + num2;
        cout << "El resultado es :" << operaciones_alge << endl;
    }
    else if (operacion == 2)
    {
        cout << "Usted a seleccionado la suma " << endl;

        cout << "Dame el primer valor" << endl;
        cin >> num1;
        cout << "Dame el Segundo valor" << endl;
        cin >> num2;
        operaciones_alge = num1 - num2;
        cout << "El resultado es :" << operaciones_alge << endl;
    }
    else if (operacion==3)
    {
        cout << "Usted a seleccionado la suma " << endl;

        cout << "Dame el primer valor" << endl;
        cin >> num1;
        cout << "Dame el Segundo valor" << endl;
        cin >> num2;
        operaciones_alge = num1 * num2;
        cout << "El resultado es :" << operaciones_alge << endl;
    }else if(operacion == 4)
    {
        double operacion_decimal= 0;
        cout << "Usted a seleccionado la suma " << endl;
        cout << "Dame el primer valor" << endl;
        cin >> num1;
        cout << "Dame el Segundo valor" << endl;
        cin >> num2;
        operaciones_alge = num1 / num2;
        cout << "El resultado es :" << operaciones_alge << endl;
    }else
    {
        cout << "Operacion no existente" << endl;
    }

}
