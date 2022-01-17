#include <iostream>
using namespace std;

class Dynamic{
    private :
     int *data;
     int nextIndex;
     int capacity;

    public:

    Dynamic(){
        data = new int[5];
        nextIndex = 0;
        capacity=5;
    }

    Dynamic(Dynamic const &d){
        this->data = new int[d.capacity];
        for(int i = 0;i<d.capacity;i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void operator=(Dynamic const &d){
        this->data = new int[d.capacity];
        for(int i = 0;i<d.capacity;i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;

    }

    void add(int element){
        if(nextIndex == capacity){
            int *newD = new int[2*capacity];
            for(int i = 0;i<capacity;i++){
                newD[i] = data[i];
            }
            delete [] data;
            data = newD;
            capacity = 2*capacity;

        }

        this->data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i) const{
        if(i<nextIndex){
            return data[i];
        }
        else {
            return -1;

        }
    }

    void add(int i,int element) {
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i == nextIndex){
            add(element);
        }
        else {
            return;
        }
    }
    void print() const{
        for(int i = 0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }


};
