#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "hashing of strings" << endl;
    string s = "qwertyuiopasdfghjklzxcvbnm";
    
    
    int hashh[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a'] += 1;
    }
    for (int i = 0; i <= 25; i++)
    {
        cout << char(i + 'a') << " : " << hashh[i] << endl;
    }
    cout << endl;

    map<char, int> mpc;
    for (int i = 0; i < s.size(); i++)
    {
        mpc[s[i]]++;
    }

    cout << "using map for character strings" << endl;
    ;
    for (auto it : mpc)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    cout << "hashing of numbers in an array" << endl;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int hash_int[7] = {0};

    for (int i = 0; i < 6; i++)
    {
        hash_int[arr[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << i << " : " << hash_int[i] << endl;
    }

    cout << endl;

    map<int, int> mpp;
    for (int i = 0; i < 6; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "using map for higher values than 10^7" << endl;
    ;
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
