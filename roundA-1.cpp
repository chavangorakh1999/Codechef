#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int max_sum)
{
    int count=0;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        if (max_sum >= i)
        {
            max_sum -=i;
            count++;
        }
    }
    return count;
}

int main()
{
    int t, i = 1;
    cin>>t;
    while (t--)
    {
        int n, max_sum=0;

        cin >> n >> max_sum;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int val = solve(v, max_sum);
        cout << "Case #" << i << ":" << val << endl;
        i++;
    }
    return 0;
}