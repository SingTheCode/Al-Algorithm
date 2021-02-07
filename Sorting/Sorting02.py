def solution(numbers):
    numSize = [1] * len(numbers)
    compareNum = list(numbers)
    numSizeOne = []
    numSizeTwo = []
    numSizeThree = []
    result = []

    i = 0
    while (i < len(numbers)):
        while (compareNum[i] // 10 != 0):
            compareNum[i] = compareNum[i] // 10
            numSize[i] = numSize[i] + 1
        i = i + 1

    j = 0
    while(j < len(numbers)):
        if(numSize[j] == 1):
            numSizeOne.append(numbers[j])
            j = j + 1
        elif(numSize[j] == 2):
            numSizeTwo.append(numbers[j])
            j = j + 1
        else:
            numSizeThree.append(numbers[j])
            j = j + 1

    numSizeOne.sort(reverse=True)
    numSizeTwo.sort(reverse=True)
    numSizeThree.sort(reverse=True)

    sizeOne = len(numSizeOne)
    sizeTwo = len(numSizeTwo)
    sizeThree = len(numSizeThree)

    maxSize = 0

    if(sizeOne > maxSize):
        maxSize = sizeOne
    elif(sizeTwo > maxSize):
        maxSize = sizeTwo
    else:
        maxSize = sizeThree

    for i in range(maxSize - sizeOne + 1):
        numSizeOne.append(0)
    for i in range(maxSize - sizeTwo + 1):
        numSizeTwo.append(0)
    for i in range(maxSize - sizeThree + 1):
        numSizeThree.append(0)


    i = 0
    j = 0
    k = 0
    while(i < sizeOne or j < sizeTwo or k < sizeThree):
        if(numSizeOne[i] >= numSizeTwo[j]//10):
            if(numSizeOne[i]//10 >= (numSizeThree[k]//10)//10):
                result.append(numSizeOne[i])
                i = i + 1
            else:
                result.append(numSizeThree[k])
                k = k + 1
        else:
            if(numSizeTwo[j]//10 >= (numSizeThree[k]//10)//10):
                result.append(numSizeTwo[j])
                j = j + 1
            else:
                result.append(numSizeThree[k])
                k = k + 1

    strResult = "".join(map(str, result))
    # k = 0
    # while (k < len(numbers)):
    #     compareDict[numbers[k]] = compareNum[k]
    #     k = k + 1



    # compareNum.sort(reverse=True)



    print(strResult)
    return strResult

arr = [3, 30, 34, 5, 9]
solution(arr)