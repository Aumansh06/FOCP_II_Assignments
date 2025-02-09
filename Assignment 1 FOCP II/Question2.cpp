#include <iostream>
using namespace std;
int main()
{
    int n, max, min, temp;
    cout << "Enter number of elements you want in array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements of array : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Reversed array : ";
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    for (int k = 0; k < n - 1; k++)
    {
        for (int m = 0; m < n - k - 1; m++)
        {
            if (arr[m] > arr[m + 1])
            {
                temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
            }
        }
    }

    cout << "The second largest number in the array is " << arr[1] << endl;
    cout << "The second smallest number in the array is " << arr[n - 2] << endl;

    return 0;
}