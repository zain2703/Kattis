# Kattis 

### Shibuyacrossing.cpp
https://open.kattis.com/problems/shibuyacrossing

In this problem using topological sorting(https://www.geeksforgeeks.org/topological-sorting/) starting with connection having least number of connections. once we have the nodes according to their connections. we will use the lis algorithm(https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/) which just find the longest increasing sequence and thats our largest group.

The task3.c and task3.cpp simply finds the maximum clique but they are using tree structure which will fail due to "exceeded memory" flag.

### PolishNotation.py
https://open.kattis.com/problems/polish

Polish Notation starts computing when we have one operator and two operands. For this solution using recursion to get to last element of expression and then start computing from the end if the operator is followed by two numbers.

I also tried three different solutions with 3,2,1 vector array in polish.cpp file they are working but the pop() time is very time consuming you just need to merge whole expreseeion after every evaluation in a string.

### TourDeFrance.cpp
https://open.kattis.com/problems/tourdefrance

IN this problem we ave to calcuate the maxmum spread between drive ratios. My solution getting input sperately for rear and front spokes diving them to find the n/m angular velociety to the pedal n/m. Then using the anuglar velociety to find the drive ratio between them afte this just rint the maximum.


### conundrum.c
https://open.kattis.com/problems/conundrum

In this problem we need to replace crypted text with "per" and he is changing each character per day. We have 3 characters using modulus operator with 3 and and a check if its same character don't change. 

### ANewAlphabet.c
https://open.kattis.com/problems/anewalphabet

In this problem having one string which is having all new alphabets stored. Comparing that word and prinitng that part of string by giving its positon and length.


