#include <bits/stdc++.h>
using namespace std;
int n, m;
int gcd(int x, int y)
{
    return y == 0 ? x : gcd(y, x % y);
}
int main()
{
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n, m));
    return 0;
}
