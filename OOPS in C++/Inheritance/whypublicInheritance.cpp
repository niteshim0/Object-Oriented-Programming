#include<bits/stdc++.h>
using namespace std;
class Car{
  private:
    int gear;
  public:
    void incrementGear(){
      if(gear<5){
        gear++;
      }
    }
};
class SportsCar : public Car{
  //it also wants the functionality to increase the gear 
  //for making available public services of parent class in child class
  //public inheritance is needed
};
//whent to do private or protected inheritance?
class Array{
  private:
    int a[10];
  public:
    void insert(int idx,int value){
      a[idx] = value;
    }
};
class STACK : private Array{
  int top;
  public:
    STACK(){
      this->top = 0;
    }
    void push(int value){
      insert(top,value);
    }
};
int main(){
   SportsCar car;
   car.incrementGear();//for this public inheritance is needed

   STACK s1;
   s1.push(10);//all good
   s1.insert(3,9);//if inheritance is public//no error//violates the properties of stack that's why we need private inheritance so that some public services are not allowed for derived class objects for maintaining its own integrity.
   //if inheritance is private//error//right thing to do
}