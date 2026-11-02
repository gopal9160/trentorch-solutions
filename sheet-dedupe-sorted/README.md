# Remove Duplicates From Sorted

Beginner | dsa-sheet | arrays | array-basics

`nums` is sorted in non-decreasing order. Return a new list with each value kept **once**, still in order. Do not use `set`: use the fact that the list is sorted.

### Examples

**Example 1**

Input:

```python
dedupe_sorted([1, 1, 2, 2, 2, 3])
```

Output:

```text
[1, 2, 3]
```

**Example 2**

Input:

```python
dedupe_sorted([4, 4, 4])
```

Output:

```text
[4]
```

### Constraints

- `0 <= len(nums) <= 3 * 10**5`
- `nums` is sorted in non-decreasing order.
