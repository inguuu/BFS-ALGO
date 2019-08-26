#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

int main() {


	queue <int> que;

	int MAT[1000][1000]; //인접 배열

	int visited[1000]; // i를 방문O : 1, 방문 X: 0

	int start; // 출발지
	int end; // 목적지
	int num; // 정점의 수

	que.push(start); // 1. 시작점을 큐에 넣는다.
	visited[start] = 1;

	while (!que.empty()) {

		int now = que.front;// 2. 큐에서 한점을 뽑아서 기준점으로 삼는다.
		que.pop();

		if (now == end) {// 3. 기준점이 목적지이면 종료
			break;
		}
			
		else {// 4. 아닐 경우 탐색

			for (int i = 1; i <= num; i++) {
				int next = MAT[now][i]; //기존에 방문하지 않고 // 현재 정정과 연결된 점을 탐색

				if (visited[next] == 0 && MAT[now][i] == 1) {
					visited[next] = 1;// 해당 지점을 큐에 넣는다.
					que.push(next);
				}

			}
		}

	}
	
}