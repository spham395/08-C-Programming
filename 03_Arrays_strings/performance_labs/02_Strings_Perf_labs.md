## (Displaying Strings in Uppercase and Lowercase) 
Write a program that inputs a line of text into char array s[100]. Output the line in uppercase letters and in lowercase letters.

 ## (Converting Strings to Floating Point for Calculations)
 Write a program that inputs four strings that represent floating-point values, converts the strings to double values, sums the values and prints the total of the four values.

## (Comparing Portions of Strings)
Write a program that uses function strncmp to compare two strings input by the user. The program should input the number of characters to be compared, then display whether the first string is less than, equal to or greater than the second string.

## (Limericks) 
A limerick is a humorous five-line verse in which the first and second lines rhyme with the fifth, and the third line rhymes with the fourth. Using techniques similar to those developed, write a program that produces random limericks. Polishing this program to produce good limericks is a challenging problem, but the result will be worth the effort!

## (Pig Latin)
Write a program that encodes English-language phrases into pig Latin. Pig Latin is a form of coded language often used for amusement. Many variations exist in the methods used to form pig-Latin phrases. For simplicity, use the following algorithm:

To form a pig-Latin phrase from an English-language phrase, tokenize the phrase into words with function strtok. To translate each English word into a pig-Latin word, place the first letter of the English word at the end of the English word and add the letters “ay”. Thus the word “jump” becomes “umpjay”, the word “the” becomes “hetay” and the word “computer” becomes “omputercay”. Blanks between words remain as blanks. Assume the following: The English phrase consists of words separated by blanks, there are no punctuation marks, and all words have two or more letters. Function printLatinWord should display each word. [Hint: Each time a token is found in a call to strtok, pass the token pointer to function printLatinWord, and print the pig-Latin word. Note: We’ve provided simplified rules for converting words to pig Latin here. For more detailed rules and variations, visit en.wikipedia.org/wiki/Pig_latin.]


## (Searching for Substrings) 
Write a program that inputs a line of text and a search string from the keyboard. Using function strstr, locate the first occurrence of the search string in the line of text, and assign the location to variable searchPtr of type char *. If the search string is found, print the remainder of the line of text beginning with the search string. Then, use strstr again to locate the next occurrence of the search string in the line of text. If a second occurrence is found, print the remainder of the line of text beginning with the second occurrence. [Hint: The second call to strstr should contain searchPtr + 1 as its first argument.]

## (Counting the Occurrences of a Character)
Write a program that inputs several lines of text and a search character and uses function strchr to determine the total occurrences of the character in the lines of text.


##  (Counting the Number of Words in a String)
 Write a program that inputs several lines of text and uses strtok to count the total number of words. Assume that the words are separated by either spaces or newline characters.
 
 
 ## (Alphabetizing a List of Strings)
 Use the string-comparison functions and the techniques for sorting arrays to write a program that alphabetizes a list of strings. Use the names of 10 or 15 towns in your area as data for your program.
 
## (ASCII) 
The chart in Appendix B(supplied by instructor) shows the numeric code representations for the characters in the ASCII character set. Study this chart and then state whether each of the following is true or false.

The letter “A” comes before the letter “B”.

The digit “9” comes before the digit “0”.

The commonly used symbols for addition, subtraction, multiplication and division all come before any of the digits.

The digits come before the letters.

If a sort program sorts strings into ascending sequence, then the program will place the symbol for a right parenthesis before the symbol for a left parenthesis.

## (Strings Ending with “ed”) 
Write a program that reads a series of strings and prints only those that end with the letters “ed”.

## (Printing Letters for Various ASCII Codes)
Write a program that inputs an ASCII code and prints the corresponding character.







