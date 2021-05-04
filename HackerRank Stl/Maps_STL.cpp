#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> m;
    int q = 0;
    cin >> q;
    while (q--)
    {

        int x = 0, marks = 0;
        string name;
        cin >> x;

        if (x == 1)
        {
            cin>>name>>marks;
            m[name] += marks;
        }
        else if (x == 2)
        {
            cin>>name;
            m.erase(name);
        }
        else
        {
            cin>>name;
            auto it = m.find(name);
            if (it != m.end())
            {
                cout << m[name] << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}