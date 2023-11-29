#include<iostream>
using namespace std;
template<typename T> 
T findMax(T arg1,T arg2){//generic function to return max number b/w two numbers
  if(arg1>arg2){
    return arg1;
  }
  return arg2;
}
template<typename T1,typename T2> 
T1 findMax(T1 arg1,T2 arg2){//generice function to return max number b/w int and double
  if(arg1>arg2){
    return arg1;
  }
  return arg2;
}
int main(){
  int a = 5;
  int b = 7;
  cout<<findMax(a,b)<<endl;
  cout<<findMax(5.6,5.5)<<endl;
  cout<<findMax(5.6,5)<<endl;
}