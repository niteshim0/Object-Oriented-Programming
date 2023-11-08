#include<bits/stdc++.h>
using namespace std;
void incrementByValue(int num) {
        num++;
    }
void incrementByReference(int &num) {
        num++;
    }

//Way to return multiple values using references
int main(){
    int value = 5;
    incrementByValue(value);
    cout<<value<<endl;
    incrementByReference(value);
    cout<<value<<endl;
}