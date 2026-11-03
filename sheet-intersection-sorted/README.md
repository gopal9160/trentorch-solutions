# Common Values of Two Sorted Lists

Beginner | dsa-sheet | arrays | array-basics

`a` and `b` are sorted in non-decreasing order. Return a sorted list of the values they **share**, where a value that appears `x` times in `a` and `y` times in `b` appears `min(x, y)` times in the result.

### Examples

**Example 1**

Input:

```python
intersection_sorted([1, 2, 2, 3], [2, 2, 2, 4])
```

Output:

```text
[2, 2]
```

`2` appears twice in `a` and three times in `b`, so it appears twice.

**Example 2**

Input:

```python
intersection_sorted([1, 2], [3, 4])
```

Output:

```text
[]
```

### Constraints

- `0 <= len(a), len(b) <= 2 * 10**5`
- Both lists are sorted in non-decreasing order.
