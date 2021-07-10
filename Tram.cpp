#include<iostream>
#include<vector>
int MaxRecur(int arr[], int n)
{
    if(n == 1) return arr[0];
    return std::max(arr[n-1], MaxRecur(arr, n - 1));
}
int main()
{
    int a, b, n;
    std::cin >> n;
    int capacity = 0;
    // std::vector<int> findMax;
    int arr[n];
    int size = n;
    while(n--)
    {
        std::cin >> a >> b;
        capacity -= a;
        capacity += b;
        // findMax.push_back(capacity);
        arr[n] = capacity;
        //if(b == capacity) break;
    }
    // for(int i=0;i<size;i++) std::cout << arr[i] << ' ';
    std::cout << MaxRecur(arr, size);
    // std::cout << MaxRecur(findMax, findMax.size());

}