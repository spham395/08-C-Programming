<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

---

# Memory Operators

---

  
 |Operator | Meaning | Example | Result for each bit pos
-------- | ------- | ------- | -----------------------
 | & | Address of | &x | A constant pointer to x
 | * | Dereference | * p | The object (or function) point to by p
 | [] | Array element | x[i] | * (x+i), the element with index i in the array x

---

```
int this = 9;		// Integer variable “this” defined as 9
int that = 0;		// Integer variable “that” defined as 0
int * int_ptr;		// Pointer variable for an integer declared 
int_ptr = &this;	// Defined with address of “this”
that = *int_ptr;	// “that” assigned value at int_ptr address
/* “that”, now 9, should now equal “this” */
*int_ptr = 1;		// Value at int_ptr address assigned 1
/* “this” is now equal to 1 */ 
```

<p float="left">
| Memory 1| |
|-------- | -------------|
| 0x0090C050 cc cc cc cc | <- dword 01 - IIII |
| 0x0090C054 cc cc cc cc | <- dword 02 - IIII |
| 0x0090C058 cc cc cc cc | <- dword 03 - IIII |
| 0x0090C05C cc cc cc cc | <- dword 04 - IIII |
| 0x0090C060 cc cc cc cc | <- dword 05 - IIII |
| 0x0090C064 cc cc cc cc | <- dword 06 - IIII |
| 0x0090C068 cc cc cc cc | <- dword 07 - IIII |
| 0x0090C06C cc cc cc cc | <- dword 08 - IIII |
| 0x0090C070 cc cc cc cc | <- dword 09 - IIII |
| 0x0090C074 cc cc cc cc | <- dword 10 - IIII |
| 0x0090C078 cc cc cc cc | <- dword 11 - IIII |
| 0x0090C07C cc cc cc cc | <- dword 12 - IIII |
| 0x0090C080 cc cc cc cc | <- dword 13 - IIII |
| 0x0090C084 cc cc cc cc | <- dword 14 - IIII |
| 0x0090C088 cc cc cc cc | <- dword 15 - IIII |
| 0x0090C08C cc cc cc cc | <- dword 16 - IIII |

<img src="/assets/ArrowR.png" width="100" />
<img src="/assets/Code pic.png" width="100" /> 















# UNDER CONSTRUCTION
---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/06_double-pointers.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
