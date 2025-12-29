// min mum value print

#include <iostream>
using namespace std;
//Fuction 
int minofvalue(int a, int b){ //parameter
          if(a<=b){
                    return a;
          } else {
                    return b;
}
}
          int main(){
                    cout<<"min = "<<minofvalue(34,5)<<endl;//arguments
                    return 0;
          }