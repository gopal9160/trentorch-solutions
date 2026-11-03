# Longest Subarray With Sum K

Intermediate | dsa-sheet | arrays | array-basics

`nums` contains only values that are `0` or more. Return the length of the **longest contiguous run** of values that adds up to exactly `k`, or `0` if no run does.

A simple solution tries every start and end. It is correct but too slow for long lists. Make it fast.

### Examples

**Example 1**

Input:

```python
longest_subarray_sum_k([1, 2, 3, 1, 1, 1, 1], 3)
```

Output:

```text
3
```

The run `[1, 1, 1]` and the run `[1, 2]` both add to 3, but `[1, 1, 1, 1]` has sum 4, so the longest with sum 3 has length 3.

**Example 2**

Input:

```python
longest_subarray_sum_k([2, 4, 6], 5)
```

Output:

```text
0
```

No run adds to 5.

### Constraints

- `0 <= len(nums) <= 2 * 10**5`
- `0 <= nums[i] <= 10**4`
- `0 <= k <= 10**9`
