//Find character lower case or upper case
#include<iostream>
using namespace std;
int main(){
          char ch;
          cout<<"Enter character : ";
          cin>> ch;
          if(ch >= 'a' && ch <= 'z'){
                    cout<<"lower case\n";
          }else{
                    cout<<"upper case\n";
          }
          return 0;
}