def solution(priorities, location):
    cnt = 0
    while priorities:
        temp = priorities.pop(0)
        for i in priorities:
            if temp < i:
                priorities.append(temp)
                if location != 0:
                    location = location - 1
                else:
                    location = len(priorities)
                break
        if i ==
                priorities[len(priorities - 1)]:
            continue
        if location == 0:
            cnt = cnt + 1
            answer = cnt
            return answer
        else:
            continue




priorities = [2, 1, 3, 2]
location = 2
print(solution(priorities, location))

# 미완성
