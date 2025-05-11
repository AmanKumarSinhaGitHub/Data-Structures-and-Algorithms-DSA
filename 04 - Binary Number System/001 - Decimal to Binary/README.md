# Decimal to Binary

[Problem Link → CodeChef](https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU6)

---

## 📝 Problem Statement

Given a decimal number `N`, convert it into **binary representation** and print the result (without any prefix like `0b`).

---

### ✅ Input

* A single integer `N` (0 ≤ N ≤ 10⁵)

### ✅ Output

* A single line containing the binary representation of `N`

---

### 🧪 Sample Cases

**Input 1:**

```
28
```

**Output 1:**

```
11100
```

**Input 2:**

```
21
```

**Output 2:**

```
10101
```

---

## 🔄 Conversion Logic

To convert **Decimal → Binary** manually:

1. Divide the number by 2.
2. Record the remainder.
3. Repeat the division with the quotient until it becomes 0.
4. The binary is the reverse of all remainders.

**Example for 21:**

| Step   | Quotient | Remainder |
| ------ | -------- | --------- |
| 21 ÷ 2 | 10       | 1         |
| 10 ÷ 2 | 5        | 0         |
| 5 ÷ 2  | 2        | 1         |
| 2 ÷ 2  | 1        | 0         |
| 1 ÷ 2  | 0        | 1         |

**Reverse of remainders:** `10101`

