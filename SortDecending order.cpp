#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    //Get the Array
    int arr[] = {1, 45, 63, 25, 7, 88, 54};

    //Compute the Size
    int n = sizeof(arr) / sizeof(arr[0]);
    

    //Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "";

    //Sort the array in desending order
    sort(arr, arr + n, greater<int>());

    //Print the sorted array
    cout << "\nDescending Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

   // Ask for a new Array
    int a[10];
    int m, temp;


    cout << "\n\nEnter array elements: ";
    cin >> m;
    for (int j = 0; j < m; j++) {
        cin >> a[j];
    }

    for (int j = 0; j < m; j++) {
        for(int k=1+j; k<m;k++){
            if (a[j] > a[k]) {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    cout << "Array list after sorting: ";
    for (int j = 0; j < m; j++) {
        cout << a[j] << " ";
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
