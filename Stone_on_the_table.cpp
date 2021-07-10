#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char* arr = new char[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int R = 0, G = 0, B = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            if(arr[i] == 'R') ++R;
            else if(arr[i] == 'G') ++G;
            else ++B;
        }
    }
    delete[] arr;
    cout << R+G+B;
}