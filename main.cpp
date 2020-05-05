#include <iostream>
#include <string.h>

using namespace std;

string encriptar(string cadena)
{
    int a = cadena.size(), n=0;
    string r;

    for(int i = 0; i < a; i++)
    {

         n = cadena[i] * 53;
         r = r + " " + to_string(n);

    }
    return r;
}

int main()
{
    string let;
    cout << "Ingrese el texto que desee encriptar" << endl;
    getline(cin, let);

    cout << endl << encriptar(let) << endl;
    return 0;
}
