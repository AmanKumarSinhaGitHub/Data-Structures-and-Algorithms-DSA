# **⏳ Time Complexity - A Beginner's Guide**  

Understanding **time complexity** is essential for writing efficient programs. It helps us measure the **performance** of an algorithm based on the number of operations it performs as input size (`n`) increases.  

---

## **📌 Key Rules of Time Complexity Analysis**  

✅ **Always consider the worst-case scenario.**  
✅ **Ignore constants and lower-order terms.**  
✅ **Focus on how the number of operations grows with `n`.**  

---

## **📊 Notations for Time Complexity**  

| **Notation** | **Meaning**               | **Represents** |
|-------------|-------------------------|---------------|
| **Big-O (O)** | **Upper Bound** (Worst-case) | Max time an algorithm may take |
| **Theta (Θ)** | **Tight Bound** (Average-case) | Typical runtime behavior |
| **Omega (Ω)** | **Lower Bound** (Best-case) | Minimum time an algorithm may take |

**Example:**  
For a **sorted** array search:  
- **O(n)** → Linear search (worst-case).  
- **Θ(log n)** → Binary search (average case).  
- **Ω(1)** → Best case (first element is the target).  

---

## **🚀 Common Time Complexities & Their Meanings**  

| **Time Complexity** | **Description** | **Example** |
|--------------------|---------------|-----------|
| **O(1) - Constant** | Runs in the same time regardless of input size. | Accessing an array element (`arr[i]`) |
| **O(log n) - Logarithmic** | Halves the problem size in each step. | Binary Search |
| **O(n) - Linear** | Runs `n` times. | Loop through an array |
| **O(n log n)** | Common in efficient sorting algorithms. | Merge Sort, Quick Sort |
| **O(n²) - Quadratic** | Nested loops over `n` elements. | Bubble Sort, Selection Sort |
| **O(2ⁿ) - Exponential** | Doubles operations with each input increase. | Recursive Fibonacci |
| **O(n!) - Factorial** | Grows extremely fast. | Brute-force permutations |

---

## **📌 Examples of Time Complexities**  

### **🔹 Example 1: O(n) – Linear Complexity**  
```cpp
for (int i = 0; i < n; i++) {
    // Code runs n times
}
```
**⏳ Complexity:** **O(n)** → Runs `n` times.  

---

### **🔹 Example 2: O(n²) – Quadratic Complexity**  
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // Nested loop runs n * n times
    }
}
```
**⏳ Complexity:** **O(n²)** → Runs `n²` times.  

---

### **🔹 Example 3: O(log n) – Logarithmic Complexity**  
```cpp
for (int i = 1; i < n; i *= 2) {
    // Code runs log(n) times
}
```
**⏳ Complexity:** **O(log n)** → Halves `n` each step.  

---

### **🔹 Example 4: O(n log n) – Merge Sort Complexity**  
```cpp
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
```
**⏳ Complexity:** **O(n log n)** → Efficient sorting.

---

## **📈 Complexity Comparison Chart**  

| **n**    | **O(1)** | **O(log n)** | **O(n)** | **O(n log n)** | **O(n²)** | **O(2ⁿ)** |
|---------|---------|------------|-------|------------|-------|--------|
| **10**  | 1       | 3          | 10    | 30         | 100   | 1024   |
| **100** | 1       | 7          | 100   | 700        | 10,000 | 10³⁰  |
| **1000**| 1       | 10         | 1000  | 10,000     | 1,000,000 | 🔥 |

📌 **Key Takeaways:**  
- **O(1) and O(log n) are best** (fastest).  
- **O(n log n) is optimal for sorting.**  
- **O(n²) or worse should be avoided** for large `n`.  

---

## **🚀 Optimizing Code Using Time Complexity**  

✔ **Use HashMaps** instead of nested loops (from `O(n²) → O(n)`).  
✔ **Use Binary Search** instead of linear search (from `O(n) → O(log n)`).  
✔ **Choose the right sorting algorithm** (`O(n log n)` instead of `O(n²)`).  
✔ **Avoid unnecessary loops** and optimize conditions.  

---

## **📌 Summary**  

🔹 **Time complexity measures how performance changes with input size.**  
🔹 **Big-O gives the worst-case scenario.**  
🔹 **Avoid slow algorithms (O(n²), O(2ⁿ), O(n!)).**  
🔹 **Optimize loops, sorting, and searching techniques.**  

With this guide, you now understand **time complexity** and how to write **efficient** C++ code! 🚀🔥