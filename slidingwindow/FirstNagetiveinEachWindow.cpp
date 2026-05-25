#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of Array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cout << "Enter the Size of Subarray : ";
    cin >> k;

    int prevN = -1;
    vector<int> ans; // size = n - k + 1
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            ans.push_back(arr[i]);
            prevN = i;
            break;
        }
    }

    if (prevN == -1)
        ans.push_back(0);
    int i = 1, j = k;
    while (j < n)
    {
        if (prevN >= i)
            ans.push_back(arr[prevN]);
        else
        {
            prevN = -1;
            for (int x = i; x <= j; x++)
            {
                if (arr[x] < 0)
                {
                    prevN = x;
                    break;
                }
            }
            if (prevN != -1)
                ans.push_back(arr[prevN]);
            else
                ans.push_back(0);
        }
        i++;
        j++;
    }

    for (int ele : ans)
        cout << ele << " ";
}