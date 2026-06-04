#include<iostream>
#include<vector>
using namespace std;

void changeA (int* B){  // pass by reference using pointer.
          *B = 20;
}
int main (){
          int a = 10;
          changeA(&a);

          cout << "Inside Main Function : " << a <<endl;
          return 0;


}