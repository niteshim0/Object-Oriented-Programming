#include<bits/stdc++.h>
using namespace std;
class Dummy{
  private:
  int a,b;
  int *p;
  public:
  Dummy(){
    p = new int;
  }
  void setData(int x,int y,int z){
    a = x;
    b = y;
    *p = z;
  }
  void showData(){
    cout<<a<<" "<<b<<endl;
  }
  Dummy(Dummy &d){//Shallow Copy
    a = d.a;
    b = d.b;
  }
  Dummy(Dummy &d){//Deep Copy
    a = d.a;
    b = d.b;
    *p = *(d.p);
  }
  ~Dummy(){
    delete p;//best practice so that no any dangling pointer gets created
  }
  // Assignment operator (deep copy)
  Dummy &operator=(const Dummy &source) {
        if (this == &source) return *this;
        *p = *source.p;
        return *this;
    }
  int* memoryLeakExample() {
    int* ptr = new int; // Allocate memory
    return ptr;         // Forget to deallocate memory
}
int* danglingPointerExample() {
    int* ptr = new int;  // Allocate memory
    delete ptr;          // Deallocate memory
    return ptr;          // ptr is now a dangling pointer
}
};
int main(){
  Dummy d1;
  d1.setData(3,4,5);
  Dummy d2 = d1;//Copy Constructor way
  d2.showData();
  Dummy d3;
  d3=d1;//Copy Assignment Operator
  d3.showData();
}