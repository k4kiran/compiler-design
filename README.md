# compiler-design
s7 cs lab

## **Lab Cycle**

EXPERIMENTS


1. Design and implement a lexical analyzer for given language using C and the lexical

analyzer should ignore redundant spaces, tabs and new lines.



2.Write program to design of lexical analyzer using LEX

  i) Write a program to check whether the given string is valid according to the

regular definition 0 (10 | 01)*.

ii) Write a program to list the identifiers from a given C program.



3. Write program to design parser for arithmetic expressions using YACC

i) Write a program to check the syntax of switch statement in C.

ii) Program to recognize a valid arithmetic expression that uses operator +, – , * and /.

iii) Program to recognize a valid variable which starts with a letter followed by any
number of letters or digits

iv) Write a program to implement arithmetic calculator.



4. Write program to design recursive descent parser

5.Write a program to simulate FIRST and FOLLOW of any given grammar.

6.Write program to implement LL (1) parser

7.Write program to implementation of Operator precedence parsing 3

8.Write a program to perform constant propagation. 3

9. Write program to generate Intermediate Code for arithmetic expressions 3

10. Write program to design a code generator for arithmetic expressions. 3

11. Write program to find ε – closure of all states of any given NFA with ε transition. 



Lab In-charges

1.Ms Jincy J Fernandez(S7 CS A)

2.Ms Meera M(S7 CS B)

3.Mr Hareesh M J(S7 CS C)



### **How to compile**

**_lex pgm.l_**

**_yacc -d pgm.y_**

**_gcc y.tab.c lex.yy.c_**

**_./a.out_**
