# Friend Function

A friend function is a function that is not a member of a class but is granted access to its private and protected members. This allows the function to operate on the private or protected data of the class as if it were a member function.

- It is not a member function of a class to which it is a friend.

- To declare a friend function, you use the `friend` keyword in the class declaration.

- It must be defined outside the class to which it is a friend.

- A friend function can access any member of the class to which it is a friend.

- It cannot access members of the class directly,one should pass instances of class to access the member variables for that class for which instance is provided.

- It has no caller object as it is not associated with any instance of the class.

- It shouldn't be defined with a membership label since it is not a member function of a class.

- It can be friend to more than one class.

- Member function of one class can become friend to another class.

- It can be declared in any section of class be it private,public or protected since it is not member function their will be no any change in overall functionality of friend function.

- It's important to note that using friend functions should be done judiciously, as they can break encapsulation by allowing external functions access to the private members of a class. In general, it's preferable to use member functions to manipulate the internal state of a class, and friend functions are often used in specific cases where access to private members is necessary for some reason.Try to think of some cases , have you found any ?


## Specific Cases where Friend Function can be Used ?

1. The ability of a friend function to be associated with more than one class is a feature that can be useful in certain scenarios. If you have multiple classes that need to share access to each other's private or protected members, using a friend function is a way to achieve this without exposing the details to the public. e.g,

```cpp
#include<bits/stdc++.h>
using namespace std;
class B;//Forward decalration so that function in class A knows what is the type of B;
class A{
  private:
    int a;
  public:
    void setData(int a){
      this->a = a;
    }
  friend void sum(A,B);
};
class B{
  private:
    int b;
  public:
    void setData(int b){
      this->b = b;
    }
  friend void sum(A,B);
};
void sum(A obj1,B obj2){
  cout<<"Sum of private members of Class A and Class B,yes that's can be done using friend function  "<<obj1.a+obj2.b<<endl;
}
int main(){
   A obj1;
   B obj2;
   obj1.setData(4);
   obj2.setData(5);
   sum(obj1,obj2);
}
```
2.  Overloading Operators::Friend functions are often used in operator overloading, where operators like +, -, <<, and >> are defined as non-member functions. These functions may need access to the private members of a class for proper implementation.e.g,

```cpp
#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
   double a,b;
  public:
   void setData(double a,double b){
    this->a = a;
    this->b = b;
   }
   void showData(){
    cout<<a<<" "<<b<<endl;
   }
   friend Complex operator+(Complex,Complex);
   friend Complex operator-(Complex);
};
Complex operator+(Complex A,Complex B){//Overloading of Binary Operator
   Complex temp;
   temp.a = A.a + B.a;
   temp.b = A.b + B.b;
   return temp;
}
Complex operator-(Complex C){//Overloading of Unary Operator
   Complex temp;
   temp.a = -C.a;
   temp.b = -C.b;
   return temp;
}
int main(){
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(4,7);
    c3 = c1 + c2; // operator + calls with two arguments c1,c2 i.e operator+(c1,c2); unlike operator overloading case where c1 is caller argument and c2 is argument;
    c3.showData();
    c4=-c3;
    c4.showData();
}
```





