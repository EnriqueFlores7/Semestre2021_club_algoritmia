#include <iostream>

using namespace std;

int main()
{
    int n,suma1=0,suma2=0,error=0;
    error==0;
    cout << "Dame el tamaño del array" << endl;
    cin >> n;
    int vector1[n], vector2[n];

    for(int contador =0; contador < n;contador++)
    {
        cout <<"Primera Secuencia" << endl;
            cout << "Dame los numeros"<< endl;
            cin >> vector1[contador];
            suma1 +=vector1[contador];
            if(vector1[contador]==0)
            {
                suma1=error;
            }
    }
    for(int contador2 =0; contador2 < n;contador2++)
    {
        cout <<"Segunda Secuencia" <<endl;
            cout << "Dame los numeros"<< endl;
            cin >> vector2[contador2];
            suma2 +=vector2[contador2];

    }
    cout << suma1 << endl;
    cout << suma2 << endl;
    if(suma1 > suma2 && suma2 < suma1)
    {
        cout << "1" << endl;
        cout << "0" << endl;
    }else if(suma1 < suma2 && suma1 < suma2)
    {
        cout << "0" << endl;
        cout << "1" << endl;
    }

    return 0;
}
