# Search Algorithm Time Analysis

## 📌 Project Description
This project measures and compares execution time of:

- Linear Search
- Binary Search

Time is measured for input sizes from:
10,000 to 100,000

---

## 🛠 Technologies Used
- C Programming
- GCC Compiler
- Linux Time Functions (gettimeofday)

---

## 📂 Files

| File Name | Description |
|---|---|
| linear_search_time.c | Measures execution time of Linear Search |
| binary_search_time.c | Measures execution time of Binary Search |

---

## ▶ How to Compile

### Linear Search
```bash
gcc linear_search_time.c -o linear
./linear
```
### Binary Search
```bash
gcc binary_search_time.c -o binary
./binary
```
---
## 📈 Observation

### Linear Search → Time increases with input size (O(n))

### Binary Search → Time increases very slowly (O(log n))

