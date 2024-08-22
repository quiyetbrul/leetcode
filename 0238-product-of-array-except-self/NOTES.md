# ​Step-by-Step Visualization

The `productExceptSelf` function calculates the product of all elements in the input vector nums except for the element at each index. It does this in two passes:

- First Pass (Left Product):
  - Iterate from left to right, maintaining a running product of all elements to the left of the current index.
  - Update the results array with this running product.

- Second Pass (Right Product):
  - Iterate from right to left, maintaining a running product of all elements to the right of the current index.
  - Multiply the current value in the results array by this running product.

By the end of these two passes, the results array contains the desired products for each index. This approach ensures that the solution runs in O(n) time complexity and uses O(1) extra space (excluding the output array).

## Initialization

```output
nums = [1, 2, 3, 4]
n = 4
results = [1, 1, 1, 1] (initialized with 1s)
leftProduct = 1
rightProduct = 1
```

## First Pass (Left Product)

Iterate from left to right to calculate the product of all elements to the left of each element.

### Iteration 1 (i = 0)

```output
results[0] *= leftProduct → results[0] = 1* 1 = 1
leftProduct *= nums[0] → leftProduct = 1* 1 = 1
results = [1, 1, 1, 1]
```

### Iteration 2 (i = 1)

```output
results[1] *= leftProduct → results[1] = 1* 1 = 1
leftProduct *= nums[1] → leftProduct = 1* 2 = 2
results = [1, 1, 1, 1]
```

### Iteration 3 (i = 2)

```output
results[2] *= leftProduct → results[2] = 1* 2 = 2
leftProduct *= nums[2] → leftProduct = 2* 3 = 6
results = [1, 1, 2, 1]
```

### Iteration 4 (i = 3)

```output
results[3] *= leftProduct → results[3] = 1* 6 = 6
leftProduct *= nums[3] → leftProduct = 6* 4 = 24
results = [1, 1, 2, 6]
```

## Second Pass (Right Product)

Iterate from right to left to calculate the product of all elements to the right of each element.

### Iteration 1 (i = 3)

```output
results[3] *= rightProduct → results[3] = 6* 1 = 6
rightProduct *= nums[3] → rightProduct = 1* 4 = 4
results = [1, 1, 2, 6]
```

### Iteration 2 (i = 2)

```output
results[2] *= rightProduct → results[2] = 2* 4 = 8
rightProduct *= nums[2] → rightProduct = 4* 3 = 12
results = [1, 1, 8, 6]
```

### Iteration 3 (i = 1)

```output
results[1] *= rightProduct → results[1] = 1* 12 = 12
rightProduct *= nums[1] → rightProduct = 12* 2 = 24
results = [1, 12, 8, 6]
```

### Iteration 4 (i = 0)

```output
results[0] *= rightProduct → results[0] = 1* 24 = 24
rightProduct *= nums[0] → rightProduct = 24* 1 = 24
results = [24, 12, 8, 6]
```

## Final Result

```output
results = [24, 12, 8, 6]
```
