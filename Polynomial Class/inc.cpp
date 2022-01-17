#include <iostream>

using namespace std;

class Polynomial {
	int *degCoeff;
	int capacity;

public :

     Polynomial(){
         degCoeff = new int[10];
         capacity = 10;
         for(int i = 0;i<10;i++){
             degCoeff[i]  = 0;
         }
     }	// Default Constructor

	Polynomial(Polynomial const &p){
	    degCoeff = new int[p.capacity];
	    for(int i = 0;i<p.capacity;i++){
	        this->degCoeff[i] = p.degCoeff[i];
	    }
	    this->capacity = p.capacity;
	}// Copy constructor

	Polynomial operator=(Polynomial const &p){
	    degCoeff = new int[p.capacity];
	    for(int i = 0;i<p.capacity;i++){
	        this->degCoeff[i] = p.degCoeff[i];
	    }
	    this->capacity = p.capacity;
	}// Copy assignment operator

	void print(){
	    for(int  i = 0;i<capacity;i++){
	        if(degCoeff[i]!=0){
	            cout<<degCoeff[i]<<"x"<<i<<" ";
	        }

	    }
	  cout<<endl;

	}// print


	void setCoefficient(int degree,int coeff){
	    if(degree>=capacity){
	        int size = 2*capacity;
	        while(size<=degree){
	            size = 2*size;
	        }
	        int *newdeg = new int[size];
	        for(int i = 0;i<size;i++){
	            newdeg[i] = 0;
	        }
	        for(int i=0;i<capacity;i++){
	            newdeg[i] = degCoeff[i];
	        }
	        capacity = size;
	        delete [] degCoeff;
	        degCoeff = newdeg;
	    }
	    degCoeff[degree] = coeff;
	}// setCoefficient

	Polynomial operator+(Polynomial const &p){
	    Polynomial pnew;
	    int i =0,j=0;
	    while(i<this->capacity && j<p.capacity){
	        int deg = i;
	        int newc = this->degCoeff[i]+p.degCoeff[i];
	        pnew.setCoefficient(deg,newc);
	        i++;
	        j++;
	    }
	    while(i<capacity){
	        pnew.setCoefficient(i,degCoeff[i]);
	    }
	    while(j<p.capacity){
	        pnew.setCoefficient(j,p.degCoeff[j]);
	    }
	    return pnew;
	}// +

	Polynomial operator-(Polynomial const &p){
	    Polynomial pnew;
	    int i = 0,j=0;
	    while(i<this->capacity && j<p.capacity){
	        int deg = i;
	        int coeff = degCoeff[i] - p.degCoeff[i];
	        pnew.setCoefficient(deg,coeff);
	        i++;
	        j++;
	    }
	    while(i<capacity){
	       pnew.setCoefficient(i,degCoeff[i]);
	    }
	    while(j<p.capacity){
	        pnew.setCoefficient(j,degCoeff[j]);
	    }
	    return pnew;
	}// -

	int getCoeff(int deg){
	    if(deg>=capacity){
	        return 0;
	    }
	    return degCoeff[deg];
	}

	Polynomial operator*(Polynomial const &p){
	    Polynomial pnew;
	    for(int i = 0;i<this->capacity;i++){
	        for(int j =0;j<p.capacity;j++){
	            int deg = i+j;
	            int coeff = pnew.getCoeff(deg)+ (this->degCoeff[i]*p.degCoeff[j]);
	            pnew.setCoefficient(deg,coeff);
	        }
	    }

	    return pnew;




	}// *

};
