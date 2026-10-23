# Traffic Signal Simulation Using Greedy Algorithm

## Project Overview

The Traffic Signal Simulation Using Greedy Algorithm is a C++ project that simulates traffic signal management at a four-way intersection.

The program takes the number of vehicles waiting in the North, South, East, and West lanes as input. It uses a greedy algorithm to select the lane with the maximum number of vehicles and gives that lane a green signal.

The program also provides emergency priority to a selected lane. After clearing a lane, it displays the remaining vehicles and continues until all lanes are cleared.

## Objectives

- To simulate traffic signal management at a four-way intersection.
- To implement the greedy algorithm for selecting the lane with the maximum number of vehicles.
- To provide priority to emergency vehicles.
- To display the remaining vehicles after each signal cycle.
- To understand the practical application of greedy algorithms.

## Technologies Used

- Programming Language: C++
- Header Files: iostream, string, algorithm
- Algorithm: Greedy Algorithm

## Working of the Project

1. The program accepts the number of vehicles in the North, South, East, and West lanes.
2. The user enters the emergency lane number.
3. The program checks whether the emergency lane has vehicles.
4. If an emergency lane is available, it receives priority.
5. Otherwise, the lane with the maximum number of vehicles is selected.
6. The selected lane receives a green signal.
7. All vehicles in that lane are cleared.
8. The remaining vehicles in all lanes are displayed.
9. The process continues until all lanes are cleared.

## Algorithm

1. Start the program.
2. Input the number of vehicles in all four lanes.
3. Input the emergency lane.
4. Initialize the lane names and vehicle counts.
5. Check whether vehicles are remaining.
6. If an emergency lane is selected and contains vehicles, give it priority.
7. Otherwise, find the lane with the maximum number of vehicles.
8. Give the selected lane a green signal.
9. Clear the selected lane.
10. Display the remaining vehicles.
11. Repeat the process until all lanes are cleared.
12. Stop the program.

## Greedy Algorithm

The greedy algorithm selects the lane with the maximum number of vehicles at each step.

For example, consider the following vehicle counts:

| Lane | Number of Vehicles |
|---|---|
| North | 10 |
| South | 5 |
| East | 8 |
| West | 3 |

The algorithm first selects the North lane because it has the maximum number of vehicles.

After clearing the North lane, the algorithm selects the next lane with the highest vehicle count.

This process continues until all lanes are cleared.

## Emergency Priority

The program allows the user to select an emergency lane.

The available options are:

- 1 for North
- 2 for South
- 3 for East
- 4 for West
- -1 for No Emergency

If the selected emergency lane contains vehicles, it receives priority for one signal cycle.

## Sample Input

    Enter vehicles in North lane: 10
    Enter vehicles in South lane: 5
    Enter vehicles in East lane: 8
    Enter vehicles in West lane: 3

    Enter emergency lane: 4

## Sample Output

    Emergency detected! Giving priority to West lane.

    Green Signal -> West lane
    Vehicles before: 3
    Lane Cleared!

    Remaining vehicles: N=10 S=5 E=8 W=0

    Green Signal -> North lane
    Vehicles before: 10
    Lane Cleared!

    Remaining vehicles: N=0 S=5 E=8 W=0

    Green Signal -> East lane
    Vehicles before: 8
    Lane Cleared!

    Remaining vehicles: N=0 S=5 E=0 W=0

    Green Signal -> South lane
    Vehicles before: 5
    Lane Cleared!

    Remaining vehicles: N=0 S=0 E=0 W=0

    All lanes cleared. Traffic Flow Smooth!

## Time and Space Complexity

Time Complexity: O(n²)

The program scans all lanes in each iteration to find the lane with the maximum number of vehicles.

Space Complexity: O(n)

The program stores the vehicle counts and lane names in arrays.

Here, n represents the number of lanes. Since the program uses four lanes, the number of lanes is fixed.

## Future Enhancements

- Implement real-time vehicle detection using cameras.
- Add adaptive traffic signal timing.
- Integrate image processing for automatic vehicle counting.
- Add pedestrian crossing management.
- Implement priority handling for multiple emergency vehicles.
- Develop a graphical user interface for better visualization.

## Learning Outcomes

- Understanding the basics of C++ programming.
- Learning how to use arrays, loops, and conditional statements.
- Implementing greedy algorithms.
- Understanding input validation.
- Applying algorithms to real-world traffic management problems.

## Author

Jeel Patel

## License

This project is developed for educational purposes.
