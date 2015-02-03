##Keith’s amazing revised edition of Myles’ intro to C++ handout

###Intro
Eh, good enough...

Basically programs are things that are filled with conditions and logic (using if and else) that act upon data (input) to provide an output or result.

###Data Types

The basic data types include: **bool**, **char**, **int**, **long**, **float**, and **double**.

A **bool**, also known as a **boolean**, can hold the values of true or false.

So if you did something like this
```
bool goodScore = true;
```
That sets a **boolean** variable named **goodScore** to the value **true**.

A **char**, is meant to hold a single character such as 0 through 9 and a - z.
```
char letterGrade = 'A';
```

This would create a **char** variable named **letterGrade** with the value of **'A'**
- One thing to note is in the **bool** example, we didn't have to surround the word with double/single quotes.
- For chars, it is a standard (in most languages) that their values are surrounded with single quotes.

An **int** is meant to hold a 32 bit number(integer). The max value it can hold is 2,147,483,648 (that number might look familiar if someone has hacked a score, money, etc. in a game) which is 2^31.
```
int grade = 95;
```

So why 32 and not 31?

For now, just go with 32 bit integers have a max value of 2,147,483,648. Later on, you might learn about signed bits/signed ints and then it'll make more sense but let's not overcomplicate things yet :)

