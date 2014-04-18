int c(int n, int k) {
    if (k == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return c(n-1, k-1) + c(n-1, k);
}
