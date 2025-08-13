// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 09

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the Elements of the array: ";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "The Array is: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    int *p = arr + 5;
    cout << "\nThe reversed array is: ";
    for(int i = 0; i < 5; i++)
        cout << p[-i-1] << " ";
}

/* Enter the Elements of the array: 435
34
76
4554
34
The Array is: 435 34 76 4554 34 
The reversed array is: 34 4554 76 34 435 */

