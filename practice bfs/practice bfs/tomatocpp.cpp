#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main(){

	int n, m;
	queue < pair<int, int >> q;
     
	///int map[1001][1001];
	//int visited[1001][1001] = { 0, };
	//int count[1001][1001] = { 0, };
	int dr[] = {1,0,-1,0};
	int dc[] = {0,1,0,-1};

	cout << "dasd";
	//cin >> n;
	//cin >> m;

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				q.push(make_pair(i, j));
				visited[i][j] = 1;
			}
		}
	}

	int now_count;
	while (!q.empty()) {
		int now_row = q.front().first;
		int now_col = q.front().second;
		now_count = count[now_row][now_col];

		visited[now_row][now_col] = 1;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nxt_row = now_row + dr[i];
			int nxt_col = now_col + dc[i];

			if (nxt_col >= 0 && nxt_col < 1001 && nxt_row >= 0 && nxt_row < 1001) {
				if (visited[nxt_row][nxt_col] == 0) {
					q.push(make_pair(nxt_row, nxt_col));
					visited[nxt_row][nxt_col] = 1;
					count[nxt_row][nxt_col] = count[now_row][now_col] + 1;
				}
			}
		}
	}

	cout << now_count << endl;*/
	
}