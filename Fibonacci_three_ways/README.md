Bitnine
Apache AGE Internship 2023
Coding Test Question 2, Backend
Three ways to solve a function

Apache AGE Internship 2023
Coding Test Question 2, Backend **Implement function using three ways and describe the advantages and disadvantages.

This project is developed in one file, running in Console for C language. All what was used for development was the compiler and Codeblocks IDE.

How to Compile source code
This project is a one single file code, should be easy to compile and run

First download the source code from the repository.

For terminal execution:
Open the command prompt or terminal Navigate to the directory where the file of the source code is located. Run the compiler command with the appropriate flags and options. e.g., "gcc -o program.exe main.c"

Or open the file with your prefered IDE/Text Editor
Here you just need to create a project for C, and run the program. no inputs from the console are required.



# Discussion for the three methods used

## 1.  Iterative Way

  
  Time complexity:
    -   O(n)
    
  Advantages:
  -   The iterative approach is the most efficient and fastest for large values of inputs (n)

  Disadvantages:
  -   Higher complexity than the Recursive way



## 2.  Recursive Way

  Time complexity:
    -   O(n)
    
  Advantages:
  -   Very simple to implement

  Disadvantages:
  -   Large amounts of repeated calculations
  -   Slowest among the 3. 
  -   Can lead to stack overflow errors for very large values of n.



## 3.  Dynamic Programming Implementation

  Time complexity:
    -   O(n)
    
  Advantages:
  -   Fast performance, as there are no repeated calculations
  -   Memory efficient
  -   Generally faster and
  -   Mre memory-efficient than the recursive approach for very large values of n


  Disadvantages:
  -   Higher complexity compared the other 2 ways
  -   May require too much memory for large n values

In conclusion, for large values of n, the iterative or dynamic programming approach is usually preferred over the recursive approach. Maybe for small values of n, recursive is an easy approach to the developer.



