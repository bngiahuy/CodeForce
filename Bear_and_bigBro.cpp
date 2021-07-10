#include<iostream>

int main()
{
    // a <= b
    // after 1 year, b *= 2, a *= 3
    // count when a = b?
    int a, b;
    int year = 0;
    std::cin >> a >> b;
    while(a <= b)
    {
        year++;
        a *= 3;
        b *= 2;
    }
    std::cout << year << '\n';
    return 0;
}