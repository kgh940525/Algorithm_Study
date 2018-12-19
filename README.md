# 감자개발자 알고리즘 코딩 테스트 대비 PS(Problem & Solve)


# 1. 알고리즘 목표 
```
1. 구현력 - 생각한 알고리즘을 그대로 소스코드로 구현하는 과정(순서도)
2. 문제해결능력 - 내가 알고있는 알고리즘, 자료구조, 다양한 테크닉등을 지금 당면한 문제에 맞게 변형하여 적용하는 것
3. 배경지식 - 기초적인 프로그래밍 문법 및 알고리즘, 자료구조 등을 아는 것 선형대수학과 확률 등과 같이 기본적인 수학적 지식을 아는 것과 같은 능력
4. 백준알고리즘 1일 1커밋 - 1일 1알고리즘
5. 코드 리뷰 
6. 블로그 업데이트 [감자코딩 & 감자개발자 티스토리 블로그] (kgh940525.tistory.com)
```
# 2. 알고리즘 주의 할점 

```

```
```
1. x좌표와 y좌표를 분리해서 생각하기
x좌표만 있다고 생각하고 문제를 더 쉽게 풀어보고 이후에 y좌표를 추가하면 어떻게 풀 수 있는지 생각하는 접근 방법이다.

2. 순서를 강제하기
주어진 문제가 임의의 순서를 추가 하였을 때 더 쉽게 접근할 수는 없는지 생각해보는 접근이다.
보통 dp문제에서 많이 사용하는 접근 방법이다.

3. 주어진 문제를 반으로 나누기
주어진 문제를 반으로 나누었을 때 왼쪽 범위에서 시작하고 오른쪽 범위에서 끝나는 답을 비교적 구하기 쉬운지 
O(n) 판단하여 분할정복으로 푸는 접근 방법이다.

4. 뒤에서부터 생각하기
보통 앞에서 부터 결정하면 결정하기 난해한 문제들은 뒤에서부터 결정하였을 때 쉽게 풀리는 경우도 있다.

5. 일단 쉬운 알고리즘으로 생각하기
먼저 쉬운 알고리즘으로 접근하여 규칙 또는 최적화가 가능한 부분을 찾고 개선하는 접근 방법이다.

6. 답을 정해놓고 구하는게 더 쉬운지?
임의의 답을 정하고 해당 답이 참인지 거짓인지 판별하는게 더 쉽다면 파라매트릭 서치를 생각해본다.

7. 새로운 공간, 조건, 제약 등을 추가
문제에 없는 새로운 조건이나 제약, 공간등을 추가하고 더 쉬운 문제를 푸는 접근 방법이다.

8. 전처리
알고리즘 중에 미리 계산할 수 있는 부분이 존재하는지 생각해보고 미리 연산하고 저장하고 이용
```


## 알고리즘 초급
```
- 완전 탐색
- DP(Dynamic Programming) 초급 
- 큐, 스택
- DFS
- BFS
- 탐욕법
```
## 알고리즘 중급
```
- 분할 정복
- 이분 탐색
- DP 중급
- 최단거리
- 다익스트라, 벨만 포드, 플로이드
- 최소 스패닝 트리
- 구간 트리(세그먼트 트리(탑-다운), 인덱스 트리(바텀-업), 팬윅트리(BIT))
- LCA(Lowest Common Ancestor)
- 비트마스크
- 서로소 집합
```
