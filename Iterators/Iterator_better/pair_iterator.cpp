/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2},
                                {3, 4},
                                {4, 5}};

    for (pair<int, int> &value : v)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
} */

//by using auto
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2},
                                {3, 4},
                                {4, 5}};

    for (auto &value : v)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}