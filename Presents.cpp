#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //int *arr = new int[n];
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int res[n];
    for(int i = 0; i < n; i++)
    {
        int pos = arr[i] - 1;
        for(int j = 0; j < n; j++)
        {
            if(pos == j)
            {
                res[pos] = i + 1;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << res[i] << ' ';
}