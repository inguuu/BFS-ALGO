# BFS-ALGO

## 자료구조 큐(Queue)를 이용해서 구현하자 

1. 시작점을 큐에 넣는다.

2. 큐에서 한 점을 꺼내서 기준점으로 삼는다.

3. 기준점이 우리가 목표로 하는 목적지이면 탐색을 종료한다.

4. 그렇지 않은 경우 기준점에서 갈 수 있는 다음 정점들을 큐에 넣는다.

5. 큐에 원소가 없을 때까지 2단계로 돌아가 반복한다.

## Sample Coede BFS

``` c++

queue <int> que

int MAT[1000][1000]; //인접 배열

int visited[1000]; // i를 방문O : 1, 방문 X: 0

int start; // 출발지
int end; // 목적지
int num; // 정점의 수

void bfs(){

que.push(start); // 1. 시작점을 큐에 넣는다.
visited[start] = 1; 

while(!que.empty()){

  int now = que.front;// 2. 큐에서 한점을 뽑아서 기준점으로 삼는다.
  que.pop();

  if(now==end){// 3. 기준점이 목적지이면 종료
    break;
  }
  else{// 4. 아닐 경우 탐색

    for(int i =1; i<=num; i++){
      int next=MAT[now][i]; //기존에 방문하지 않고 // 현재 정정과 연결된 점을 탐색
      
      if(visited[next]== 0 && MAT[now][i] == 1){
        visited[next]=1;// 해당 지점을 큐에 넣는다.
        que.push(next);
      }
   
    }
  }

}


```

