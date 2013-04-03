#include <iostream>
#include "Teacher.h"
#include "EmailAndPhone.h"

using namespace std;
 
 
int main()
{  
 
  EmailAndPhone<Teacher> ivan("Ivan","Aaen","Lektor","ivan@cs.aau.dk","9940 8852");
  ivan.print(); 


  cin.get();
  return 0;
}