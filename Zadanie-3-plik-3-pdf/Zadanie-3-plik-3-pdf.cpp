#include <iostream>

using namespace std;
float n, b;
float vv;
float vat;
int main()
{
    cout << "Witaj , podaj cene netto : ";
    cin >> n;
    cout << endl;
    vat = 0.10;
    vv = n * vat;
    b = n + vv; 
    cout << "Cena brutto to " << b << " PLN"<<" (w tym 10 % vat : " << vv << " PLN)" << endl;
    return (0);
}

