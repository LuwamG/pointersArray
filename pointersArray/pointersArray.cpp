#include <iostream>
using namespace std;

int main() {
    int input;
    int count = 0;

    cout << "Enter numbers (enter -1 to stop):" << endl;
 
    while (true) {
        cin >> input;

        
        if (input == -1) {
            break;
        }
     count++; 
    }

    int* arr = new int[count];
    cout << "Enter the numbers again:" << endl;
    int index = 0;
    while (index < count) {
        cin >> input;
        if (input == -1) {
            break;
        }

        arr[index++] = input; 
    }

    // calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }
    cout << "The sum of the entered elements is: " << sum << endl;

   
    delete[] arr;

    return 0;
}
