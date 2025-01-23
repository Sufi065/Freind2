#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void print(){
        cout<<real<<" + "<<imag<<" i "<<endl;
    }
    void setvalues(int x,int y){
        real=x;
        imag=y;
    }
    // friend complex operator *(int,complex);
  
   complex operator +(int x){
    complex t;
    t.real=real+x;
    t.imag=imag;
    return t;
}
 friend complex operator *(int x,complex p){
        complex t;
        t.real=p.real*x;
        t.real=p.imag*x;
        return t;
    }
};

int main(){
    complex c1,c2,c3,c4;
    c1.setvalues(2,3);
    c2.setvalues(3,4);
    c1.print();
    c2.print();
    // c3=operator +(c1,c2);
    // c3.print();
    c4=6*c1;
    c4.print();
    return 0;
}
