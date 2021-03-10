import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        int[] leftDay = new int[progresses.length];
        for(int i = 0; i < progresses.length; i++) {
            leftDay[i] = (int) Math.ceil((100-progresses[i])/(double)speeds[i]);
        }

        Deque<Integer> leftDayStack = new ArrayDeque<Integer>();
        List<Integer> answerList = new ArrayList<>();

        leftDayStack.add(leftDay[0]);
        for(int i = 1; i < leftDay.length; i++) {
            if(leftDayStack.peekFirst() < leftDay[i]) {
                answerList.add(leftDayStack.size());
                for(int j = 0, size = leftDayStack.size(); j < size; j++) {
                    leftDayStack.pop();
                }
                leftDayStack.add(leftDay[i]);
                if(i == leftDay.length - 1) {
                    answerList.add(leftDayStack.size());
                }
                continue;
            }
            if(leftDayStack.peekFirst() >= leftDay[i]) {
                leftDayStack.add(leftDay[i]);
                if(i == leftDay.length - 1) {
                    answerList.add(leftDayStack.size());
                }
            }
        }

        int[] answer = answerList.stream().mapToInt(i -> i).toArray();
        return answer;
    }
}