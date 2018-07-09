# variable names

**variables** are a place in the computer's memory for storing a value. the **variable name **is an identifier for a single variable. the variable name should describe the variable as best as possible. the **max length** of a variable name is < 32... technically. but this really depends on the variable type, compiler and version of C being used. for instance, the G++ compiler can compile any length.

>***style:***
a variable name can be composed of letters and digits. they may not begin with a number though. C variable names are case sensitive and the underscore "_" counts as a letter (Do not begin variable names with a underscore since library routines and system names use this naming convention). you may also not include keywords or spaces in variable names.

#### examples:

| **variable name** | **legal?** | **notes** |
| :--- | :--- | :--- |
| studentGPA | yes | also conforms to style guide |
| i | yes | acceptable name for an iterator |
| MAX_AGE | yes | acceptable name for a constant |
| _addSomeNumbers | yes | ..but don't begin with underscore |
| const | no | const is a keyword in C |
| stuff1 | yes | ...but doesn't meet style guide |
| 52CardDeck | no | begins with a number |
| programming101 | yes | also conforms to style guide |
| av4ri4813 | yes | ...but doesn't meet style guide |
| get$ | no | $ is not a number or letter |
| end Pointer | no | spaces are not allowed |



