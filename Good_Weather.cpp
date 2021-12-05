#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int arr[7];
        int a = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                a++;
            }
        }
        if (a >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}