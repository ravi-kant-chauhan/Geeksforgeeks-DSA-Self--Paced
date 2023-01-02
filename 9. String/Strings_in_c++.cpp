#include<bits/stdc++.h>
using namespace std;


//      ***************   C style string      ****************

/* 1.    Simple Implementation

int main()
{
    char str[] = "gfg";
    cout << str;
    return 0;
}   

*/


/* 2.     Sizeof  function


int main()
{
    char str[] = "gfg";
    cout << sizeof(str);
    return 0;
}

Prints size as 4 instead of 3  as /n is also present in it at the end.

*/



/* 3.

int main()
{
    char str[] = {'g', 'f', 'g'};
    cout << str;
    return 0;
}


Prints  gfg followed by random characters / segmentation fault as it doesn't stop until /n is found.


int main()
{
    char str[] = {'g', 'f', 'g', '\0'};
    cout << str;
    return 0;
}

Prints only gfg

*/


/* 4. 
    1). strln()  -> prints length of the string
                    counts till it reaches \0

    2). strcmp()       -> Compares two strings in lexicographical order
                        1. Prints positive no. if first string is greater
                        1. Prints negative no. if first string is smaller
                        1. Prints 0 if both strings are equal

int main()
{
    char s1[] = "abc";
    char s2[] = "bcd";
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "Greater";
    else if(res == 0)
        cout << "Same";
    else
        cout << "Smaller";
}
    

    3). strcpy()    ->  Copies a string to another string

        char str[5];
        str = "str";    -> This is not valid (compiler error)
                                We cannot assign one address to another address
                                    (We can't assign something to an address)


int main()
{
    char str[5];
    strcpy(str, "gfg");
    cout << str;
    return 0;
}
    

*/


//             ****************     C++ String    ***********

/*  1. 
            1. Richer Library
            2. Supports operators like +, <, >
            3. Can assign a string later
            4. Do not have to worry about size
            5. Can be converted to C-style if needed

*/


/*  2.

1. str.length()  function  ->  Length of the string
2. str.substr()  function  ->  Prints substring from _  to  _
3. str.find()   function   ->  Prints index of first occurence of the string
                                    ** (if not found it return string::npos  -> no position found)

int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << " ";
    str = str + "xyz";
    cout << str << " ";
    cout << str.substr(1, 3) << " ";
    cout << str.find("eek") << " ";
    return 0;
}

int main()
{
    string s1 = "abc";
    string s2 = "bcd";
    if (s1 == s2)
        cout << "Same";
    else if(s1 < s2)
        cout << "Smaller";
    else
        cout << "Greater";
}


*/


/*  3.      Reading Strings from console

int main()
{
    string str;
    cout << "Enter your name ";
    cin >> str;
    cout << "\nYour name is " << str;
    return 0;
}

***

1.  cin stops when it sees a space

***
 2.       Getline function to take input with space
                Does not stops unless newline character is encountered
            
int main()
{
    string str;
    cout << "Enter your name ";
    getline(cin, str);
    cout << "\nYour name is " << str;
    return 0;
}

            **   Getline can take input upto a particular character :
                        getline(cin, str, 'a');

int main()
{
    string str;
    cout << "Enter your name";
    getline(cin, str, 'a');
    cout << "\nYour name is " << str;
    return 0;
}


*/



/*  4.  Iterating Through a string



*/

int main()
{
    string str = "geeksforgeeks";
    for (int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
    for (char x: str)
        cout << x;
}