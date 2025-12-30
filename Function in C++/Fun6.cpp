//factorial code.

#include <iostream>
using namespace std;
//Fuction 
int fact_n(int n)  {
          int factorial = 1;
          for(int i =1; i<=n; i++){
                    factorial *= i ;
          }
          return factorial;
}
int main(){
          cout<<fact_n(4)<<endl;
          cout<<fact_n(5)<<endl;
          return 0;
          }