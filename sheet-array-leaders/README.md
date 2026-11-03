# Leaders in an Array

Beginner | dsa-sheet | arrays | array-basics

A **leader** is a value that is strictly greater than **every value to its right**. The last value is always a leader. Return the leaders in their original left-to-right order.

A simple solution compares each value with everything after it. It is correct but too slow for long lists. Make it fast.

### Examples

**Example 1**

Input:

```python
array_leaders([16, 17, 4, 3, 5, 2])
```

Output:

```text
[17, 5, 2]
```

`17`, `5` and `2` are each bigger than everything to their right.

**Example 2**

Input:

```python
array_leaders([5, 5, 5])
```

Output:

```text
[5]
```

Equal values do not count: only the last `5` is a leader.

### Constraints

- `0 <= len(nums) <= 3 * 10**5`
- `-10**9 <= nums[i] <= 10**9`
