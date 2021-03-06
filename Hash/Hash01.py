def solution(participant, completion):
    i = 0

    while(i < len(completion)):
        check = completion[i] in participant
        if(check == True):
            participant.remove(completion[i])
            i = i + 1
    return participant[0]

# 정확도 100 효율성 0
