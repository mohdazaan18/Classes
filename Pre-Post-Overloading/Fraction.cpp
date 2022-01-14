#include <iostream>
using namespace std;
class Fraction{
  private :
  int num;
  int deno;

  public :
  Fraction(int n,int d){
      this->num = n;
      this->deno = d;
  }

  void simplify(){
      int gcd = 1;
      int m = min(num,deno);
      for(int i = 1;i<=m ;i++){
          if(num%i == 0 && deno%i  ==0){
              gcd = i;
          }
      }
      num = num/gcd;
      deno = deno/gcd;
  }
  Fraction addi(Fraction const &f2){
      int dd = deno*f2.deno;
      int x = dd/deno;
      int y = dd/f2.deno;

     int nn = x*num + y*f2.num;
      deno = dd;

      Fraction fnew(nn,dd);

      fnew.simplify();
      return fnew;

  }

  Fraction operator+(Fraction const &f2) const{
       int dd = deno*f2.deno;
      int x = dd/deno;
      int y = dd/f2.deno;

      int nn = x*num + y*f2.num;


      Fraction fnew(nn,dd);

      fnew.simplify();
      return fnew;
  }

  Fraction operator*(Fraction const &f2){
       int nn = num*f2.num;
      int dd = deno*f2.deno;
      Fraction fNew(nn,dd);
      fNew.simplify();

      return fNew;
  }

  bool operator==(Fraction const &f2){
      return (this->num == f2.num && this->deno == f2.deno);
  }
  void multiply(Fraction f2){
      num = num*f2.num;
      deno = deno*f2.deno;
      simplify();

  }
  void subs(Fraction f2){
      int dd = deno*f2.deno;
      int x = dd/deno;
      int y = dd/f2.deno;

      num = x*num - y*f2.num;
      deno = dd;
      simplify();
  }
  void divi(Fraction f2){
      num = num*f2.deno;
      deno = deno*f2.num;
      simplify();
  }
  void display(){
      cout<<num<<"/"<<deno<<endl;
  }


  Fraction& operator++(){
     num = num+deno;
     simplify();

     return *this;
  }

  Fraction operator++(int){
      Fraction fnew(num,deno);
      num = num + deno;
      simplify();
      fnew.simplify();
      return fnew;
  }

  Fraction& operator+=(Fraction const &f2){
      int lcm = deno * f2.deno;
      int x = lcm/deno;
      int y = lcm/f2.deno;
      num = num*x + f2.num*y;
      deno = lcm;
      simplify();

      return *this;
  }

};
