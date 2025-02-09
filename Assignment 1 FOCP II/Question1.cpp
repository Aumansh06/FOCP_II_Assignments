// Number Manipulation and Prime numbers
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, k;
    // correct input prompt
    do
    {
        cout << "Enter Positive number : ";
        cin >> n;
    } while (n < 0);
    int fact[n];
    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            fact[i] = i;
        }
        else
        {
            fact[i] = 0;
        }
    }

    // Checking for NOT prime and providing factors
    if (count > 2)
    {
        cout << n << " is NOT a Prime number !" << endl;
        cout << "Its factors are : ";
        for (int i = 0; i <= n; i++)
        {
            if (fact[i] != 0)
            {
                cout << fact[i] << " ";
            }
            else
            {
                cout << "";
            }
        }
    }

    // checking for prime and passing next prime number
    else
    {
        cout << n << " is a Prime number !" << endl;
        k = n + 1;
        while (1)
        {
            int m = 1;
            for (int i = 2; i < k; i++)
            {
                if (k % i == 0)
                {
                    m = 0;
                }
            }

            if (m == 1)
            {
                cout << "Next Prime Number : " << k << endl;
                break;
            }
            else
                k++;
        }
    }
}