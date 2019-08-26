#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

int main() {


	queue <int> que;

	int MAT[1000][1000]; //���� �迭

	int visited[1000]; // i�� �湮O : 1, �湮 X: 0

	int start; // �����
	int end; // ������
	int num; // ������ ��

	que.push(start); // 1. �������� ť�� �ִ´�.
	visited[start] = 1;

	while (!que.empty()) {

		int now = que.front;// 2. ť���� ������ �̾Ƽ� ���������� ��´�.
		que.pop();

		if (now == end) {// 3. �������� �������̸� ����
			break;
		}
			
		else {// 4. �ƴ� ��� Ž��

			for (int i = 1; i <= num; i++) {
				int next = MAT[now][i]; //������ �湮���� �ʰ� // ���� ������ ����� ���� Ž��

				if (visited[next] == 0 && MAT[now][i] == 1) {
					visited[next] = 1;// �ش� ������ ť�� �ִ´�.
					que.push(next);
				}

			}
		}

	}
	
}