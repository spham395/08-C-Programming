# another method for strings

there are multiple ways to create strings in C. this method is generally much easier and more readable.

```c
char name[] = "Will";

// is the same as
char name[] = {'W', 'i', 'l', 'l', '/0'};
```

as you can tell, the string is automatically NULL terminated. there is no need to include that within your string. for the time being, use the previous method until you get a hang of it, then switch to the method shown here.