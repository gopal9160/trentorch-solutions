# Union of Two Sorted Lists

Beginner | dsa-sheet | arrays | array-basics

`a` and `b` are each sorted in non-decreasing order and may contain repeated values. Return a sorted list containing every value that appears in `a` **or** `b`, each exactly once.

### Examples

**Example 1**

Input:

```python
union_sorted([1, 2, 2, 4], [2, 3, 4, 5])
```

Output:

```text
[1, 2, 3, 4, 5]
```

**Example 2**

Input:

```python
union_sorted([], [1, 1])
```

Output:

```text
[1]
```

### Constraints

- `0 <= len(a), len(b) <= 2 * 10**5`
- Both lists are sorted in non-decreasing order.
