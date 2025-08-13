// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 09

#include <iostream>
using namespace std;

int main(){
    int arr[8];
    cout<<"Enter the Elements of the array: ";
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is: ";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    int*arr1[8];
    arr1[8]=&arr[8];
    cout<<"The reversed array is: ";
    for(int i=0;i<8;i++)
    {
        cout<<*(arr1[8]-i-1)<<" ";
    }

}
