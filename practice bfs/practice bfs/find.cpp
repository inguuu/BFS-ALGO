#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main() {

	int N;
	int K;
	int count = 0;

	cin >> N;
	cin >> K;

	queue <int> q;
	
	int visited[100001] = { 0, };

	q.push(N);
	visited[N] = 1;

	while (!q.empty()) {
		
		int now;
		now = q.front(); 
		q.pop();
		
		//cout << "now: " << now << endl;
		//cout << "visted[now]: " << visited[now] << endl;
		if (now == K) {
			count = visited[now]-1;
			break;
		}

		if (now + 1 < 100001&&visited[now+1]<1) {
			
			q.push(now + 1);
			visited[now + 1] = visited[now] + 1;
		}
		if (now - 1 >=0 && visited[now - 1] < 1) {
			
			q.push(now - 1);
			visited[now - 1] = visited[now] + 1;
		}
		if (now *2 < 100001 && visited[now *2] < 1) {
		
			q.push(now * 2);
			visited[now *2]=visited[now]+1;
		}
	
	}
	
	cout << count;

}

/*
�����̴� ������ ���ٲ����� �ϰ� �ִ�. �����̴� ���� �� N(0 �� N �� 100,000)�� �ְ�, ������ �� K(0 �� K �� 100,000)�� �ִ�. 
�����̴� �Ȱų� �����̵��� �� �� �ִ�. ����, �������� ��ġ�� X�� �� �ȴ´ٸ� 1�� �Ŀ� X-1 �Ǵ� X+1�� �̵��ϰ� �ȴ�. 
�����̵��� �ϴ� ��쿡�� 1�� �Ŀ� 2*X�� ��ġ�� �̵��ϰ� �ȴ�.

�����̿� ������ ��ġ�� �־����� ��, �����̰� ������ ã�� �� �ִ� ���� ���� �ð��� �� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/