# C++ Introduction

1. Install Code Editor - [VS Code](https://code.visualstudio.com/download)
   - Install extension [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
   - Install extension [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
2. Install Compiler - [MingW64](https://sourceforge.net/projects/mingw/)
3. Edit [Environment Variable Path]()

### Hello World Program -

```cpp
// This is comment
#include<iostream>
using namespace std;

/* This is
    multi-line comment
*/
int main() {
    cout<<"Hello World";
    // To print in next line
    cout<<"Hello World"<<endl;

    // Data Types
    int a, b, c;
    short sa=9;
    cout<<sa;

    string harry ="Harry";
    long c;
    long long d;
    float score = 25.56;
    double score2 = 12.23
    long double score3 = 323.25;
    // Reassignment -
    score = 16.7

    // To not change variable -
    float const score4 = 5.0

    // CamelCase Notation -
    int marksInMaths = 83;
    cout<<"The marks of the student in maths is "<<marksInMaths;

    // To take input from user
    int a, b;
    cout<<"Enter first number"<<endl;
    cin<<a;
    cout<<"Enter second number"<<endl;
    cin<<b;
    // Operators
    cout<<"a + b is "<<a + b<<endl;
    cout<<"a - b is "<<a - b<<endl;
    cout<<"a * b is "<<a * b<<endl;
    cout<<"a / b is "<<a / b<<endl;
    cout<<"a / b is "<<(float)a / b<<endl;

    // if else conditional statement
    int age;
    cout<<"Enter your age"<<>endl;
    cin>>age;
    // else if ladder
    if (age>150 || age<1)
    {
        cout<<"Invalid age";
    }
    else if (age>=18) {
        cout<<"You can vote";
    }
    else
    {
        cout<<"You can't vote";
    }


    // switch statement
    switch (age)
    {
        case 12:
            cout<<"You are 12 years old"<<endl;
            // break;
        case 18:
            cout<<"You are 18 years old";
            break;
        default:
            cout<<"You are neither 12 nor 18 years old";
    }

    // while Loops
    int index=0;
    while(index<12)
    {
        cout<<"We are at index number "<<index<<endl;
        index = index + 1
    }

    // do while
    do {
        cout<<"We are at index number "<<index<<endl;
        index = index + 1;
    }while(index>32);

    // for loop

    for (int i=0; i<32; i++)
    {
        cout<<"The value of i is :"<<i<<endl;
    }


    return 0;
}
```

- To run manually -

```cmd
g++ name.cpp
.\a.exe
```

### Data Types -

- int
- short
- long
- long long
- float

#### CamelCase Notation -
