#include <cstdio>

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int min(int a, int b) {
    if (a < b) return a;
    else return b;
}

const int MAX_N = 100000;

int L, n, x[MAX_N];

void solve() {
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i]));
    }

    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }

    printf("%d %d\n", minT, maxT);
}

int main() {
    L = 10;
    n = 3;
    x[0] = 2;
    x[1] = 6;
    x[2] = 7;

    solve();

    return 0;
}
