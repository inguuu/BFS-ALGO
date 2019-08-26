#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main(){
	int N, M;
	queue<pair<pair<int, int>, int>> q;
	int map[100][100];
	//��������
	int dr[] = { 0,1,0,-1 };
	int dc[] = { 1,0,-1,0 };
	int S_r, S_c;
	int E_r, E_c;

	cin >> N;
	cin >> M;

	cout << N << endl;
	cout << M << endl;

	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j <M+1; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}
	

	S_r = 1;
	S_c = 1;
	q.push(make_pair(make_pair(S_r, S_c), 0));

	int answer = 0;
	int ig = 4;
	while (!q.empty()) {

		ig--;
		cout << "====="<<ig << endl;
		int now_row = q.front().first.first;
		int now_col = q.front().first.second;
		int now_count = q.front().second;
		q.pop();
		map[now_row][now_col] = 0;

		if (now_row == N && now_col == M) {
			answer = now_count;
			break;
		}
		else {
			for (int i = 0; i < 4; i++) {

				int nxt_row = now_row + dr[i];
				int nxt_col = now_col + dc[i];
				int nxt_count = ++now_count;
				
				if (nxt_row>=2&&nxt_row<=N&&nxt_col>=2&&nxt_col<=M){
					if (map[nxt_row][nxt_col] == 1) {
						q.push(make_pair(make_pair(nxt_row, nxt_col), nxt_count));

					}
				}

			}
		}
		answer = now_count;

	}

	cout << answer << endl;
}

/*
�̷ο��� 1�� �̵��� �� �ִ� ĭ�� ��Ÿ����, 0�� �̵��� �� ���� ĭ�� ��Ÿ����. 
�̷��� �̷ΰ� �־����� ��, (1, 1)���� ����Ͽ� (N, M)�� ��ġ�� �̵��� �� ������ �ϴ� �ּ��� ĭ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ĭ���� �ٸ� ĭ���� �̵��� ��, ���� ������ ĭ���θ� �̵��� �� �ִ�.

���� �������� 15ĭ�� ������ (N, M)�� ��ġ�� �̵��� �� �ִ�. ĭ�� �� ������ ���� ��ġ�� ���� ��ġ�� �����Ѵ�.
*/