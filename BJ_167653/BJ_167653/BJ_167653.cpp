

#include <iostream>
using namespace std;

int main()
{
    double x=0.0;
    double y=0.0;
    char oper;
    double wynik = 0.0;
    
    cout << "Podaj ZNAK dzialania jakie chcesz wykonac " << endl << "1.+" << endl << "2.-" << endl << "3./" << endl << "4.*" << endl;
    cin >> oper;
    cout << "Podaj dwie dowolne liczby." << endl;
    cin >> x >> y;
    switch (oper)
    {
    
    case'+': {
        wynik= x + y;
        cout << "Wynik wynosi " << wynik << endl;
        break;
    }
    
    
    case'/': {
        if ( y == 0) {
            cout << "Nie dzielimy przez 0." << endl;
            break;
        }
        else
        {
            wynik = x / y;
            cout << "Wynik wynosi " << wynik;
            break;
        }
        
    }
    
    case'*': {
        wynik= x * y;
        cout << "Wynik wynosi " << wynik;
        break;
    }
    
    case'-': {
        wynik= x - y;
        cout << "Wynik wynosi " << wynik;
        break;
    }
    }
}




    