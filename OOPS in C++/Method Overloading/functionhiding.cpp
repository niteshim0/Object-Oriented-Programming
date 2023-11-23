#include<bits/stdc++.h>
using namespace std;
class A{
   public:
   void f1(int x){
    cout<<"A::f1()"<<endl;
   }
};
class B : public A{
    public:
    void f1(double x){
      cout<<"B::f1()"<<endl;
    }
    using A::f1;//it also makes available function of base class even though function signatures are same.
};


int main(){
  B obj;
  obj.f1(5);
}

/*Function hiding primarily occurs in the context of class inheritance when a derived class declares a function that is already present in its base class. This process is related to the concept of overriding. However, in C++, if a function is declared in a derived class with the same name as a function in the base class, the derived class function can "hide" the base class function, even if the signatures are different.*/