#include <iostream>
#include "zlomek.h"

int main() {
    using std::cout, std::endl;

    zlomek z1;
    zlomek z2(2, 3);
    zlomek z3(z2);
    zlomek z4(-1, 2);

    cout << "Objekt vytvoreny vychozim konstruktorem: " << z1 << endl;
    cout << "Objekt vytvoreny konstruktorem s parametry: " << z2 << endl;
    cout << "Objekt vytvoreny kopirovacim konstruktorem: " << z3 << endl;
    cout << "Objekt vytvoreny konstruktorem se zapornym znamenkem: " << z4 << endl;
    return 0;
}
