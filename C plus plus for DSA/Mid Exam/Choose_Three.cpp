#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;

        int ar[n];
        int sum;
        cin >> sum;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int flag = 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((ar[i] + ar[j] + ar[k]) == sum)
                    {
                        flag = 1;
                        continue;
                    }
                }
               
            }
            
        }

        if (flag == 1)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
