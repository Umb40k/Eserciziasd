#include <iostream>
#include "ricerca.h"

using namespace std;

int main()
{

    ricerca serch;
    cout << "Salve.....ricerca coppia giorni con quotazioni maggiori....." << endl;
    serch.inserimentovector();
    serch.print();
    serch.ricercaptr();

    return 0;
}
