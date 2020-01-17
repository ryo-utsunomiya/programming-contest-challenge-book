#include <cstdio>

const int MAX_N = 50;

int n, a[MAX_N];

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

void solve() {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int len = a[i] + a[j] + a[k];
                int ma = max(a[i], max(a[j], a[k]));
                int rest = len - ma;

                if (ma < rest) {
                    ans = max(ans, len);
                }
            }
        }
    }

    printf("%d\n", ans);
}

int main() {
    n = 5;
    a[0] = 2;
    a[1] = 3;
    a[2] = 4;
    a[3] = 5;
    a[4] = 10;
    solve();
    return 0;
}
