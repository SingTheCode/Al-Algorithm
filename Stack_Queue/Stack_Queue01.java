import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class Stack_Queue01 {
    public static void main(String[] args) {
        int bridge_length = 2;
        int weight = 10;
        int[] truck_weights = {7, 4, 5, 6};

        int answer = bridge_length + truck_weights.length;
        Arrays.sort(truck_weights);

        Queue<Integer> queue = new LinkedList<>();
        for(int i = truck_weights.length - 1; i >= 0; i--) {
            queue.add(truck_weights[i]);
        }

        while(true) {
            int sumOfQueue = queue.stream().mapToInt(i -> i).sum();
            if(weight >= sumOfQueue) {
                break;
            } else {
                queue.remove();
                answer++;
            }
        }

        System.out.println(answer);
    }
}
