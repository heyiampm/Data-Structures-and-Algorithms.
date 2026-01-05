//📌 Check if a number is prime or not prime.

#include<iostream>
using namespace std;
int main (){
          int n = 7;
          bool isprime = true;
          for (int i = 2; i <= n-1; i++){        //2nd method (i *i <=n)
                    if(n % i == 0){
                              isprime = false;
                              break;
                    }
          }
          if(isprime == true){
                    cout<< "Prime";
                    
          }else{
                    cout<<"Non Prime";
          }
          return 0;
}