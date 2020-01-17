#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX_N = 1000;

int n, m, k[MAX_N];

int kk[MAX_N * MAX_N];

bool binary_search(int x) {
    int l = 0, r = n * n;

    while (r - l >= 1) {
        int i = (l + r) / 2;
        if (kk[i] == x) return true;
        else if (kk[i] < x) l = i + 1;
        else r = i;
    }

    return false;
}

void solve() {
    for (int c = 0; c < n; c++) {
        for (int d = 0; d < n; d++) {
            kk[c * n + d] = k[c] + k[d];
        }
    }

    sort(kk, kk + n * n);

    bool f = false;

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            for (int c = 0; c < n; c++) {
                if (binary_search(m - k[a] - k[b])) {
                    f = true;
                }
            }
        }
    }

    if (f) puts("Yes");
    else puts("No");
}

int main() {
    n = 3;
    m = 10;
    k[0] = 1;
    k[1] = 3;
    k[2] = 5;

    solve();

    return 0;
}
