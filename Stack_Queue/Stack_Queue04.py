def solution(priorities, location):
    cnt = 1
    while priorities:
        temp = priorities.pop(0)
        tmp = 0
        for i in priorities:
            if temp < i:
                priorities.append(temp)
                tmp = 1

                break
        if tmp == 0 and location == 0:
            return cnt
        else:
            if location == 0:
                location = len(priorities)-1
            else :
                location -= 1
        if tmp == 0 :
            cnt += 1




priorities = [1,1,9,1,1,1]
location = 1
print(solution(priorities, location))

# 맨 앞 원소를 pop 해주고 나머지 원소들과 비교
# pop한 원소보다 큰 값이 큐에 없을 때 location == 0 인지 확인
# location == 0일 때 인쇄하려는 원소가 인쇄되었다 인지 후 몇번째 인쇄인지 출력
