# Semestre2021_club_algoritmia#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
using namespace std;
//10-100-20-80-40-70,5-10-20-30-40-50-60__15-14-13-12-11-10-9-8__100-29-71-82-48-39-1001-22-46-17-3-20-25-10
struct Torre1
{
    int dato_Torre1;
    Torre1 *siguiente;
    Torre1 *anterior;
};
typedef Torre1 *Torre_demo;

struct Torre2
{
    int dato_Torre2;
    Torre2 *siguiente;
};
typedef Torre2 *Torre2_demo;

struct Torre3
{
    int dato_Torre3;
    Torre3 *siguiente;
};
typedef Torre3 *Torre3_demo;
//Creacion de la clase de el juego
class proyecto1
{
private:
    int numero_de_discos,contador;
    Torre1 *inicio,*fin,*aux;
    Torre2 *inicio2,*fin2,*aux2;
public:
    proyecto1();
    ~proyecto1();
    void agregar_discos();
    void agregar_datos_discos();
    void agregar_palos();
    //Lista de propiedades demo
    void crear_grafico();
    //Crear la pila
    void agregar_elementos_ala_pila(Torre1 *&,int);
    void imprimir(Torre_demo);
    void imprimir_torre2(Torre2_demo);
    void imprimir_torre3(Torre3_demo);
    //Funcion de pasar un dato a otra pila
    bool vacia();
    void sacar_datos(Torre_demo &p);
    void pasar_dato_a_torre2(Torre2 *&,int);
    void pasar_dato_a_torre3(Torre3 *&,int);
    //Torre2
    void sacar_dato2(Torre2_demo &p);
    void sacar_dato3(Torre3_demo &p);

};
proyecto1::proyecto1()
{
}
proyecto1::~proyecto1()
{
}
void proyecto1::agregar_discos()
{
    int dato;
    dato = 5;
    cout << "Numero de discos :" << dato;
}
void proyecto1::agregar_palos()
{
    int dato;
    dato = 3;
    cout << " \nNumero de Torres :" << dato;
}
void proyecto1::agregar_elementos_ala_pila(Torre1 *&pila,int n)
{
    //DATOS AGREGAR [9,8,7,6,5]
    Torre1 *nuevo_nodo = new Torre1();
    nuevo_nodo->dato_Torre1 =n;
    nuevo_nodo->siguiente =pila;
    pila=nuevo_nodo;

    // cout<<"Valor añanido correctamente"<<endl;
}
void proyecto1::imprimir(Torre_demo pila)
{
    // cout<<"\nElementos de la torre 1"<<endl;
    while(pila!=NULL)
    {
        cout<<"     |"<<pila->dato_Torre1<<"|"<<endl;
        pila=pila->siguiente;
    }
    cout<<"----Torre-1----"<<endl;
}
void proyecto1::imprimir_torre2(Torre2_demo pila2)
{
    //cout<<"\nElementos de la torre 2"<<endl;
    while(pila2!=NULL)
    {
        cout<<"     |"<<pila2->dato_Torre2<<"|"<<endl;
        pila2=pila2->siguiente;
    }
    cout<<"----Torre-2----"<<endl;
}
void proyecto1::imprimir_torre3(Torre3_demo pila3)
{
    //cout<<"\nElementos de la torre 3"<<endl;
    while(pila3!=NULL)
    {
        cout<<"     |"<<pila3->dato_Torre3<<"|"<<endl;
        pila3=pila3->siguiente;
    }
    cout<<"----Torre-3----"<<endl;
}
bool proyecto1::vacia()
{
    if(inicio==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void proyecto1::sacar_datos(Torre_demo &p)
{
    int num;
    Torre_demo aux;
    aux=p;
    num=aux->dato_Torre1;
    p=aux->siguiente;
    delete(aux);
    //return num;
}
void proyecto1::pasar_dato_a_torre2(Torre2 *&pila2,int var2)
{
    Torre2 *nuevo_nodo = new Torre2();
    nuevo_nodo->dato_Torre2 =var2;
    nuevo_nodo->siguiente =pila2;
    pila2=nuevo_nodo;
}
void proyecto1::pasar_dato_a_torre3(Torre3 *&pila3,int var3)
{
    Torre3 *nuevo_nodo = new Torre3();
    nuevo_nodo->dato_Torre3 =var3;
    nuevo_nodo->siguiente =pila3;
    pila3=nuevo_nodo;
}
void proyecto1::sacar_dato2(Torre2_demo &p)
{
    int num;
    Torre2_demo aux;
    aux=p;
    num=aux->dato_Torre2;
    p=aux->siguiente;
    delete(aux);
}
void proyecto1::sacar_dato3(Torre3_demo &p)
{
    int num;
    Torre3_demo aux;
    aux=p;
    num=aux->dato_Torre3;
    p=aux->siguiente;
    delete(aux);
}
int main()
{
    //Variables de datos
    int x;
    //Declaracion de las torres
    Torre1 *pila =  NULL;
    Torre2 *pila2 = NULL;
    Torre3 *pila3 = NULL;
    //Declaracion del objeto1 y las funciones
    proyecto1 objeto1;
    objeto1.agregar_discos();
    objeto1.agregar_palos();
    //Hacer el menu
    int opcion;
    bool repetir = true;
    do
    {
        //system("cls");
        cout<<"\n0. Dejar de jugar"<<endl;
        cout<<"1. Mostrar las torres"<<endl;
        cout<<"2. Agregar datos ala torre 1"<<endl;
        cout<<"3. Mover datos a otra torre"<<endl;
        cout<<"4. Pasar ala torre 2"<<endl;
        cout<<"5. Pasar ala torre 3"<<endl;
        //continuar en el menu de la torre 3

        cout<<"\nIngrese una opcion: "<<endl;
        cin>>opcion;

        switch(opcion)
        {
        case 0:
            cout<<"Gracias por jugar";
            repetir = false;
            break;
        case 1:
            objeto1.imprimir(pila);
            objeto1.imprimir_torre2(pila2);
            objeto1.imprimir_torre3(pila3);
            break;
        case 2:
            int datos;
            char respuesta;
            for(int i=1; i<=5; i++)
            {
                cout<<"\nAgregar discos ala torre "<<i<<endl;
                cin>>datos;
                objeto1.agregar_elementos_ala_pila(pila,datos);
            }
            break;
        case 3:
            int valor_tope_torre1;
            cout<<"Cual fue el ultimo valor agregado ala torre 1"<<endl;
            cin>>valor_tope_torre1;
            objeto1.sacar_datos(pila);
            objeto1.imprimir(pila);

            cout<<"\nA que torre agrego el valor : "<<endl;
            int quepila;
            cin>>quepila;
            if(quepila==1)
            {
                //regresa el valor
                objeto1.agregar_elementos_ala_pila(pila,valor_tope_torre1);
                objeto1.imprimir(pila);
            }
            if(quepila==2)
            {
                objeto1.pasar_dato_a_torre2(pila2,valor_tope_torre1);
                // objeto1.imprimir(pila);
                objeto1.imprimir_torre2(pila2);
                // objeto1.imprimir_torre3(pila3);
            }
            else if(quepila==3)
            {
                //Pon el valor en la pila numero 3
                objeto1.pasar_dato_a_torre3(pila3,valor_tope_torre1);
                objeto1.imprimir_torre3(pila3);
            }
            break;
        case 4:
            cout<<"Menu de la torre 2"<<endl;
            int opcion3;
            bool repertir3;
            repertir3 = true;
            do
            {
                cout << "\n1. Pasar discos ala torres" << endl;
                cout << "2. Mostrar las torres" << endl;
                cout << "0. SALIR" << endl;

                cout<<"Ingresa una opcion :"<<endl;
                cin>>opcion3;

                switch(opcion3)
                {
                case 0:
                    cout<<"...saliendo del menu de la torre 2"<<endl;
                    repertir3 = false;
                    break;
                case 1:
                    int valor_tope_torre1;
                    cout<<"Cual fue el ultimo valor agregado ala torre 2"<<endl;
                    cin>>valor_tope_torre1;
                    objeto1.sacar_dato2(pila2);
                    objeto1.imprimir_torre2(pila2);

                    cout<<"\nA que torre agrego el valor : "<<endl;
                    int quepila;
                    cin>>quepila;
                    if(quepila==2)
                    {
                        //regresa el valor
                        objeto1.pasar_dato_a_torre2(pila2,valor_tope_torre1);
                        objeto1.imprimir_torre2(pila2);
                    }
                    if(quepila==1)
                    {
                        objeto1.agregar_elementos_ala_pila(pila,valor_tope_torre1);
                        // objeto1.imprimir(pila);
                        objeto1.imprimir(pila);
                        // objeto1.imprimir_torre3(pila3);
                    }
                    else if(quepila==3)
                    {
                        //Pon el valor en la pila numero 3
                        objeto1.pasar_dato_a_torre3(pila3,valor_tope_torre1);
                        //objeto1.imprimir_torre3(pila3);
                    }
                    break;
                case 2:
                    objeto1.imprimir(pila);
                    objeto1.imprimir_torre2(pila2);
                    break;
                }
            }
            while(repertir3);
            break;
        case 5:
            //Menu de la torre 3
            cout<<"Menu de la torre 3"<<endl;
            int opcion2;
            bool repertir2 = true;
            do
            {
                cout << "\n1. Pasar discos ala torres" << endl;
                cout << "2. Mostrar las torres" << endl;
                cout << "0. SALIR" << endl;

                cout<<"Ingresa una opcion :"<<endl;
                cin>>opcion2;

                switch(opcion2)
                {
                case 0:
                    cout<<"...saliendo del menu de la torre 3"<<endl;
                    repertir2 = false;
                    break;
                case 1:
                    int valor_tope_torre1;
                    cout<<"Cual fue el ultimo valor agregado ala torre 3"<<endl;
                    cin>>valor_tope_torre1;
                    //Hacer el sacar dato en la pila 3
                    objeto1.sacar_dato3(pila3);
                    objeto1.imprimir_torre3(pila3);

                    cout<<"\nA que torre agrego el valor : "<<endl;
                    int quepila;
                    cin>>quepila;
                    if(quepila==3)
                    {
                        //regresa el valor
                        objeto1.pasar_dato_a_torre3(pila3,valor_tope_torre1);
                        objeto1.imprimir_torre3(pila3);
                    }
                    if(quepila==1)
                    {
                        objeto1.agregar_elementos_ala_pila(pila,valor_tope_torre1);
                        // objeto1.imprimir(pila);
                        objeto1.imprimir(pila);
                        // objeto1.imprimir_torre3(pila3);
                    }
                    else if(quepila==2)
                    {
                        //Pon el valor en la pila numero 3
                        objeto1.pasar_dato_a_torre2(pila2,valor_tope_torre1);
                        objeto1.imprimir_torre2(pila2);
                    }
                    break;
                case 2:
                    objeto1.imprimir_torre3(pila3);
                    break;
                }
            }
            while(repertir2);
            break;
        }
    }
    while(repetir);
    //Creacion del menu
    return 0;
}
