<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

---
# Address Arithmatic

## Topic objectives

* **Incrementing/ Decrementing/ Adding/ Subtracting Pointers**
* **Array Name Math**
* **Pointer vs Integers**
* **Pointers vs Relational Operators**

---

### Introductory Question: 

* How is it that 0x0002F320 + 2 == 0x0002F328? (Clue: previous topic)

---

``` 
int someNums[5] = { 0, 1, 2, 3, 4};  // int array of dimensions 5
int * someNums_ptr = someNums;   // Points at &someNums[0]
```

1. Incrementing/ Decrementing/ Adding/ Subtracting Pointers - Pointer variables may be increased and decreased to modify a memory address.

```
// ptr++ increments ptr to point to the next element 
someNums_ptr++;	// Points to the next index, &someNums[1]
// ptr += n increments ptr to the address of the nth object past ptr
someNums_ptr += 2;	// Pointer now increased to &someNums[3]
// ptr-– decrements ptr to point at the previous element
someNums_ptr--;	// Point now decreased to &someNums[2]
// ptr -= n decrements ptr to the address of the nth previous object
someNums_ptr -= 2;	// Pointer now decreased to &someNums[0]
```

---

```
int someNums[5] = { 0, 1, 2, 3, 4 };  // int array of dimension 5
int * someNums_ptr = someNums;  //Points at &someNums[0]
```

2. Array Name Math - Array names are converted to pointers
 * An arrays name is not a variable<sup>1</sup> text




<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/08_function_Arguments.md"> Continue to Next Topic </a>
