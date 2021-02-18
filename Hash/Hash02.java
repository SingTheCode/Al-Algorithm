import java.util.Arrays;
import java.util.HashMap;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;

        Arrays.sort(phone_book);
        HashMap<String, Integer> hashMap = new HashMap<>();

        for(String i: phone_book) {
            hashMap.put(i, 0);
        }

        for(int former = 0; former < phone_book.length - 1; former++) {
            for(int latter = former + 1; latter < phone_book.length; latter++) {
                String smaller = phone_book[former];
                if(phone_book[latter].contains(smaller)) {
                    hashMap.put(phone_book[latter], hashMap.get(phone_book[latter]) + 1);
                }
            }
        }

        for(String phoneNumber: phone_book) {
            if(hashMap.get(phoneNumber) > 0) {
                answer = false;
            }
        }
        return answer;
    }
}