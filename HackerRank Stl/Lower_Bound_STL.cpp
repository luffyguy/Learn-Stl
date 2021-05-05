#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), x);
        if (v[low - v.begin()] == x)
            cout << "Yes " << (low - v.begin() + 1) << endl;
        else
            cout << "No " << (low - v.begin() + 1) << endl;
    }

    return 0;
}
