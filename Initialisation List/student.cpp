#include <iostream>
#include<string.h>
using namespace std;
class Student {

    public :
   int age;
   const int rollno;
   int &pass;

   Student(int a,int r) : age(a), rollno(r) , pass(this->age){

   }

   void display(){
       cout<<age<<" "<<rollno<<" "<<pass<<endl;
   }
};
