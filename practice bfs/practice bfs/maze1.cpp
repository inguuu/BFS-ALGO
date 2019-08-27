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
//	queue <pair <pair <int, int>, int>> q; //시작점 이동횟수 삽입
//	int count = 0;
//	int N, M;
//	int S_r, S_c;
//	int E_r, E_c;
//
//	//동남서북 나중에 포문으로 사용된다 하나의 쌍으로 
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
//		// 입력 받기 
//		cin >> N;
//		cin >> M;
//
//		// 배열 초기화 및 큐 초기화
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
//		//시작하기 
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
//			//정답
//			if (now_row == E_r && now_col == E_c) {
//				answer = now_count;
//				break;
//			}
//		
//
//			//과정
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

[문제]

세로 N, 가로 M 크기의 격자와 시작점(S_r, S_c)과 탈출구(E_r, E_c)가 주어졌을 때,
시작점부터 탈출구까지 이동하기 위해 필요한 최소 이동 횟수를 구하는 프로그래밍 작성 

	상하좌우 한칸식만 이동 가능 
	벽이 있으면 이동 못함
	탈출구 까지 이동할 수 있는 방법이 없다면 -1 출력













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

	//동남서북
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
미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다.
이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오.
한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.

위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.
*/

