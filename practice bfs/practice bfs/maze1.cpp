#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

//int main(){
//
//	
//	
//	queue <pair <pair <int, int>, int>> q; //������ �̵�Ƚ�� ����
//	int count = 0;
//	int N, M;
//	int S_r, S_c;
//	int E_r, E_c;
//
//	//�������� ���߿� �������� ���ȴ� �ϳ��� ������ 
//	int dr[] = { 0,1,0,-1 };
//	int dc[] = { 1,0,-1,0 };
//
//	int map[100][100];
//
//	int answer;
//	
//	cin >> count;
//	
//	
//	for (int t = 0; t < count; t++) {
//
//		// �Է� �ޱ� 
//		cin >> N;
//		cin >> M;
//
//		// �迭 �ʱ�ȭ �� ť �ʱ�ȭ
//		for (int i = 0; i <= N+1; i++) {
//			for (int j = 0; j <= M+1; j++) {
//				map[i][j] = 0;
//			}
//		}
//		while (!q.empty()) {
//			q.pop();
//		}
//
//		cin >> S_r;
//		cin >> S_c;
//		cin >> E_r;
//		cin >> E_c;
//
//
//		//�����ϱ� 
//
//		q.push(make_pair(make_pair(S_r, S_c), 0));
//		map[S_r][S_c] = 1;
//
//
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j < M; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		// go
//		answer = -1;
//		int ig = 0;
//		while (!q.empty()) {
//			
//			int now_row = q.front().first.first;
//			int now_col = q.front().first.second;
//			int now_count = q.front().second;
//		/*	cout << "=====ig=====" << endl;
//			cout << ig <<endl;
//			++ig;
//			cout << "=====now=====" << endl;
//			cout << now_row<<","<<now_col << endl;*/
//			
//			q.pop();
//
//			//����
//			if (now_row == E_r && now_col == E_c) {
//				answer = now_count;
//				break;
//			}
//		
//
//			//����
//			else {
//				for (int i = 0; i < 4; i++) {
//					int nxt_row = now_row + dr[i];
//					int nxt_col = now_col + dc[i];
//					int nxt_count = now_col+1;
//
//				/*	cout << "=====now for=====" << endl;
//					cout << "i: " << i << endl;
//					cout << nxt_row << "," << nxt_col << endl;
//					cout << map[nxt_row][nxt_col] << endl;*/
//					if (nxt_row >= 1 && nxt_row <= N && nxt_col >= 1 && nxt_col <= M) {
//						if (map[nxt_row][nxt_col] != 1) {
//
//						/*	cout << "=====next====="<<endl;
//							cout << "i: "<<i << endl;
//							cout << nxt_row << "," << nxt_col << endl;*/
//							map[nxt_row][nxt_col] = 1;
//							q.push(make_pair(make_pair(nxt_row, nxt_col), nxt_count));
//					   }
//					}
//					
//				}
//			}
//
//		}
//	
//		cout << "#" << t + 1 << " " << answer;
//
//
//	}
//	
//	return 0;
//
//}

/*

[����]

���� N, ���� M ũ���� ���ڿ� ������(S_r, S_c)�� Ż�ⱸ(E_r, E_c)�� �־����� ��,
���������� Ż�ⱸ���� �̵��ϱ� ���� �ʿ��� �ּ� �̵� Ƚ���� ���ϴ� ���α׷��� �ۼ� 

	�����¿� ��ĭ�ĸ� �̵� ���� 
	���� ������ �̵� ����
	Ż�ⱸ ���� �̵��� �� �ִ� ����� ���ٸ� -1 ���













#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;

int main(){
	int N, M;
	queue<pair<pair<int, int>, int>> q;
	int map[101][101];

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
			scanf("%1d", &map[i][j]);
		}
	}


	S_r = 1;
	S_c = 1;
	q.push(make_pair(make_pair(S_r, S_c), 1));

	int answer = 1;
	int ig = 4;
	while (!q.empty()) {


		int now_row = q.front().first.first;
		int now_col = q.front().first.second;
		int now_count = q.front().second;
		q.pop();
		map[now_row][now_col] = 0;

		//cout << "===now==" << now_row<<","<<now_col << endl;

		if (now_row == N && now_col == M) {
			answer = now_count;
			//cout << answer;
			break;
		}
		else {
			for (int i = 0; i < 4; i++) {

				int nxt_row = now_row + dr[i];
				int nxt_col = now_col + dc[i];
				int nxt_count = now_count+1;

				if (nxt_row>=1&&nxt_row<=N&&nxt_col>=1&&nxt_col<=M){
					if (map[nxt_row][nxt_col] == 1) {
						//cout << "===nxt==" << nxt_row << "," << nxt_col << endl;
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

