#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m;
    m[1] = "abcd";
    m[3] = "ijkl";
    m[2] = "efgh";
    m.insert({{4, "mnop"}, {5, "qrst"}});

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
