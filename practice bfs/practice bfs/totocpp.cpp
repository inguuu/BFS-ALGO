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
//	int zerocount = 0; // ������ �丶�� ����
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			//map: 1=����, 0=������, -1=����
//			if (map[i][j] == 1) {
//				// ���� �丶���� ��ġ�� ť�� �̸� �־��
//				// bfs�� ��� ť�� ���Ҹ� �ֱ����� �湮üũ�� �ؾ���
//				visit[i][j] = true;
//				q.push(make_pair(i, j));
//			}
//			else if (map[i][j] == 0)
//				zerocount++;
//		}
//	}
//
//	//�̸� ��� �;��ִ��� Ȯ��
//	if (zerocount == 0) {
//		cout << "0" << endl;
//		return 0;
//	}
//
//	//���� �丶�信������ Ž�� ����
//	min = 0;
//	while (!q.empty()) {
//		int size = q.size();
//		while (size--) {
//			// ���� min�ܰ迡 �ִ� ������ ������ŭ�� pop�ؼ�
//			// ���� �ܰ��� ���ҵ��� ť�� ����
//			// �� while���� ������ �Ǹ� ť����
//			// ���� �ܰ��� ���ҵ鸸 �����ְ� �ȴ�
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
//	//�丶�䰡 ��� �;����� Ȯ�� -> �� ������ �ִٸ� -1
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