#ifndef EMAILANDPHONE_H
#define EMAILANDPHONE_H

#include "EmailAddress.h"
#include "PhoneNumber.h"

template <class Base>
class EmailAndPhone: public EmailAddress<Base>, public PhoneNumber<Base> //extends the mixins
{
public:
    EmailAndPhone(std::string fn,std::string ln, std::string t, std::string e, std::string pn)
        :EmailAddress(fn,ln,t,e),PhoneNumber(fn,ln,t,pn){}
        //The constructor calls the constructors of the other two mixins.
    
    const void print() 
    {
        Base::print();
        EmailAddress::emailPrint();
        PhoneNumber::phonePrint();
    }
};
#endif