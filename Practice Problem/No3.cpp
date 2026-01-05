//📌 sum of all odd number 1 to N

#include<iostream>
using namespace std;
int main(){
          int n = 10 ;
          int odd_sum = 0;
          for(int i =1; i<=n; i++){
                    if(i % 2!= 0){
                              odd_sum += i;
                    }
          } cout<<"Total odd sum is : "<< odd_sum;
}