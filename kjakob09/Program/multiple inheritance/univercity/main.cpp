#include <iostream>
#include "Teacher.h"
#include "EmailAddress.h"
#include "PhoneNumber.h"

using namespace std;
 
 
int main()
{  
    Teacher simonas("Simonas","Saltenis","Lector");
    simonas.print();

    EmailAddress<Teacher> alexandre("Alexandre","David","Lector","adavid@cs.aau.dk");
    alexandre.print();

    PhoneNumber<Teacher> jesper("Jesper","Kjeldskov","Lector","9940 8921");
    jesper.print();

    cin.get();
    return 0;
}