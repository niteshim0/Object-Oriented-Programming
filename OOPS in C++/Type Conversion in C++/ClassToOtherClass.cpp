#include<bits/stdc++.h>
using namespace std;
class Product{
  private:
   int a,b;
  public:
  void setData(int a,int b){
    this->a = a;
    this->b = b;
  }
  void showData(){
    cout<<this->a<<" "<<this->b<<endl;
  }
  int getA(){
    return this->a;
  }
  int getB(){
    return this->b;
  }
};
class Item{
 private:
   int m,n;
  public:
  Item(){

  }
  Item(Product p){
    this->m = p.getA();
    this->n = p.getB();
  }
  void setData(int m,int n){
    this->m = m;
    this->n = n;
  }
  void showData(){
    cout<<this->m<<" "<<this->n<<endl;
  }
};
int main(){
  Item i1;
  Product p1;
  p1.setData(6,7);
  i1 = p1;
  i1.showData();
  
}