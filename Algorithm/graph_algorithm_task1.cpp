#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1000];

void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false)
			dfs(y);
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}//input 

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(i);
			ans++;
		}
	}

	cout << ans;
	return 0;
}