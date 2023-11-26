#include<bits/stdc++.h>
using namespace std;

class A {
public:
  virtual void fun2(){
    cout << "This is a function2 of class A" << endl;
  }
  void fun() {
    cout << "This is a function of class A" << endl;
  }
};

class B : public A {
public:
  void fun2(){
    cout << "This is a function2 of class B" << endl;
  }
  void fun() {
    cout << "This is a function of class B" << endl;
  }
};

int main() {
  A *p, obj1;
  B obj2;
  p = &obj2;
  
  // It will call the function in class A even though the pointer contains the address of class type B;
  p->fun();
  p->fun2();//virtual function saving the day

  // It will call the function as one would expect in method overriding case.
  obj2.fun();
  obj2.fun2();//expected behaviour

  // **Why does this happen?**
  // 
  // - The answer lies in the concept of late binding and early binding.
  // - When we call through objects, we exactly know which class type its instance is, so does the compiler. It binds the object to the latest function that is available if the function is overridden.
  // - Whereas when we call through pointers, pointers contain addresses that are assigned at runtime. The object gets memory at runtime, so does its address.
  // - If we call through a pointer, functions are called according to the declaration type of the pointer, not the contents of the pointer. This results in early binding, which violates the principle of method overriding.
  // - The ideal behavior would be late binding, where the compiler should call functions according to their contents, not their type. This is where the concept of virtual functions comes in to save the day.
}
