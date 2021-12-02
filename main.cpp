#include <iostream>

using namespace std;
void ordenar(int arr[],int n);
void desordenar(int arr[],int n);

main()
{
    int num1;
    cout << "Dame el tamaño del el arreglo" <<endl;
    cin >> num1;
    int N[num1];
    for(int contador=0; contador < num1; contador++)
    {
        cout << "Dame el numeros : " << contador <<endl;
        cin >> N[contador];
    }
    cout << "Como el usuario los pidio" << endl;
//Datos Mostrados como el usuario pidio
    for(int contador1; contador1 < num1; contador1++)
    {
        cout << N[contador1]<<" ";
    }
cout << endl;
//Datos Mostrados en orden numerico
        ordenar(N,num1);
//Datos con orden al reves
        desordenar(N,num1);

    return 0;
}
void mostrar(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void ordenar(int arr[], int n)
{
    bool desordenado;
    for (int i = 0; i < n-1; i++)
    {
        desordenado = false;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                //intercambiar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                desordenado = true;
            }
            mostrar(arr, n);
        }
        if(!desordenado)  //YA ESTÁ ORDENADO
        {
            break;
        }
    }
}
void desordenar(int arr[], int n)
{
    bool desordenado;
    for (int i = 0; i < n-1; i++)
    {
        desordenado = false;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                //intercambiar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                desordenado = true;
            }
            mostrar(arr, n);
        }
        if(!desordenado)  //YA ESTÁ ORDENADO
        {
            break;
        }
    }
}
