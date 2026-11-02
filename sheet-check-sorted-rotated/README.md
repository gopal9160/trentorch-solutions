# Sorted, Maybe Rotated

Beginner | dsa-sheet | arrays | array-basics

Return `True` if `nums` is **sorted in non-decreasing order, possibly after rotating it**. A rotation moves some values from the front to the back without changing their order, so `[3, 4, 5, 1, 2]` is the sorted list `[1, 2, 3, 4, 5]` rotated. A list that is already sorted counts, and so does a list of equal values.

### Examples

**Example 1**

Input:

```python
check_sorted_rotated([3, 4, 5, 1, 2])
```

Output:

```text
True
```

It is `[1, 2, 3, 4, 5]` rotated by 2.

**Example 2**

Input:

```python
check_sorted_rotated([2, 1, 3, 4])
```

Output:

```text
False
```

It drops twice (2 to 1, and 4 back to 2).

### Constraints

- `1 <= len(nums) <= 3 * 10**5`
- `-10**9 <= nums[i] <= 10**9`
