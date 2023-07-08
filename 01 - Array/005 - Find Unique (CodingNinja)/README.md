# [Find Unique](https://www.codingninjas.com/studio/problems/find-unique_625159 "Click Here to Solve")

## Problem Statement

You have been given an integer array/list `ARR` of size `N`, where `N` is equal to `2M + 1`.

In the given array/list, 'M' numbers are present twice, and one number is present only once.

* **`You need to find and return the number which is unique in the array.`**

**Note:** The unique element is always present in the array/list according to the given condition.

## Input Format

The first line contains an integer `t` which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains an integer `N` representing the size of the array/list.

The second line contains `N` space-separated integers representing the elements in the array/list.

## Output Format

For each test case, print the unique element present in the array.

Output for every test case will be printed in a separate line.

## Constraints

- `1 <= t <= 10^2`
- `0 <= N <= 10^3`
- `Time Limit: 1 sec`



## Sample Input/Output

**Sample Input 1:**

```
1
7
2 3 1 6 3 6 2
```

**Sample Output 1:**

```
1
```

**Sample Input 2:**

```
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
```

**Sample Output 2:**

```
4
10
```

---
## Problem Link

[Find Unique](https://www.codingninjas.com/studio/problems/find-unique_625159)

---

## Approach and Code

To solve this problem, we can use the `XOR operator`, which has the property of returning 0 when applied twice to the same number.

Bitwise XOR (^):

The bitwise XOR (exclusive OR) operator compares the corresponding bits of two operands.

* It returns 1 if the bits are different; otherwise, it returns 0 when bits are same.


```cpp
int findUnique(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++) {
		ans = ans^arr[i];
	}
        return ans;
}
```

## Complexity Analysis

The time complexity for this approach is `O(N)`, where N is the size of the array in each test case.

The space complexity is `O(1)`, as we are using a constant amount of extra space.