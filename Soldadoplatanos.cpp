#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    /*
    k -> precio del primer platano
    n -> dinero
    w -> plátanos
    /
    cin >> k >> n >> w;
    //¿cuánto va a pagar por los w plátanos?
    //pagar = 1k + 2k + 3k + ... + wk
    int pagar=0;
    for(int i=1; i<=w; i++){ //w=3
        //cout << i << "" << k << "=" << ik << endl;
        //pagar = pagar + ki;
        pagar += ki;
    //pagar = 0 + 2 = 2
    //pagar = 2 + 4 = 6
    //pagar = 6 + 6 = 12
    //pagar = 12 + 8 = 20
    //pagar = 20 + 10 = 30
    }
    //pagar = (1k)+(2k)+(3k)+...+(w*k)
    int pedir =pagar - n;
    if(pedir < 0){ //no tengo que pedir
        cout << "0";
    }else{ //tengo que pedir
        cout << pedir;
    }
    return 0;
}
