#ifndef PHONENUMBER_H
#define PHONENUMBER_H

template <class Base>
class PhoneNumber: public Base
{
public:
    PhoneNumber(std::string fn,std::string ln, std::string t, std::string pn )
        :Base(fn,ln,t),_phone(pn){}
    
    const void print() 
    {
        Base::print();
        cout << " " << _phone;
    }
private:
    std::string _phone;
};

#endif