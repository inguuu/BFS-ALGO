#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

int main(){

	queue <pair <pair <int, int>, int>> q;
	int count = 0;
	int N,M;
	int S_r, S_c;
	int E_r, E_c;

	int map[1001][1001];
	
	cin >> count;
	

	for (int t = 0; t < count; t++) {

		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= M; j++) {
				map[i][j] = 0;
			}
		}
		while (!q.empty()) {
			q.pop();
		}
		cin >> N;
		cin >> M;

		cin >> S_r;
		cin >> S_c;
		cin >> E_r;
		cin >> E_c;



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