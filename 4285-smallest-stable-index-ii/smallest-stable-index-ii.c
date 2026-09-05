int firstStableIndex(int* n, int ns, int k) {
    if (ns == 1) return 0;
    int *minRight = malloc(ns * sizeof(int));
    minRight[ns - 1] = n[ns - 1];
    for (int i = ns - 2; i >= 0; i--) {
        minRight[i] = n[i] < minRight[i + 1] ? n[i] : minRight[i + 1];
    }
    int g = INT_MIN;
    for (int i = 0; i < ns; i++) {
        if (n[i] > g) g = n[i];
        int s = minRight[i];
        int b = g - s;
        if (b <= k) {
            free(minRight);
            return i;
        }
    }

    free(minRight);
    return -1;
}