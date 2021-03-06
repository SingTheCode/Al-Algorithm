import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        int answerIndex = 0;

        Queue<Stock> stocks = new LinkedList<>();

        for(int p: prices) {
            stocks.offer(new Stock(p));
        }

        while(!stocks.isEmpty()) {
            Stock comparisonTargetStock = stocks.poll();
            int priceOfComparisonTargetStock = comparisonTargetStock.price;

            for(Stock s: stocks) {
                if(priceOfComparisonTargetStock <= s.price) {
                    comparisonTargetStock.notFallingPeriod++;
                } else {
                    comparisonTargetStock.notFallingPeriod++;
                    break;
                }
            }
            answer[answerIndex++] = comparisonTargetStock.notFallingPeriod;
        }
        return answer;
    }
}

class Stock {
    public int price;
    public int notFallingPeriod;

    public Stock(int price) {
        this.price = price;
        this.notFallingPeriod = 0;
    }
}

