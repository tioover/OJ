#include <stdio.h>
#define ll long long

ll c(ll n, ll k) {
    if (k == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return c(n-1, k-1) + c(n-1, k);
}

int main(int argc, const char *argv[])
{
    ll m, n;
    while (scanf("%lld%lld", &m, &n) != EOF)
        printf("%lld\n", c(m, n));
    return 0;
}
