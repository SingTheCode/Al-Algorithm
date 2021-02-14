def solution(participant, completion):
    i = 0

    while(i < len(completion)):
        check = completion[i] in participant
        if(check == True):
            participant.remove(completion[i])
            i = i + 1
    return participant[0]