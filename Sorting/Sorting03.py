def solution(citations):
    i = 0
    j = 0
    hMax = 0
    moreThanHCount = 0

    while (i < len(citations)):
        while (j < len(citations)):
            if (hMax <= citations[j]):
                moreThanHCount = moreThanHCount + 1
            j = j + 1
        if (hMax <= moreThanHCount):
            hMax = hMax + 1
            j = 0
            i = i + 1
            moreThanHCount = 0
        else:
            return hMax - 1
    return hMax
