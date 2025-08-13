// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 09

#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String Value: ";
    cin>>str;
    string*str1;
    str1=&str;
    cout<<*str1;
}
