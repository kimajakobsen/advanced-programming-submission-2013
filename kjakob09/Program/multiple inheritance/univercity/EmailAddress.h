#ifndef EMAILADDRESS_H
#define EMAILADDRESS_H

template <class Base>
class EmailAddress: public Base
{
public:
    EmailAddress(std::string fn,std::string ln, std::string t, std::string e )
        :Base(fn,ln,t),_email(e){}
        //note that the base class must have a constructor that accept three strings.

    const void print() 
    {
        Base::print(); //note that the base class also must have a print method.
        //I a normal usecase one would restrict that base class to avoid programmer errors. 
        cout << " - " << _email;
    }
private:
    std::string _email;
};

#endif