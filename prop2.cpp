#include <iostream>
#include <iomanip> // Para std::setw

using namespace std;

int main()
{
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;

    cout << "UBICACION" << setw(10) << "POB." << endl
         << "Lima" << setw(17) << pop1 << endl
         << "Atora" << setw(11) << pop2 << endl
         << "Sicuani" << setw(11) << pop3 << endl;

    return 0;
}