def solution(array, commands):
    tmp = []
    answer = []
    i = 0
    a = 0
    b = 0

    while i < len(commands):
        a = commands[i][0] - 1
        b = commands[i][1]
        c = commands[i][2] - 1

        if b < len(array):
            tmp = array[a:b]
        else:
            tmp = array[a:]

        tmp.sort()
        answer.append(tmp[c])
        i = i + 1

    return answer
