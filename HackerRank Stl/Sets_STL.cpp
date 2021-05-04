#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    set<int> s;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int x, y;
        cin >> x >> y;
        switch (x)
        {
        case 1:
            s.insert(y);
            break;
        case 2:
            s.erase(y);
            break;
        case 3:
            cout << (s.find(y) == s.end() ? "No" : "Yes") << endl;
            break;
        }
    }
    return 0;
}