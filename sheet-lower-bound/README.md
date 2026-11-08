# Lower Bound

Beginner | dsa-sheet | binary-search | searching-a-sorted-list

`nums` is sorted in non-decreasing order and may contain repeated values. Return the **first index** `i` with `nums[i] >= target`. If every value is smaller than `target`, return `len(nums)`.

This is where `target` would be **inserted** to keep the list sorted, before any equal values.

### Examples

**Example 1**

Input:

```python
lower_bound([1, 2, 2, 2, 5], 2)
```

Output:

```text
1
```

The first `2` is at index 1.

**Example 2**

Input:

```python
lower_bound([1, 3, 5], 6)
```

Output:

```text
3
```

Every value is smaller than 6, so the answer is the length, 3.

### Constraints

- `0 <= len(nums) <= 2 * 10**5`
- `nums` is sorted in non-decreasing order.
- `-10**9 <= nums[i], target <= 10**9`
- The big tests count how many values your code reads from the list (the limit is stated in the failure message). Reading every value, or using `in`, `.index`, `.count`, `min` or `sorted` on the whole list, fails them.
