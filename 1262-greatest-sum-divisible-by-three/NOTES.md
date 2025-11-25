# Thought Process

## Understanding the Problem

We want the largest possible sum of selected numbers from the array such that the sum is divisible by 3. Since removing numbers decreases the sum, we must remove the smallest total amount that fixes the sum's remainder

## Observations

- Every number has remainder 0, 1, or 2 when divided by 3.
- Numbers with remainder 0 are always safe to include.
- If the total sum is not divisible by 3:
  - A sum with remainder 1 can be fixed by removing:
    - one small mod 1 number, or
    - two small mod 2 numbers
  - A sum with remainder 2 can be fixed by removing:
    - one small mod 2 number, or
    - two small mod 1 numbers
- So we only need to track the two smallest numbers with remainder 1 and 2.

## Approach

- Compute total sum
- Track smallest one and two numbers with remainders 1 and 22
- If sum % 3 == 0, return sum
- Otherwise
  - Choose minimum-cost removal among valid options, e.g. one element or two
- Subtract minimal removal cost from sum, which is max sum divisible by 3
