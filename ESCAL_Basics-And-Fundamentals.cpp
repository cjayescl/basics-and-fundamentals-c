#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 10;

int main() {
    char tryAgain = 'y';

    while (tryAgain == 'y' || tryAgain == 'Y') {
        int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[2 * MAX_SIZE], size1, size2;

      
        cout << "Enter size for array 1 (up to " << MAX_SIZE << "): ";
        cin >> size1;
        if (size1 < 1 || size1 > MAX_SIZE) {
            cout << "Invalid size for array 1! Size must be between 1 and " << MAX_SIZE << ".\n";
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
            continue; 
        }

        cout << "Enter " << size1 << " elements for array 1: ";
        for (int i = 0; i < size1; i++) cin >> arr1[i];

     
        cout << "Enter size for array 2 (up to " << MAX_SIZE << "): ";
        cin >> size2;
        if (size2 < 1 || size2 > MAX_SIZE) {
            cout << "Invalid size for array 2! Size must be between 1 and " << MAX_SIZE << ".\n";
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
            continue;
        }

        cout << "Enter " << size2 << " elements for array 2: ";
        for (int i = 0; i < size2; i++) cin >> arr2[i];

   
        merge(arr1, arr1 + size1, arr2, arr2 + size2, mergedArr);
        sort(mergedArr, mergedArr + size1 + size2, greater<int>());

      

        
        cout << "Merged array in descending order: ";
        for (int i = 0; i < size1 + size2; i++) cout << mergedArr[i] << " ";
        cout << endl;

        cout << "Do you want to try again? (y/n): ";
        cin >> tryAgain;
    }

    cout << "Program ended. Thank you!\n";
    return 0;
}