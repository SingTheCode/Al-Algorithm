import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int rowOfCommands = commands.length;
        int[] answer = new int[rowOfCommands];

        for (int indexOfCommandsRow = 0; indexOfCommandsRow < rowOfCommands; indexOfCommandsRow++) {
            int i = commands[indexOfCommandsRow][0];
            int j = commands[indexOfCommandsRow][1];
            int k = commands[indexOfCommandsRow][2];
            ArrayList<Integer> portionOfArray = new ArrayList<Integer>();

            for (int indexOfPortionArray = i - 1; indexOfPortionArray < j; indexOfPortionArray++) {
                portionOfArray.add(array[indexOfPortionArray]);
            }

            Collections.sort(portionOfArray);
            answer[indexOfCommandsRow] = portionOfArray.get(k - 1).intValue();
        }
        return answer;
    }
}