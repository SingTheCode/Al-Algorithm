def solution(answers):
    first = [1, 2, 3, 4, 5]
    second = [2, 1, 2, 3, 2, 4, 2, 5]
    third = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    ans = [0, 0, 0]
    answer = []

    i = 0
    j = 0
    k = 0
    maxScore = 0

    # 채점
    for i in range(len(answers)):
        if answers[i] == first[i % 5]:
            ans[0] += 1
        if answers[i] == second[i % 8]:
            ans[1] += 1
        if answers[i] == third[i % 10]:
            ans[2] += 1
        i += 1

    # 많이 맞춘 점수
    for j in range(3):
        if maxScore < ans[j]:
            maxScore = ans[j]
        j += 1

    for k in range(len(ans)):
        if maxScore == ans[k]:
            answer.append(k + 1)
        k += 1

    return answer


answers = [1, 3, 2, 4, 2]
print(solution(answers))
