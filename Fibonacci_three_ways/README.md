# Bitnine
## Apache AGE Internship 2023
Coding Test Question 2, Backend
Three ways to solve a function

Coding Test Question 2, Backend **Implement function using three ways and describe the advantages and disadvantages.

This project is coded in one file "main.c", running in Console for C language. All what was used for development was the compiler and Codeblocks IDE.

### How to Compile source code?
This project is a one single file code, should be easy to compile and run

First download the source code from the repository.

#### For terminal execution:
1. Open your terminal.
2. Run the command ‘gcc -v’ to check if you have a compiler installed. If not you need to download a gcc compiler and install it. 
3. Change the working directory to where you have your C program "main.c".
4. The next step is to compile the program. To do this we need to use the command gcc followed by the name of the program we are going to execute. e.g., "gcc -o program.exe main.c"
5. After this, an executable file will be created in the directory that your c file exists in.
6. In the next step, we can run the program. This is done by simply giving the name of the executable file without any extension. On giving this we will get an output. Here, our Armstrong code is executed and we got output for this code.



#### Or open the file with your prefered IDE/Text Editor
Download all the repository files.
Here you just need to create a project for C, and run the program. 
No inputs from the console are required. 
You can run the program from Codeblocks through excecuting file "fibonacci.cbp".




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



