def solution(participant, completion):
    i = 0
    j = 0

    while(i < len(participant)):
        check = participant[i] in completion
        if(check == False):
            return participant[i]

        else:
            checkNum = participant.count(participant[i]) - completion.count(participant[i])
            if(checkNum == 1):
                return participant[i]
            i = i + 1

