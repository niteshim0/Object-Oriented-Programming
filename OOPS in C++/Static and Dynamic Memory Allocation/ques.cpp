#include<bits/stdc++.h>
using namespace std;
int main(){
  while (true)
  {
     int i = 5;//stattic allocation//Doesn't lead to Memory Crashes since after every iteration local variable gets created and so that for whole while loop we only need memory size of (int) i.e 4 byte.
  }
  while(true){
    int *p = new int;//dynamic allocation
    //Since heap variables need to be deallocated manually it will lead to create many variables inside heap which may lead to problems of 
    /*Managing Limited Resources: Deallocating memory allows the program to efficiently manage limited system resources, especially in memory-constrained environments. Proper memory deallocation ensures that memory is available for other processes and that the program's memory usage remains optimal.*/

/*Avoiding Fragmentation: Continuous allocation of memory without deallocation can lead to memory fragmentation, where the available memory becomes divided into small, unusable segments. This fragmentation can reduce the efficiency of memory allocation and may lead to an overall decrease in the program's performance.*/
  }
  

}