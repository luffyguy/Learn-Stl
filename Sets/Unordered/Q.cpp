/* given n strings and q quries in each query in each query you are given a string print yes if u have the string else print no. */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string x;
        cin >> x;
        if (s.find(x) == s.end())
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}