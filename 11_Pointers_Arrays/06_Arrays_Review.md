<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

---
# Arrays Review

# UNDER CONSTRUCTION
---

**Pointers & Arrays** are closely related in C programming
Arrays are guaranteed to be stored in *consecutive memory locations*
Since the elements of an array are stored in *consecutive memory locations,* they can be referenced using consecutive memory addresses
```
int someList[] = { 0xFEEDFACE, 0xC001CODE, 0xCAFEF00D, 0xFACEB00C };
int indexNum = 0;     // Used to reference an index
int * someList_ptr = NULL;

someList[indexNum];   // 0xFEEDFACE
someList_ptr = &someList[0];  // Assign the address of array index 0
someList_ptr == someList;   // Array name == array memory address
*someList_ptr == someList[0]; // 0xFEEDFACE
*someList_ptr == *someList;   // 0xFEEDFACE
```
The above code are examples of different ways to access and/or modify elements of an array.  it is expected that you already have an inherent understanding of certain concepts such as the fact that an array name, unless modified, is actually a pointer to the first index.

---
There is more than one way to access an element in an array:
* Direct reference (e.g., someList[0])
* Dereference a pointer (e.g., *someList_ptr)
* Dereference pointer math (e.g., *(someList + 2))… AKA Address Arithmetic (e.g., someList_ptr += 2)

```
//Example code will be executed per line and displayed in memory//
int someList[] = { 0xFEEDFACE, 0xC001C0DE, 0xCAFEF00D, 0xFACEB00C };
someList[0] = 0x8BADF00D;		// Normal
int * someList_ptr = &someList[1];	// By pointer referenc...
* someList_ptr = 0xC0DEDEAD;		// ...and then dereferencing it
* (someList + 2) = 0x1BADD00D;		// Array name pointer math…
someList_ptr += 2;			// ...AKA Address arithmetic
* someList_ptr = 0xDEADBEEF;		// Dereference a pointer
```
|At definition, an array name is a pointer to the first index|
|------------------------------------------------------------|

---
* The above code is the combined from the next eight examples.  Prior to reviewing this code, complete with memory visualization, review this combined code to determine what happens and how it happens.  
* The banner at the bottom says “at definition” because an array name can be modified to point at another memory address.  
* When an array is first defined, the name of the array acts as a pointer variable. This pointer variable points to the first element (index 0) of the array.  It can be dereferenced, incremented or decremented.  This pointer is guaranteed to *always* point to the first index (as we will explore during the “Address Arithmetic” section).

---

**Stepping through the code**  (shown above):
The first line was a comment so we’ll take this opportunity to setup our memory visualization.  As before, the 0xCC hex values represent uninitialized memory values in Visual Studio’s debug mode.  The notes in the grey box off to the represent are interpretations of the memory address(es) they’re lined up with, not the values found within.

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_1.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|

![](/assets/Array_Rev_2.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_3.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_4.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_5.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_6.png)

---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_7.png)

---


| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Array_Rev_8.png)




---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/07_Address_Arithmatic.md" > Continue to Next Topic </a>
