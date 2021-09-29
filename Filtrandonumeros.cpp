# Semestre2021_club_algoritmia
#include <iostream>

using namespace std;

int main()
{
    int numero_multiplos = 0;
    cout << "Numero de la secuencia :" << endl;
    cin >> numero_multiplos;

    int numero_multiplo = 0;
    cout << "Numero de el multiplo  :" << endl;
    cin >> numero_multiplo;

    int contador = 0;
    do
    {
            contador++;
            int multiplo = contador % numero_multiplo;

            if(multiplo != 0)
            {
                cout << " X ";
            }
            else
            {
                cout << contador;
            }

    }
    while(contador != numero_multiplos);
    return 0;
}


