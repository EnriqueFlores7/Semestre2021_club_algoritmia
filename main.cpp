#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

struct nodo
{
    int dato;
    nodo *siguiente;
    nodo *anterior;
};
class clista
{
private:
    nodo *inicio, *fin, *aux;
    int contador;

public:
    clista();
    ~clista();
    bool vacio();
    void anadir();
    void recorrer();
    void quitar();
    void recorrerfin();
};
//constructor inicializador de las variables
clista::clista()
{
    inicio = NULL;
    contador = 0;
}
clista::~clista()
{
}
bool clista::vacio()
{
    if (inicio == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void clista::anadir()
{
    aux = new nodo;
    cout << "Dame un numero :";
    cin >> aux->dato;
    aux->siguiente = NULL;
    if (vacio())
    {
        aux->anterior = NULL;
        inicio = fin = aux;
    }
    else
    {
        aux->anterior = fin;
        fin->siguiente = aux;
        fin = aux;
    }
    contador++;
}
void clista::recorrerfin()
{
}
void clista::recorrer()
{
    if (vacio())
    {
        cout << "No Hay elementos en la lista" << endl;
    }
    else
    {
        aux = inicio;
        cout << "Muestra elementos de la lista" << endl;
        for (int i = 1; i <= contador; i++)
        {
            cout << aux->dato << "-->";
            aux = aux->siguiente;
        }
        cout << "NULL" << endl;
    }
}
void clista::quitar()
{
    int elemento;
    if (vacio())
    {
        cout << "No ay elementos en la lista" << endl;
    }
    else
    {
        aux = inicio;
        elemento = aux->dato;
        inicio = inicio->siguiente;
        inicio->anterior = NULL;
        delete aux;
        cout << "El elemento de la lista fue eliminado" << elemento << endl;
        contador--;
    }
}
int main()
{
    // setlocale();
    clista objeto1;
    objeto1.anadir();
    objeto1.anadir();
    objeto1.anadir();

    objeto1.recorrer();

    objeto1.quitar();

    objeto1.recorrer();
    cout << "Hello world!" << endl;
    return 0;
}
