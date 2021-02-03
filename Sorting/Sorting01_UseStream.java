import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int rowOfCommands = commands.length;
        int[] answer = new int[rowOfCommands];

        for(int indexOfRow = 0; indexOfRow < rowOfCommands; indexOfRow++) {
            int i = commands[indexOfRow][0];
            int j = commands[indexOfRow][1];
            int k = commands[indexOfRow][2];

            List<Integer> portionOfArrayList = new ArrayList<Integer>();
            int[] portionOfArray = Arrays.copyOfRange(array, i-1, j);
            portionOfArrayList = Arrays.stream(portionOfArray).boxed().collect(Collectors.toList());
            Collections.sort(portionOfArrayList);

            answer[indexOfRow] = portionOfArrayList.get(k-1).intValue();
        }
        return answer;
    }
}