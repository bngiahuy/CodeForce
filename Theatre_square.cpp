#include<iostream>

int main(){
    int n,m,a;
    std::cin >> n >> m >> a;
    long long int i,j;
    i = n / a;
    j = m / a;
    if(i*a != n) i++;
    if(j*a != m) j++;
    std::cout << i*j << '\n';
}