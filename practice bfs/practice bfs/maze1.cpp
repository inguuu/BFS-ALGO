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

	//��������
	int dr[] = { 0,1,0,-1 };//����
	int dc[] = { 1,0,-1,0 };//����

	int map[1001][1001];

	int answer;
	
	cin >> count;
	
	
	for (int t = 0; t < count; t++) {

		// �迭 �ʱ�ȭ �� ť �ʱ�ȭ
		for (int i = 0; i <= N; i++) {
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

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> map[i][j];
			}
		}

		//�����ϱ� 

		q.push(make_pair(make_pair(S_r, S_c), 0));
		map[S_r][S_c] = 1;

		answer = -1;
		
	

        



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