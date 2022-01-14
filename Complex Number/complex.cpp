#include <iostream>
using namespace std;
class complex{
    private :
     int real;
     int imaginary;

    public:
    complex(int r,int i){
        this->real = r;
        this->imaginary = i;
    }

    void sumc(complex &c1){
        int r1 = real + c1.real;
        int i1 = imaginary + c1.imaginary;

        this->real = r1;
        this->imaginary = i1;

    }

    void multiply(complex &c1){
        int rep = real*c1.real - imaginary*c1.imaginary;
        int imp = imaginary*c1.real + real*c1.imaginary;
        real = rep;
        imaginary = imp;
    }

    void display(){
       if(imaginary<0){
        cout<<real<<"-i"<<-1*imaginary<<endl;
       }
       else {
           cout<<real<<"+i"<<imaginary<<endl;
       }

    }


};
