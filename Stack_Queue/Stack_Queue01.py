import queue

truckQueue = queue.Queue()

bridge_length = 2
weight = 10
truck_weights = [7, 4, 5, 6]



def solution(bridge_length, weight, truck_weights):
    bridge = []
    overBridge = []
    time = 0

    for weight in truck_weights:
        truckQueue.put(weight)

    while True:
        truckPop = truckQueue.get()

        if truckPop is None:
            time = time + 1
            return time


        truck = truckPop

        if (sum(bridge) + truck < weight):
            bridge.append(truck)
            time = time + 1
            if (len(bridge) == bridge_length):
                overBridge = bridge.pop(0)
                time = time + 1
        else:
            overBridge = bridge.pop(0)
            bridge.append(truck)
            time = time + 2





print(solution(bridge_length, weight, truck_weights))
