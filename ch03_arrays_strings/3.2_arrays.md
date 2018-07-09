# arrays

array is a set of consecutive memory locations used to store items of a specified data type. each item in the array is an **element**. the number of elements in an array is called the **dimension** of the array. numbering of the elements begins at **zero (0).**

## ![](/assets/array1.png)declaring an array

```c
<data type> <variable name> [<dimension>];
```

### examples

* Integer array named "courseNumbers" with a dimension of 10

```c
int courseNumbers [10];
```

* float array named "testScores" with a dimension of 7

```cpp
float testScores [7];
```

* character array named "availableGrades" with a dimension of 4

```c
char availableGrades [4];
```

**NOTE: dimension MUST be established during declaration**

## initializing arrays

```c
<data type> <variable name> [<dimension>] = {<data>, <data>};
```

* **example 1:** explicit dimension

```c
int courseNumbers [8] = {101, 102, 103, 110, 202, 203, 210, 211};
```

![](/assets/array2.png)

* **example 2:** implicit dimension

```c
float testScores [] = {72.1, 83.5, 92, 100, 99.9, 82, 70.5};
```

![](/assets/array3.png)

* **example 3:** zeroize

```c
char availableGrades [4] = {0};
```

![](/assets/array4.png)

* **example 3b:** partial zeroize

```c
char availableGrades [4] = {65, 66};
```

## ![](/assets/array4b.png)array practice

fill in the blanks for the following arrays

```c
// first
int computerScienceCourses [] = {1003, 1023, 1033, 1063, 1073};

// second
float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};

// third
char cardinalDirections [4] = {0};

// fourth
char catchPharse [10] = {76, 101, 103, 101, 111};
```

![](/assets/arrayBlank.png)
