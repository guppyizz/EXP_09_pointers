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
To study and implement the concept of pointers in C++ and demonstrate their use in various operations, including accessing variables, working with arrays, and reversing an array.

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
- Implement data structures like linked lists, trees, and graphs.

### Key Points about Pointers
1. **Declaration**:  
   ```cpp
   int *p;
   ```
   Here, `p` is a pointer to an integer.

2. **Initialization**:  
   ```cpp
   int a = 5;
   p = &a; // p stores the address of a
   ```

3. **Dereferencing**:  
   ```cpp
   cout << *p; // Prints the value stored at the address in p
   ```

4. **Pointers with Arrays**:  
   The name of an array acts as a pointer to its first element.  
   ```cpp
   int arr[3] = {1, 2, 3};
   int *ptr = arr; // same as &arr[0]
   ```

5. **Pointer Arithmetic**:  
   - Increment (`p++`) moves to the next memory location.
   - Decrement (`p--`) moves to the previous memory location.

---

## Algorithm – Accessing Array Elements Using Pointers
1. Start the program.
2. Declare an array and a pointer.
3. Assign the pointer to the first element of the array.
4. Use a loop to display elements by incrementing the pointer.
5. End the program.

---

## Algorithm – Reversing an Array Using Pointers
1. Start the program.
2. Declare an array and take input from the user.
3. Display the array in normal order using a loop.
4. Create a pointer pointing to the last element of the array.
5. Use a loop to display elements from last to first by decrementing the pointer.
6. End the program.

---

## Conclusion
Pointers in C++ allow direct memory access and manipulation, making programs more efficient and flexible.  
They are especially useful for array operations, dynamic memory allocation, and implementing advanced data structures.
