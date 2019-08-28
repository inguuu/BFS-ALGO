#include <iostream>
#include <cstring>

using namespace std;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int a[50][50];
bool visit[50][50];

void dfs(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (a[nx][ny] == 1 && visit[nx][ny] == false) {
			dfs(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;

	while (t--) {
		memset(a, 0, sizeof(a));
		memset(visit, false, sizeof(visit));
		int ans = 0;

		int m, n, k;
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == 1 && visit[i][j] == false) {
					dfs(i, j);
					ans++;
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}