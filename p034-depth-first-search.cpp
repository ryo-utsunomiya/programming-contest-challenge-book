#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX_N = 20;

int n, a[MAX_N], k;

bool dfs(int i, int sum) {
    if (i == n) return sum == k;
    if (dfs(i + 1, sum)) return true;
    return dfs(i + 1, sum + a[i]);
}

void solve() {
    if (dfs(0, 0)) puts("Yes");
    else puts("No");
}

int main() {
    n = 4;
    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    a[3] = 7;
    k = 13;

    solve();

    return 0;
}
