# DSA Basics

## 1. Data Structures

### Array
- A data structure that stores multiple elements of the same type, stored consecutively in memory.
- Access by index: `arr[i]` is `O(1)`.
- Adding/removing at the end is typically `O(1)` if there is free space.
- Adding/removing in the middle or at the beginning requires shifting elements, so it's `O(n)`.

### Linked List
- A list of nodes where each node has a value and a pointer to the next node.
- Not stored consecutively in memory like an array, so the size can be changed more flexibly.
- Accessing an element at any position is `O(n)` because we must traverse from the beginning.
- Adding/removing at the beginning or after a known node is `O(1)`.

### Stack
- Follows LIFO (Last In, First Out) principle: the last element added is the first to be removed.
- Basic operations: `push` (add) and `pop` (remove).
- Examples: undo/redo, checking balanced parentheses, recursive traversal.
- `push/pop` is typically `O(1)`.

### Queue
- Follows FIFO (First In, First Out) principle: the first element added is the first to be removed.
- Basic operations: `enqueue` (add) and `dequeue` (remove).
- Real-world examples: API request queue, MQ, Kafka, message processing systems.
- `enqueue/dequeue` is typically `O(1)`.

### Hash Table
- Stores `key -> value` pairs using a hash function.
- Average access time by key is `O(1)`.
- Main issue: collision (hash clash) when two different keys hash to the same bucket.
- Collision handling: chaining (each bucket is a list) or open addressing.

## 2. Halting Problem
- The Halting Problem: Does there exist a program `H` that can determine whether every program `P` with every input `x` will halt or not?
- Conclusion: No universal algorithm exists to solve this for all cases.
- This is a fundamental problem in computability theory and explains why some problems cannot be automatically solved.

## 3. Algorithm Strategies
- **Brute Force**
  - Try all possible solutions.
  - Simple but usually very slow due to high complexity.
- **Greedy**
  - At each step, choose the best option available at that moment.
  - Doesn't always lead to the globally optimal solution, but is fast and easy to implement.
  - Example: choosing the largest coin for making change (if applicable).
- **Divide & Conquer**
  - Break the large problem into smaller sub-problems, solve each, then combine the results.
  - Examples: Merge Sort, Quick Sort, binary search.

## 4. Quick Summary for Memorization
- `O(1)` — direct access, simple operation.
- `O(log n)` — halve data each step (binary search).
- `O(n)` — one loop through `n` elements.
- `O(n log n)` 
- `O(n^2)` — nested loops.
- `O(2^n)` / `O(n!)` 

## 5. Homework
  - [BinarySearch.cpp](BinarySearch.cpp)
  - [BubbleSort.cpp](BubbleSort.cpp)
  - 3 LeetCode Easy problems:
    + [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/solutions/8197207/9-palindrome-number-by-reine-oeo4)
    + [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/solutions/8197249/longest-common-prefix-by-reine-c1fc)
    + [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/8197262/remove-duplicates-from-sorted-array-by-r-ztub)


