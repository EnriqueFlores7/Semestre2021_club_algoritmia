#include <iostream>

using namespace std;

int main()
{
    int sandia_en_dos,multiplo;
    cin>>sandia_en_dos;
    multiplo=sandia_en_dos%2;
    if (multiplo==0)
    {
        cout<<"SI";
    }else
    {
        cout<<"NO";
    }
    return 0;
}
