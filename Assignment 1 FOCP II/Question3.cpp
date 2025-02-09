// String Manipulation
#include <iostream>
using namespace std;
int main()
{
    string a, b;
    int c = 0;
    char d;
    cout << "Enter String : ";
    getline(cin, a);
    int n = a.length(); // strlen

    // reversing
    for (int i = n - 1; i >= 0; i--)
    {
        b = b + a[i];
    }
    cout << b << endl; // print backwards
    // check for palindrome
    if (a == b)
    {
        cout << "Palindrome!" << endl;
    }
    else
    {
        cout << "Not a Palindrome!" << endl;
    }

    // check for repetition of characters
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        }
        cout << "Frequency " << a[i] << " : " << c << endl;
        c = 0;
    }

    cout << "Enter character to replace vowel in string : ";
    cin >> d;

    // replacing all vowels
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            a.replace(i, 1, 1, d);
        }
    }
    cout << a << endl;
}