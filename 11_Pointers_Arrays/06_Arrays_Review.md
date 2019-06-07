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
|At definition, an array name is a pointer to the first index|
|------------------------------------------------------------|
* The above code is the combined from the next eight examples.  Prior to reviewing this code, complete with memory visualization, review this combined code to determine what happens and how it happens.  
* The banner at the bottom says “at definition” because an array name can be modified to point at another memory address.  
* When an array is first defined, the name of the array acts as a pointer variable. This pointer variable points to the first element (index 0) of the array.  It can be dereferenced, incremented or decremented.  This pointer is guaranteed to *always* point to the first index (as we will explore during the “Address Arithmetic” section).
---

| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|








---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/07_Address_Arithmatic.md" > Continue to Next Topic </a>
