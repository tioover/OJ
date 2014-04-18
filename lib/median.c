int median(int n) {
    int i=0, tmp;
    while (n != 0) {
        tmp = n % 10;
        n = (n - tmp) / 10;
        i++;
    }
    return i;
}
