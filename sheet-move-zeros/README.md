# Move Zeros to the End

Beginner | dsa-sheet | arrays | array-basics

Return a new list where every `0` has been moved to the **end**, and all other values keep their original relative order. Do not change `nums`.

### Examples

**Example 1**

Input:

```python
move_zeros([0, 1, 0, 3, 12])
```

Output:

```text
[1, 3, 12, 0, 0]
```

**Example 2**

Input:

```python
move_zeros([0, 0])
```

Output:

```text
[0, 0]
```

### Constraints

- `0 <= len(nums) <= 3 * 10**5`
- `-10**9 <= nums[i] <= 10**9`
