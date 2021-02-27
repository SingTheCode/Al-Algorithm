def solution(prices):
    answer = []
    # 리스트 비어있으면 prices = False
    while prices:
        cnt = 0
        priceCheck = prices.pop(0)
        for price in prices:
            if priceCheck <= price:
                cnt = cnt + 1
            else:
                cnt = cnt + 1
                break
        answer.append(cnt)

    return answer

# 정확도 100 효율성 0
