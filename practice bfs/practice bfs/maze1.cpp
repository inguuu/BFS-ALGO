#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

int main(){

	queue <pair <pair <int, int>, int>> q; //������ �̵�Ƚ�� ����
	int count = 0;
	int N,M;
	int S_r, S_c;
	int E_r, E_c;

	//�������� ���߿� �������� ���ȴ� �ϳ��� ������ 
	int dr[] = { 0,1,0,-1 };
	int dc[] = { 1,0,-1,0 };

	int map[1001][1001];

	int answer;
	
	cin >> count;
	
	
	for (int t = 0; t < count; t++) {

		// �迭 �ʱ�ȭ �� ť �ʱ�ȭ
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j <= M; j++) {
				map[i][j] = 0;
			}
		}
		while (!q.empty()) {
			q.pop();
		}

		// �Է� �ޱ� 
		cin >> N;
		cin >> M;

		cin >> S_r;
		cin >> S_c;
		cin >> E_r;
		cin >> E_c;

		for (int i = 1; i <= N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> map[i][j];
			}
		}

		//�����ϱ� 

		q.push(make_pair(make_pair(S_r, S_c), 0));
		map[S_r][S_c] = 1;

		// go
		answer = -1;
		while (!q.empty) {
			int now_row = q.front().first.first;
			int now_col = q.front().first.second;
			int now_count = q.front().second;
			q.pop();

			//����
			if (now_row == E_r && now_col == E_c) {
				answer = now_count;
				break;
			}

			//����
			else {
				for (int i = 0; i < 4; i++) {
					int nxt_row = now_row + dr[i];
					int nxt_col = now_row + dc[i];
					int nxt_count = now_col+1;

					if (nxt_row >= 1 && nxt_row <= N && nxt_col >= 1 && nxt_col <= M) {
						if (map[nxt_row][nxt_col] != 1) {
							map[nxt_row][nxt_col] == 1;
							q.push(make_pair(make_pair(nxt_row, nxt_col), nxt_count));
					   }
					}
					
				}
			}

		}
		
	

        



	}
	
	

}

/*

[����]

���� N, ���� M ũ���� ���ڿ� ������(S_r, S_c)�� Ż�ⱸ(E_r, E_c)�� �־����� ��,
���������� Ż�ⱸ���� �̵��ϱ� ���� �ʿ��� �ּ� �̵� Ƚ���� ���ϴ� ���α׷��� �ۼ� 

	�����¿� ��ĭ�ĸ� �̵� ���� 
	���� ������ �̵� ����
	Ż�ⱸ ���� �̵��� �� �ִ� ����� ���ٸ� -1 ���


*/