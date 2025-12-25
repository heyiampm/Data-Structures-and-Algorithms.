// Break of the loop.

#include<iostream>
using namespace std;
int main(){
          int n = 20;
          int sum = 0;
          for(int i = 1; i <=n; i++){
                    sum+=i;
                    if (i == 5){
                              break;
                    }
                    cout<< i<<" ";
          }
          cout<< "Sum = "<< sum <<endl;
          return 0;
}         
