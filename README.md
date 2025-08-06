# 📘 Expt-7: Arrays and Strings in C++

## 🎯 Aim

To implement various operations on arrays and strings using C++. The programs demonstrate basic concepts like element access, searching, sum/average, and string manipulation.

---

## 📚 Theory

Arrays and strings are fundamental data structures in C++:

- An **array** is a collection of elements of the same data type stored at contiguous memory locations.
- A **string** is a sequence of characters terminated by a null character (`\0`) in C-style or handled using the `string` class in C++ STL.

These programs help understand the use of loops, conditionals, and built-in C++ functionalities for handling data in structured formats.

---

## 🧮 Algorithms / Steps

### 1. **Printing Array Elements**
- Declare and initialize the array.
- Loop through the array using a `for` loop.
- Print each element.

### 2. **Find a Number in Given Array**
- Take an array and a target number as input.
- Loop through the array and compare each element with the target.
- If matched, print "Found"; else print "Not Found".

### 3. **Sum and Average of Array Elements**
- Initialize `sum = 0`.
- Traverse array and add elements to `sum`.
- Calculate average = `sum / total number of elements`.

### 4. **Find Minimum and Maximum Number**
- Initialize `min` and `max` with the first element.
- Traverse the array:
  - If `element < min`, update `min`.
  - If `element > max`, update `max`.

### 5. **Different Ways to Declare and Initialize a String**
- C-style: `char str[] = "Hello";`
- C++ STL: `string str = "Hello";`
- Using user input: `cin >> str;` or `getline(cin, str);`

### 6. **Concatenation of Strings**
- Using `+` operator: `string s3 = s1 + s2;`
- Using `append()` function: `s1.append(s2);`

### 7. **Printing String in Reverse**
- Loop from the end of the string to the beginning.
- Print each character in reverse order.

### 8. **Palindrome Checking**
- Take a string input.
- Compare characters from both ends moving inward.
- If all corresponding characters match, it is a palindrome.

---

## ✅ Conclusion

This experiment gives hands-on practice with arrays and strings in C++, enhancing understanding of how to manipulate and process data using core language constructs. These basic operations are foundational for higher-level data processing and algorithm development.

---

## 🧵 Topics Covered

- 1D Arrays: Traversal, Searching, Summing, Min/Max
- String Declaration and Initialization
- String Concatenation
- String Reversal
- Palindrome Logic
- Use of Loops and Conditional Statements
- C-style and STL `string` handling
