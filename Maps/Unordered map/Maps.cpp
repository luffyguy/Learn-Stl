#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> m;
    m[1] = "abcd";
    m[3] = "ijkl";
    m[2] = "efgh";
    m[4] = "mnop";

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    
    return 0;
}
