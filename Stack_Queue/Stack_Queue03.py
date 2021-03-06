def solution(progresses, speeds):
    answer = []
    distributeCnt = 0

    while progresses:
        while progresses[0] < 100:
            i = 0
            for i in range(len(progresses)):
                progresses[i] = progresses[i] + speeds[i]
                i = i + 1

        while progresses:
            if progresses[0] >= 100:
                progresses.pop(0)
                distributeCnt = distributeCnt + 1
            else:
                break

        answer.append(distributeCnt)
        distributeCnt = 0
    return answer


progresses = [95, 90, 99, 99, 80, 99]
speeds = [1, 1, 1, 1, 1, 1]

print(solution(progresses, speeds))
