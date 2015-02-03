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
```#include <iostream>``` - #include is a preprocessing directive that tells the preprocessor (when you compile your program) to basically copy and paste the contents of the file ```iostream``` into your program.

```iostream``` - is what allows you to use the ```cout``` and ```cin``` stuff to ```in```put and ```out```put data.

```iomanip``` - lets you do the ```setw``` and ```setprecision``` things.

```using namespace std``` - In C++, there are things called namespaces that just better organize your code.

===

Let's say you want to share your program with other people for them to use in their programs.

Maybe you both have a **function** called **add** but they both do different things.

If they were to include your program using something like ```#include "prgm.h"```, one of the **add** functions would end up overwriting the other.

To prevent this from happenening, you can encapsulate your add function with something like ```namespace myThing { }```

So now to access your add function, the other guy that wants to use your program would have to do something like ```myThing::add``` instead of plain old ```add```;

Finally, since we use cout and cin a lot, you can add a ```using namespace std``` at the top of your program to save time from having to type ```std::cout``` and ```std::cin``` all the time.

The same thing could be done with your add function with something like ```using namespace myThing```. And then you could access your add function with just ```add```, however we'd have that problem of there being two ambiguous add functions.

===

```int main(void) {``` - This is your main that contains everything your program does. For now, just ignore the **int** and **void** parts.

```int x, y;``` - Initializes variables called x and y as ints. They don't have values yet, but since they have been initialized, you can now use them in the program later.

```cout << "Enter two integers";``` - This outputs the text ```Enter two integers```.

```cin >> x >> y;``` - Waits for the user to type something in and press enter. When the user presses enter, it'll store whatever they typed in into the variable **x**. And then it'll wait for the user to type something else and press enter which will in turn store whatever they typed in into the variable **y**.

```cout << "First number in decimal " << x << " in hex " << hex << x << endl;``` - Outputs ```First number in decimal ``` and then the value of the variable **x** followed by ``` in hex ```.
The ```hex``` part is actually from iomanip and all it does is display your ints in base 16/hexadecimal...
####Quick lesson
==
We count in base 10 which has digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

Base 16/hexadecimal has 16 digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

So **10** in base 10 is **A** in hex.

**15** in base 10 is **F** in hex.

And **16** in base 10 is **10** in hex.

==
So continuing from before, the ```hex``` part just means that it'll start displaying integers in base16 instead of base10.

So it outputs your **x** variable in base16 and then ends it with ```endl``` which means "end line" basically which is basically a line break/return/enter key press basically :)

```float a, b;``` - Initializes two floats with no values for later use

```cout << "Enter 2 real numbers";``` - Outputs ```Enter 2 real numbers```

```cin >> a >> b;``` - Accepts the input and stores them in the variables just like the previous ints(```cin >> x >> y;```).

```cout << fixed << setprecision(2);``` - fixed and setprecision are both from ```iomanip``` and just make the number fixed and have 2 decimal points of precision.

```cout << "The sum is " << setw(7) << a + b << endl;``` - Outputs ```The sum is ``` and then sets the width of the next part to 7. It then outputs the sum of variable **a** and **b** with a minimum of 7 columns of space followed by an end line.

```return 0;``` - Just tells the OS that no error occured. Not really important for now...
