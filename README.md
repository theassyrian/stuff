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

An **int** is meant to hold a 32 bit number(integer). The max value it can hold is 2,147,483,647 (that number might look familiar if someone has hacked a score, money, etc. in a game) which is 2^31-1.
```
int grade = 95;
```

So why 32 and not 31?

For now, just go with 32 bit integers have a max value of 2,147,483,647. Later on, you might learn about signed bits/signed ints and then it'll make more sense but let's not overcomplicate things yet :)

A **long** is basically the same thing as an **int** except it has double the memory (64 bits). This means that it can hold a max value of 2^63-1 (9,223,372,036,854,775,807).
```
long idk = 32139879382472398
```

A **float** is 32 bit like an int but it can hold floating points.
```
float temperature = 98.6;
```

A **double** is 64 bit like a long and can hold floating points that are too big for floats.
```
double blah = 98.6;
```

###main
main is the thing that is ran when you execute a program. You place all your program logic into main.

But what exactly do all of the things in main mean?

Main example from your handout:
```
#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int x, y;
    cout << "Enter two integers";
    cin >> x >> y;
    cout << "First number in decimal " << x
        << " in hex " << hex << x << endl;
    float a, b;
    cout << "Enter 2 real numbers";
    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << "The sum is " << setw(7) << a + b << endl;
    return 0;
}
```
```#include <iostream>``` #include is a preprocessing directive that tells the preprocessor (when you compile your program) to basically copy and paste the contents of the file ```iostream``` into your program.

```iostream``` is what allows you to use the ```cout``` and ```cin``` stuff to ```in```put and ```out```put data.

```iomanip``` lets you do the ```setw``` and ```setprecision``` things.

```using namespace std``` In C++, there are things called namespaces that just better organize your code.

Let's say you want to share your program with other people for them to use in their programs.

Maybe you both have a **function** called **add** but they both do different things.

If they were to include your program using something like ```#include "prgm.h"```, one of the **add** functions would end up overwriting the other.

To prevent this from happenening, you can encapsulate your add function with something like ```namespace myThing { }```

So now to access your add function, the other guy that wants to use your program would have to do something like ```myThing::add``` instead of plain old ```add```;

Finally, since we use cout and cin a lot, you can add a ```using namespace std``` at the top of your program to save time from having to type ```std::cout``` and ```std::cin``` all the time.

The same thing could be done with your add function with something like ```using namespace myThing```. And then you could access your add function with just ```add```, however we'd have that problem of there being two ambiguous add functions.
