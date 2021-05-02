#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    for (int value : v)
    {
        cout << value << endl;//values in value are copy of actual values
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    for (int value : v)
    {
        cout << &value << endl;//as refrence has been used these are the actual values
    }
    cout << endl;

    return 0;
}