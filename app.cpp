#include <iostream>

using namespace std;

bool IsPrime (int);

int main()
{
    int n = 10000000;
    //cin >> n;

    if (n==1)
    {
        cout << 2 ;
        return 0 ;
    }

    int i = 1;
    while (n-1)
    {
        i += 2;
        if (IsPrime(i))
            n -- ;
    }
    cout << i ;
}

bool IsPrime (int n)
{
    for (int i = 3 ; i*i <= n ; i+=2)
        if (n%i == 0)
            return false ;
    return true ;
}
