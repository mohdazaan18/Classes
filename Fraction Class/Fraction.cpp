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
  void addi(Fraction f2){
      int dd = deno*f2.deno;
      int x = dd/deno;
      int y = dd/f2.deno;

      num = x*num + y*f2.num;
      deno = dd;
      simplify();

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



};
