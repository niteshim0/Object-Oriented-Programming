//Rules for binding
#include<bits/stdc++.h>
using namespace std;
void f1(char x){
  cout<<"Exact Match"<<endl;
}
void f1(int x){
  cout<<"Type Promotion"<<endl;
}
void f1(float x){
  cout<<"Type Conversion"<<endl;
}
void f1(double x){
  cout<<"Leads to ambiguity compiler can't decide b/w two target candidates"<<endl;
}
int main(){
   char k = '2';
   f1(k);
}