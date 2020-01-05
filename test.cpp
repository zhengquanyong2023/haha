#include <bits/stdc++.h>
#define N      10010
#define inf    1LL << 60
using namespace std;
int n, m, A, B;
int X[N] = {}, G[210] = {};
int read()
{
    int s = 0, w = 1; char c = getchar();

    while ((c < '0' || c > '9') && c != '-')
        c = getchar();
    if (c == '-')
        w = -1, c = getchar();
    while (c <= '9' && c >= '0')
        s = (s << 3) + (s << 1) + c - '0', c = getchar();
    return w * s;
}

int check(int mid)
{
    if (mid & 1)
    {
        return check(mid << 1);
    }
    else
    {
        return check(mid - 1) + check(mid << 1);
    }
}
int main()
{
    n = read(); m = read();
    int l = 1, r = n, mid;
    while (l + 1 < r)
    {
        mid = (l + r) >> 1;
        if (check(mid) > m)
            l = mid;
        else
            r = mid;
    }
    if (check(l) > m)
        printf("%d\n", l);
    else
        printf("%d\n", r);
    return 0;
}
