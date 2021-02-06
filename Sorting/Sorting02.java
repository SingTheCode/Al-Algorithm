import java.util.Arrays;
import java.util.Comparator;

class Solution {
    public String solution(int[] numbers) {
        String answer = "";

        String[] stringTypeNumbers = new String[numbers.length];

        for(int i = 0; i < numbers.length; i++) {
            stringTypeNumbers[i] = String.valueOf(numbers[i]);
        }

        Arrays.sort(stringTypeNumbers, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return (o2+o1).compareTo(o1+o2);
            }
        });

        if(stringTypeNumbers[0].equals("0")) {
            return "0";
        }

        for(int i = 0; i < stringTypeNumbers.length; i++) {
            answer += stringTypeNumbers[i];
        }

        return answer;
    }
}