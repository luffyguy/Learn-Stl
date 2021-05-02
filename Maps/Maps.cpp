#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m)
{

    cout << "Size : " << m.size() << endl;
    for (auto &pr : m) //o(log(n))
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{

    map<int, string> m;
    m[1] = "abcd"; //0(log(n))
    m[3] = "ijkl";
    m[2] = "efgh";
    m.insert({{4, "mnop"}, {5, "qrst"}});

    auto it = m.find(6);
    if (it != m.end())
    {
        m.erase(3); //0(log(n))
    }
    m.clear();//clears the map
    printMap(m);

    return 0;
}
