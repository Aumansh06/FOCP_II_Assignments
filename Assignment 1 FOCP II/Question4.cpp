// spiral pattern

#include <iostream>
using namespace std;

void spiralPattern(int n)
{
    int m[n][n];
    int num = 1;

    for (int layer = 0; layer < (n + 1) / 2; layer++)
    {
        for (int i = layer; i < n - layer; i++)
        {
            m[layer][i] = num++;
        }
        for (int i = layer + 1; i < n - layer; i++)
        {
            m[i][n - layer - 1] = num++;
        }
        for (int i = n - layer - 2; i >= layer; i--)
        {
            m[n - layer - 1][i] = num++;
        }
        for (int i = n - layer - 2; i > layer; i--)
        {
            m[i][layer] = num++;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[k][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n for spiral pattern: ";
    cin >> n;
    spiralPattern(n);
    return 0;
}