#include<iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 10)
        {
            if(arr[i+1] == 01)
            {
                ++count;
            }
        }
        else
        {
            if(arr[i+1] == 10)
            {
                ++count;
            }
        }
    }

    cout << count + 1 << '\n';
    delete[] arr;
}