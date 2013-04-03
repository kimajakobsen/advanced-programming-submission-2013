#ifndef EMAILADDRESS_H
#define EMAILADDRESS_H

template <class Base>
class EmailAddress: public Base
{
public:
    EmailAddress(std::string fn,std::string ln, std::string t, std::string e )
        :Base(fn,ln,t),_email(e){}

    const void print() 
    {   
        Base::print();
        cout << " " << _email;
    }

    const void emailPrint() 
    {     
        cout << " " << _email;
    }
private:
    std::string _email;
};

#endif