# header files

header files are a way of sharing code between several source files

these filenames traditionally end in a (.h) **with out parentheses*

header files hold the declaration (aka prototype) of functions

these functions are defined in supporting source files (.c)

the C standard library header files have been logically organized (ie. stdio.h, stdlib.h, math.h, etc...)

programmers can write their own header files and even create their own libraries

libraries can be shared among programmmers

<> loads system headers

    #include <stdio.h>

" " loads headers from the local directory first

    #include "my_local_header.h"

```c
///myHeader.h///
#ifndef my_header_
#define my_header_

/*if a is larger than b, return 1
if a is less than or equal to b, return 0*/

extern int is_larger(int a, int b);
#endif //my_header_

///myHeader.c///
#define my_header_yes 1
#define my_header_no 0
extern int is_larger(int a, int b)
{
    if(a > b)
    {
        return my_header_yes;
    }
    else
    {
        return my_header_no;
    }
}

///myCode.c///
#define _crt_secure_no_warnings 1       //required to utilize scanf()
#include <stdio.h>      //defines printf() and scanf()
#include "myHeader.h"       //your header

int main(void)
{
    int firstNum, secondNum;        //input variables
    _flushall();            //flush the streams
    scanf("is %d larger than %d?", &firstNum, &secondNum);

    if (is_larger(firstNum, secondNum))     //if is_larger() returns 1...
    {
        printf("%d was larger\n", firstNum);    //...then firstNum was larger...
    }
    else    //...otherwise it returned 0 so...
    {
        printf("%d was larger\n", secondNum);   //...secondNum was larger
    }

    return 0;
}
```
some header file guidelines:

    1. restrict yourself to logically related ideas
    2. only #inlcude other header files you NEED
    3. avoid established header file names
    4. don not nest header files
    5. inlcude per-function comment blocks
    6. use header file guards
    7. make names unique
    8. do not include executable code
    9. #include headers may need to go in the header's source file (.c)

NOTE: header file creation example in visual studio ONLY

    1. Start a new project (Ctrl+Shift+N)
    2. In “Solution Explorer”, right click “Header Files”, click“Add”, and select “New Item” (Ctrl+Shift+A)
    3. Select “Header File (.h)”, name it “StudentHeader.h”, andclick “Add”
    4. In “Solution Explorer”, right click “Source Files”, click“Add”, and select “New Item” (Ctrl+Shift+A)
    5. Select “C++ File (.cpp)”, name it “StudentHeader.c”,manually changing the file extension to (.c), and click “Add”
    6. Create another source file #include “StudentHeader.h”