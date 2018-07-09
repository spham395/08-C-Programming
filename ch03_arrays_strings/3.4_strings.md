# strings

strings are merely an array of characters that is terminated by the null character ('\0'). the array must be at least one byte longer than the string stored within. the length of the string is the number of characters excluding the string terminator ('\0').

**why must the array be one byte longer than the string?**

> two strings walk into a bar. The bartender says, "so what'll it be?
> the first string says, "i think i'll have a beer quag fulk boorg jdk&CJfdLk jk3s d$\#$gasdf^u r89nvy~~owmc64^Dzx.xvcu"
> "please excuse my friend," the second string says, "he isn't nul-terminated."

## declaring strings

### declare an array

```c
char <variable name> [<dimension>];
```

#### examples:

* char array named "instructorName" with a dimension of 5

```c
char instructorName [5];
```

* char array named "inputBuffer" with a dimension of 256

```c
char inputBuffer [256];
```

* char array named "studentLastName" with a dimension of 32

```c
char studentLastName [32];
```

**NOTE: dimension MUST be established during declaration**

## initializing strings

### initialize a string

```c
char <variable name> [<dimension>] = {<data>, <data>, '\0'};
```

#### example 1:

```c
char instructorName [] = {'W', 'i', 'l', 'l', '\0'};
```

#### **NOTE: **terminating a string with the MACRO "NULL" may work, but is not recommended because it is meant for pointers. ![](/assets/string1.png)example 2:

```c
char <variable name> [<dimension>] = {<data>, <data>, 0};
```

```c
char inputBuffer [256] = {0};
```

![](/assets/string2.png)the example above declares and initializes an empty array. It also ensures the string is nul-terminated.

#### example 3:

```c
char <variable name> [<dimension>] = {<data>, <data>, 0};
```

```c
char studentLastName [32] = {89, 111, 117, 0};
```

![](/assets/string3.png)the above example declares and inits an array of dimension 32 that begins with the string "you".

# demonstration lab 2

* declare and zeroize a char array with sufficient dimension to store your favorite word and the nul character

```c
char myFavWord [9] = {0};
```

* assign your favorite word to the leading elements of that array

```c
myFavWord [0] = 84;
myFavWord [1] = 115;
myFavWord [2] = 117;
myFavWord [3] = 110;
myFavWord [4] = 100;
myFavWord [5] = 101;
myFavWord [6] = 114;
myFavWord [7] = 101;
```

* ensure your string is null-terminated by manually setting the last element to 0

```c
myFavWord [8] = 0;
```

* Print your null-terminated string

```c
printf("my favorite word is %s\n", myFavWord);
```

**NOTE: explicitly ensuring you have nul-terminated your string is a safe programming practice**

~~**EVIL:**~~** try replacing/removing/commenting all nul('\0') characters and print the string**

```c
char myFavWord [9] = {0}; // init a char array

myFavWord [0] = 84;  / t
myFavWord [1] = 115; / s
myFavWord [2] = 117; / u
myFavWord [3] = 110; / n
myFavWord [4] = 100; / d
myFavWord [5] = 101; / e
myFavWord [6] = 114; / r
myFavWord [7] = 101; / e

myFavWord [8] = 0; // \0

printf("my favorite word is %s!\n", myFavWord);

// Will output..
// my favorite word is tsundere!
//tsundere refers to a person that starts off cold and non receptive but then gradually warms up to their company. often an archetype in many japanese animations.
```