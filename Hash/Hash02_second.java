import java.util.Arrays;
import java.util.HashSet;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;

        Arrays.sort(phone_book);

        HashSet<String> hashSet = new HashSet<>();

        for(int former = 0; former < phone_book.length - 1; former++) {
            for(int latter = former + 1; latter < phone_book.length; latter++) {
                if(phone_book[latter].startsWith(phone_book[former])) {
                    answer = false;
                    return answer;
                }
            }
        }
        return answer;
    }
}