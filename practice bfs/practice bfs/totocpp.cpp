//#include<stdio.h>
//#include<vector>
//#include<algorithm> 
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int map[1002][1002];
//int visit[1002][1002];
//int dx[] = { -1,1,0,0 };
//int dy[] = { 0,0,-1,1 };
//int m, n;
//queue<pair<int, int>> q;
//
//int main() {
//	cin >> m >> n;
//	int min;
//
//	int zerocount = 0; // 안익은 토마토 개수
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			//map: 1=익은, 0=안익은, -1=없는
//			if (map[i][j] == 1) {
//				// 익은 토마토의 위치를 큐에 미리 넣어둠
//				// bfs의 경우 큐에 원소를 넣기전에 방문체크를 해야함
//				visit[i][j] = true;
//				q.push(make_pair(i, j));
//			}
//			else if (map[i][j] == 0)
//				zerocount++;
//		}
//	}
//
//	//미리 모두 익어있는지 확인
//	if (zerocount == 0) {
//		cout << "0" << endl;
//		return 0;
//	}
//
//	//익은 토마토에서부터 탐색 시작
//	min = 0;
//	while (!q.empty()) {
//		int size = q.size();
//		while (size--) {
//			// 현재 min단계에 있는 원소의 개수만큼만 pop해서
//			// 다음 단계의 원소들을 큐에 삽입
//			// 이 while문이 끝나게 되면 큐에는
//			// 다음 단계의 원소들만 남아있게 된다
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//
//			for (int i = 0; i < 4; i++) {
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
//
//				if (!visit[nx][ny]) {
//					if (map[nx][ny] == 0) {
//						visit[nx][ny] = 1;
//						map[nx][ny] = 1;
//						q.push(make_pair(nx, ny));
//					}
//				}
//			}
//		}
//		if (q.empty())
//			break;
//
//		min++;
//	}
//
//	//토마토가 모두 익었는지 확인 -> 안 익은게 있다면 -1
//	bool lastcheck = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 0)
//				lastcheck = false;
//		}
//	}
//	if (!lastcheck) {
//		cout << "-1" << endl;
//		return 0;
//	}
//
//	cout << min << endl;
//	return 0;
//}