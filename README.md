# 💻 C++ EXPERIMENTS

A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

## 👨‍🎓 Student Information

- **Name:** Updesh Arora  
- **PRN:** 24070123124  
- **Branch:** ENTC  
- **Class:** B-3

---
# Experiment 9 – Understanding and Implementing Pointers in C++

## Aim
To study and implement the concept of pointers in C++ and apply them in simple programs such as reversing an array.

## Apparatus Required
- Computer with C++ compiler (e.g., GCC, Turbo C++, Turbo C++)
- Basic knowledge of C++ programming

## Theory
A pointer is a variable that stores the memory address of another variable.  
In C++, pointers are powerful tools that can be used to:
- Access and modify variables indirectly.
- Traverse arrays efficiently.
- Allocate memory dynamically.
- Pass data to functions without copying.

### Key Points about Pointers
1. **Declaration**:  
   ```cpp
   int *p;
   ```
   Here, `p` is a pointer to an integer.

2. **Initialization**:  
   ```cpp
   int a = 5;
   p = &a;
   ```

3. **Dereferencing**:  
   ```cpp
   cout << *p;
   ```

4. **Pointers with Arrays**:  
   The name of an array acts as a pointer to its first element.  
   ```cpp
   int arr[3] = {1, 2, 3};
   int *ptr = arr;
   ```

## Algorithm – Reversing an Array Using Pointers
1. Start the program.
2. Declare an array of fixed size (e.g., 5 elements).
3. Use a loop to input elements from the user.
4. Display the array in normal order using a loop.
5. Declare a pointer and make it point to the last element of the array.
6. Use a loop to print elements from last to first by decrementing the pointer in each iteration.
7. End the program.


}
```

## Conclusion
Pointers in C++ allow direct memory access and manipulation, making programs more efficient and flexible. They are especially useful for array operations, dynamic memory allocation, and efficient function argument passing.
