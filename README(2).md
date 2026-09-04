# C++ OOP Practical: Pointers, References & Dynamic Memory

## Aim
1. Implement pointers and references using a real-life student marks example.
2. Implement dynamic memory allocation and deallocation using `new[]` and `delete[]` with product-price data.

## Programs

### Program A — Pointers and References
File: `pointers_references.cpp`

Real-life context: a student's marks are updated using:
- a pointer (`int *marksPtr`)
- a reference (`int &marksRef`)

### Program B — Dynamic Memory
File: `dynamic_memory.cpp`

Real-life context: a shop may have a variable number of products. The program dynamically allocates an array of product prices using `new[]`, calculates the total and average, and releases the array using `delete[]`.

## Sample Output

### Program A
```text
Enter student name: Asha
Enter initial marks: 65

Initial marks: 65
Address stored in pointer: 0x...
Marks after pointer update: 78
Marks after reference update: 85

Student: Asha
Final marks: 85
```

### Program B
```text
Enter number of products: 3
Enter prices of 3 products:
Product 1: 100
Product 2: 250
Product 3: 150

Total price: Rs. 500.00
Average price: Rs. 166.67
Dynamic memory released successfully.
```

## Compilation
These programs can be compiled using Dev-C++ or any standard C++ compiler.

Example:
```bash
g++ pointers_references.cpp -o pointers_references
g++ dynamic_memory.cpp -o dynamic_memory
```

## Files to upload to GitHub
- `pointers_references.cpp`
- `dynamic_memory.cpp`
- `README.md`
- Sample input/output
- Dev-C++ screenshots/results

## Concepts Demonstrated
- Pointer declaration and dereferencing
- Address-of operator `&`
- Reference declaration
- Passing data using pointers and references
- Runtime allocation using `new[]`
- Memory release using `delete[]`
- Setting a pointer to `nullptr` after deletion
