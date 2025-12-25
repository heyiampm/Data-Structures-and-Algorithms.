//Find character lower case or upper case using ascii .

#include<iostream>
using namespace std;
int main(){
          char ch;
          cout<<"Enter character : ";
          cin>> ch;
          if(ch >= 65 && ch <= 90){
                    cout<<"Upper case\n";
          }else{
                    cout<<"lower case\n";
          }
          return 0;
}