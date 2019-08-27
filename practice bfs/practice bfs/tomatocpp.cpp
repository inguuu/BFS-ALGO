#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main(){

	int n, m;
	queue < pair<int, int >> q;
     
	int map[1001][1001];
	int visited[1001][1001] = { 0, };
	
	int dr[] = {1,0,-1,0};
	int dc[] = {0,1,0,-1};

	
	cin >> n;
	cin >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
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
	
		
		visited[now_row][now_col] = 1;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nxt_row = now_row + dr[i];
			int nxt_col = now_col + dc[i];
			//cout << "nxt: " << nxt_row << "," << nxt_col;
			if (nxt_col >= 0 && nxt_col < 1001 && nxt_row >= 0 && nxt_row < 1001) {
				if (visited[nxt_row][nxt_col] == 0&&map[nxt_row][nxt_col]==0) {
					cout <<nxt_row<<", "<<nxt_col << endl;
					q.push(make_pair(nxt_row, nxt_col));
					visited[nxt_row][nxt_col] = 1;
					map[nxt_row][nxt_col] = map[now_row][now_col] + 1;
				}
			}
		}
		now_count = map[now_row][now_col];
	}

	for (int i = 1; i <= n; i++) {
		
		for (int j = 1; j <= m; j++) {
			cout << "====È®ÀÎ==== ";
			cout << map[i][j] << " ";
			cout << endl;
			if (map[i][j] == 0) {

				now_count = -1;
				break;
			}
		}
	}
	cout << now_count-1 << endl;
	
}