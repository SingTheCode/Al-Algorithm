def solution(array, commands):
    tmp = []
    answer = []
    i = 0
    a = 0
    b = 0

    while i < 3:
        a = commands[i][0] - 1
        b = commands[i][1]
        c = commands[i][2] - 1

        # b가 7일 경우 리스트의 길이보다 커서 인식이 안되는 상황 방지
        if b < 7:
            tmp = array[a:b]
        else:
            tmp = array[a:]

        tmp.sort()
        answer.append(tmp[c])
        i = i + 1

    return answer

