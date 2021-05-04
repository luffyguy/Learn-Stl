#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> &s)
{
    cout << "Size : " << s.size() << endl;
    for (int value : s)
    {
        cout << value << endl;
    }
}

int main()
{

    set<int> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    printSet(s);
    auto it = s.find(3);
    if (it == s.end())
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << *(it) << endl;
    }

    return 0;
}