#include<iostream>

int main()
{
// if the last digit of the number is non-zero, she decreases the number by one;
// if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
    int n, k;
    std::cin >> n >> k;
    while(k--)
    {
        int last_digit = n % 10;
        if(last_digit != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }
    std::cout << n;
    return 0;
}