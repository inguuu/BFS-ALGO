#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main(){

	int n, m;
	queue < pair<int, int >> q;
     
	int map[1002][1002];
	int visited[1002][1002];
	
	int dr[] = {1,0,-1,0};
	int dc[] = {0,1,0,-1};
	
	cin >> m;
	cin >> n;

	int min;
	
	int zerocount = 0; // ������ �丶�� ����

	for (int i = 0; i <n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			visited[i][j] = 0;
			if (map[i][j] == 1) {
				q.push(make_pair(i, j));
				visited[i][j] = 1;
				
			}
			else if (map[i][j] == 0)
				zerocount++;
		}
	}
	//�̸� ��� �;��ִ��� Ȯ��
	if (zerocount == 0) {
		cout << "0" << endl;
		return 0;
	}
	//for (int i = 1; i <= m; i++) {
	//	for (int j = 1; j <= n; j++) {
	//		cout << i << ", " << j << " " << map[i][j] << endl;
	//		
	//	}
	//}

	//cout << "Ȯ��"<<map[2][1] << endl;
	//cout << "   " << endl;
	min = 0;
	int now_count=1;
		
	while (!q.empty()) {
		int size = q.size();
		while (size--) {
			// ���� min�ܰ迡 �ִ� ������ ������ŭ�� pop�ؼ�
			// ���� �ܰ��� ���ҵ��� ť�� ����
			// �� while���� ������ �Ǹ� ť����
			// ���� �ܰ��� ���ҵ鸸 �����ְ� �ȴ�
			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++) {
				int nx = x + dr[i];
				int ny = y + dc[i];
				if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

				if (!visited[nx][ny]) {
					if (map[nx][ny] == 0) {
						visited[nx][ny] = 1;
						map[nx][ny] = 1;
						q.push(make_pair(nx, ny));
					}
				}
			}
		}
		if (q.empty())
			break;

		min++;
	}


		bool lastcheck = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0)
				lastcheck = false;
		}
	}
	if (!lastcheck) {
		cout << "-1" << endl;
		return 0;
	}

	cout << min << endl;
	return 0;
	//for (int i = 0; i <= n; i++) {
	//	
	//	for (int j = 0; j <= m; j++) {
	//		/*cout << "====Ȯ��==== ";
	//		cout << map[i][j] << " ";
	//		cout << endl;*/
	//		if (map[i][j] == 0) {

	//			now_count = 0;
	//			break;
	//		}
	//	}
	//}
	//cout << now_count-1 << endl;
	
}