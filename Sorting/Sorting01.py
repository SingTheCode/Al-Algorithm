def solution(array, commands):
    tmp = []
    answer = []
    i = 0

    while i < len(commands):
        a = commands[i][0] - 1
        b = commands[i][1]
        c = commands[i][2] - 1

        tmp = array[a:b]
        
        tmp.sort()
        answer.append(tmp[c])
        i = i + 1

    return answer
