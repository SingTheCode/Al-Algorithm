import heapq

def solution(scoville, K):
    min = 0
    answer = 0

    # min heap 구조로 만들어줌
    heapq.heapify(scoville)

    # heap의 가장 작은 노드가 K보다 작지 않을 때 까지 섞음
    while scoville[0] < K:

        # 원소가 하나밖에 남지 않았는데 그 값이 K보다 작으면 return -1
        if len(scoville) == 1:
            return -1

        min = heapq.heappop(scoville)
        min += heapq.heappop(scoville) * 2
        heapq.heappush(scoville, min)
        answer += 1

    return answer

scoville = [1,2,0,0,0,0]
K = 7
print(solution(scoville, K))