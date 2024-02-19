//Normal algoritham

/*



*/



//apply O(logN) with binary search
 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0;
    int s_idx = i;
    int e_idx = n;
    bool flag = false;
    while (s_idx <= e_idx)
    {
        int mid = (s_idx + e_idx) / 2;
        if (v[i] == v[mid])
        {
            flag = true;
            i++;
            break;
        }
        else if (v[i] < v[mid])
            e_idx = mid - 1;
        else
            s_idx = mid + 1;
        if (s_idx > e_idx)
            i++;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}