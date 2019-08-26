#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

int main(){

	queue <pair <pair <int, int>, int>> q; //시작점 이동횟수 삽입
	int count = 0;
	int N,M;
	int S_r, S_c;
	int E_r, E_c;

	//동남서북
	int dr[] = { 0,1,0,-1 };//남북
	int dc[] = { 1,0,-1,0 };//동서

	int map[1001][1001];

	int answer;
	
	cin >> count;
	
	
	for (int t = 0; t < count; t++) {

		// 배열 초기화 및 큐 초기화
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= M; j++) {
				map[i][j] = 0;
			}
		}
		while (!q.empty()) {
			q.pop();
		}

		// 입력 받기 
		cin >> N;
		cin >> M;

		cin >> S_r;
		cin >> S_c;
		cin >> E_r;
		cin >> E_c;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> map[i][j];
			}
		}

		//시작하기 

		q.push(make_pair(make_pair(S_r, S_c), 0));
		map[S_r][S_c] = 1;

		answer = -1;
		
	

        



	}
	
	

}

/*

[문제]

세로 N, 가로 M 크기의 격자와 시작점(S_r, S_c)과 탈출구(E_r, E_c)가 주어졌을 때,
시작점부터 탈출구까지 이동하기 위해 필요한 최소 이동 횟수를 구하는 프로그래밍 작성 

	상하좌우 한칸식만 이동 가능 
	벽이 있으면 이동 못함
	탈출구 까지 이동할 수 있는 방법이 없다면 -1 출력


*/