//vector of pairs

/* #include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{

    vector<pair<int, int>> v;
    printVec(v);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVec(v);

    return 0;
} */

//vector of arrays

#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v[n]; //n number of seeprate vectors will be formed

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m; //size of eah vector
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printVec(v[i]); //each vector goes in seperately to get printed
    }

    return 0;
}