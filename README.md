# tipscodingclub
Algorithmic Assignment of coding club :-

Q1. Palindrome Number:-
    Given an integer x, return true if x is a palindrome, and false otherwise.
    Intuition
    First, we have to understand what is meant by a "PALINDROME" number.
    Suppose we have a number 'x'. If we REVERSE x and store it in 'y' then x and y should be EQUAL. 
    Mathematically, x is palindrome if x = y where y = reverse of x.
    Example 1:
    Let x = 123,
    then y = reverse of x = 321;
    Since, 123 != 321, Hence, x is not palindrome.
    Example 2:
    Let x = 1221,
    then y = reverse of x = 1221;
    Since 1221 == 1221, Hence, x is palindrome
    
Q2. Transpose Of Matrix
    Given a 2D integer array matrix, return transpose of matrix. 
    The transpose of matrix is the matrix flipped over its main diagonal, switching the matrix's 
    row and column indices.
 
    Here indices refer to index.
 
    Example 1:
    Input: Matrix = [ [1,2,3] , [-4,5,6] , [7,8,9] ]
    Output: [ [1, -4,7], [2,5,8] ,[3,6,9] ]
    Example 2:
    Input: Matrix = [ [3,3,3] , [-6,6,6] , [9,9,9] ]
    Output: [ [3,-6,9], [3,6,9] ,[3,6,9] ]

Q3. Armstrong Number
    Given an integer x, return true if x is a ARMSTRONG NUMBER, and false otherwise.
    But you have to take x as 3 Digits number, Armstrong number of three digits is an integer such 
    that the sum of the cubes of its digits is equal to the number itself. 
    Intuition
    First, we have to understand what is meant by an "Armstrong" number.
    Suppose we have a number ‘x’. We will divide the given 3Digit number by the 10 until it becomes 
    zero, find the remainder by taking the mod of the number using 10, & multiply remainder 3x 
    therefore total number of digits in the number is 3 & result store in variable so we need to store 
    number in the variable that’s why original number will become zero end. If the number is Armstrong 
    so we will store on result container otherwise discarded.
    Example 1: 
    Input: N = 123
    Output: “ True”
    Explanation: 123 is an Armstrong Number
    Since 13 + 23+ 33 = 123.
    Example 2: 
    Input: N = 172
    Output: “ False”
    Explanation: 172 is an Not Armstrong Number
    Since 13 + 73+ 23 != 123.
    
Q4. The Dragon Eggs
    Time Limit: 1 sec
    Memory Limit: 128000 kB
    Problem Statement
    Daemon has 2 dragon eggs, one is made of A grams of Gold and the other is made of B 
    grams of Silver.
    We know that gold costs G coins per 
    gram and silver costs S coins per 
    gram. You need to determine which 
    of the two dragon eggs are more 
    valuable.
    Input
    The input contains 4 spaceseparated integers G, S, A, B.
    Output
    Print "Gold" (without quotes) if the gold egg costs equal to or more than the silver egg. 
    Otherwise, print "Silver" (without quotes).
    Note that the output is case-sensitive.
    Example:
    Sample Input 1:
    5 4 4 5
    Sample Output 1:
    Gold
    Sample Input 2:
    1 1 2 3
    Sample Output 2:
    Silver

Q5. Mex of 2
    Time Limit: 1 sec
    Memory Limit: 128000 kB
    Problem Statement
    You are given two non-negative integers, A and B. You are required to print the smallest 
    non-negative integer such that it is not equal to both A and B.
    Input
    The input consists of two space 
    separated integers A and B.
    Output
    Print a single integer denoting 
    the answer.
    Example:
    Sample Input 1:
    0 1
    Sample Output 1:
    2
    Sample Input 2:
    4 5
    Sample Output 2:
    0
    
