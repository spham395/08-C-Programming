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
### Introduction
The intent of this “memory operator” segment is to walk through relatively simple C code with focus on memory operators.  The visual format attempts to replicate the appearance and behavior (see below) of Visual Studio as closely as possible to aid in the learning process.  We will “step into” the source code on the right hand side and replicate what happens in the Visual Studio Debug mode memory window on the left.  At this point, nothing has happened yet. 

* 

### Prior to beginning, there are some items to address:
* “What are all those cc’s and Ì’s?”  
  * Short Answer:  They represent uninitialized memory in Visual Studio debug mode.  
  * Long Answer:  Hexadecimal value 0xCC is used as a “magic number” by Microsoft's C++ debugging runtime library and many DOS environments to mark uninitialized stack memory. CC resembles the opcode of the INT 3 debug breakpoint interrupt on x86 processors. (https://en.wikipedia.org/wiki/Magic_number_%28programming%29)  When viewed in the Visual Studio Debug mode memory window, the 0xCCs are part of the extended ASCII codes and interpreted as an Ì which is described as “Latin capital letter I with grave”.  (http://www.ascii-code.com/)
* “Why aren’t variable assignments contiguous?”  
  * Short Answer:  There’s no guarantee for contiguous memory address assignment outside of data structures like arrays and structs.  
  * Long Answer:  Many times, VS debug mode may happen to neatly assign contiguous, yet padded (see #3), memory addresses for consecutive variable definitions.  Some programmers, noticing this, assume it’s customary/standard and are baffled the first time they notice a non-contiguous memory assignment.  For the purposes of providing examples, contiguous memory addresses will be used and the values will be padded just like they are in VS13 debug mode (see #3).
* “Why are variables padded in memory?”  
  * Short Answer:  I don’t know.  
  * Long Answer:  SMEs, Google, Microsoft VS forums, and approximately 11 safari books were searched in an attempt to determine why VS13 debug mode appears to pad values in memory with uninitialized memory segments that are represented with 0xCC (see: #1 * “What are all those cc’s and Ì’s?”) 
  * Multiple man hours were, literally, spent on answering this question to no avail.  Sometimes, the effort isn’t worth the payoff.  The search was abandoned and the question is unanswered.  The closest answer was a reference made to leaving space on top of the stack for “bookkeeping data” (found on stackoverflow).  The examples provided here are merely reproduced based on behavior exhibited in VS13 debug mode.
* “What does that yellow arrow represent?”  
  * Short Answer:  Same as the yellow arrow when you “Step Into” code using Visual Studio 2013.  
  * Long Answer:  “This is the next statement that will be executed.”


**Note** A macro was utilized to print the pointer location without adding another variable on to the stack.
#define PRINT_POINTER(thing) printf(#thing “ is at %p\n”, &##thing)


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
















# UNDER CONSTRUCTION
---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/06_double-pointers.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
