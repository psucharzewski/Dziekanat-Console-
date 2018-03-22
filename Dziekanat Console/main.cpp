#include <iostream>
#include <string>
#include "funkcje.h"


using namespace std;


int main()
{
    cout << "No to jedziem z projektem!" << endl;
    cout << "Podaj swoj login" << endl;
    Student a2,a1("pawel","dupa","dupa2",2,5,1236);
    cout << a1.first_name;
    cout << a2.first_name;

    return 0;
}
