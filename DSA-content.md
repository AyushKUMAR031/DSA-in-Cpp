# Data Structures and Algorithms (DSA) Topics

## Data Structures

### Arrays
- **Description:** A collection of elements identified by index or key.
- **Use Cases:** Storing data in a linear fashion, quick access to elements by index.

### Linked Lists
- **Singly Linked List:** A linear collection of nodes where each node points to the next node.
- **Doubly Linked List:** Each node points to both the next and the previous node.
- **Circular Linked List:** The last node points back to the first node, forming a circle.

### Stacks
- **Description:** A linear data structure following LIFO (Last In First Out) principle.
- **Use Cases:** Function call management, undo mechanisms in software.

### Queues
- **Simple Queue:** Follows FIFO (First In First Out) principle.
- **Circular Queue:** The last position is connected back to the first.
- **Priority Queue:** Elements are dequeued based on priority.
- **Deque:** Double-ended queue, insertion and removal from both ends.

### Trees
- **Binary Tree:** Each node has at most two children.
- **Binary Search Tree (BST):** A binary tree with ordered nodes.
- **AVL Tree:** A self-balancing binary search tree.
- **Red-Black Tree:** A self-balancing binary search tree with additional properties.
- **B-Trees and B+ Trees:** Balanced tree data structures, generalizations of binary search trees.

### Heaps
- **Min Heap:** The parent node is less than or equal to its children.
- **Max Heap:** The parent node is greater than or equal to its children.

### Hashing
- **Hash Tables:** Store key-value pairs with efficient lookup.
- **Collision Resolution Techniques:** Chaining, Open Addressing.

### Graphs
- **Representation:** Adjacency Matrix, Adjacency List.
- **Traversal:** BFS (Breadth-First Search), DFS (Depth-First Search).
- **Shortest Path:** Dijkstra, Bellman-Ford, Floyd-Warshall.
- **Minimum Spanning Tree:** Kruskal, Prim.

### Tries
- **Description:** A tree-like data structure used for storing strings.

## Algorithms

### Sorting Algorithms
- **Bubble Sort:** Repeatedly swaps adjacent elements if they are in the wrong order.
- **Selection Sort:** Selects the minimum element and swaps it with the current element.
- **Insertion Sort:** Builds the sorted array one item at a time.
- **Merge Sort:** Divides the array into halves, sorts, and merges them.
- **Quick Sort:** Divides and conquers by selecting a pivot and partitioning the array.
- **Heap Sort:** Converts the array into a heap and repeatedly extracts the maximum element.
- **Counting Sort:** Counts the occurrences of each element to sort.
- **Radix Sort:** Sorts numbers by processing individual digits.

### Searching Algorithms
- **Linear Search:** Sequentially checks each element.
- **Binary Search:** Efficiently searches a sorted array by repeatedly dividing the search interval.

### Dynamic Programming
- **Knapsack Problem:** Finds the most valuable subset of items within a weight limit.
- **Longest Common Subsequence:** Finds the longest subsequence common to two sequences.
- **Longest Increasing Subsequence:** Finds the longest increasing subsequence in an array.
- **Fibonacci Sequence:** Computes Fibonacci numbers using dynamic programming.
- **Matrix Chain Multiplication:** Finds the most efficient way to multiply matrices.

### Greedy Algorithms
- **Fractional Knapsack:** Selects items to maximize value without exceeding weight limit.
- **Activity Selection:** Selects the maximum number of activities that don't overlap.
- **Huffman Coding:** Constructs an optimal prefix code for a set of characters.

### Backtracking
- **N-Queens Problem:** Places N queens on an N×N chessboard without attacking each other.
- **Sudoku Solver:** Solves Sudoku puzzles.
- **Subset Sum:** Finds subsets that sum up to a target value.

### Divide and Conquer
- **Merge Sort:** Divides the array, sorts each part, and merges them.
- **Quick Sort:** Partitions the array around a pivot and recursively sorts the partitions.
- **Binary Search:** Divides the search interval to locate an element.

### Graph Algorithms
- **Dijkstra’s Algorithm:** Finds the shortest path from a single source to all other nodes.
- **Bellman-Ford Algorithm:** Finds the shortest path in graphs with negative weights.
- **Floyd-Warshall Algorithm:** Finds shortest paths between all pairs of nodes.
- **Prim’s Algorithm:** Finds the minimum spanning tree using a priority queue.
- **Kruskal’s Algorithm:** Finds the minimum spanning tree using edge sorting.

### String Algorithms
- **Knuth-Morris-Pratt (KMP):** Searches for a substring using a partial match table.
- **Rabin-Karp:** Uses hashing to find a substring.
- **Z Algorithm:** Computes a Z-array to find substrings.
- **Boyer-Moore:** Searches for substrings using mismatched character heuristics.

### Bit Manipulation
- **Description:** Operations involving individual bits for efficient computation.

## Complexity Analysis
- **Time Complexity:** Measures the time an algorithm takes to complete as a function of input size.
- **Space Complexity:** Measures the amount of memory an algorithm uses as a function of input size.
- **Big O Notation:** Describes the upper bound of an algorithm's running time.
- **Big Omega Notation:** Describes the lower bound of an algorithm's running time.
- **Big Theta Notation:** Describes the exact bound of an algorithm's running time.

## Advanced Topics (Optional)
- **Disjoint Set Union (Union-Find):** Data structure to manage a partition of a set.
- **Segment Trees:** Data structure for storing intervals or segments.
- **Fenwick Tree (Binary Indexed Tree):** Data structure to maintain prefix sums.
- **Suffix Trees and Arrays:** Data structures for efficient string operations.
- **Network Flow (Ford-Fulkerson, Edmonds-Karp):** Algorithms for computing the maximum flow in a flow network.
