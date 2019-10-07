# Class Student Review Exercises

Write a single statement to accomplish each of the following. Assume that variables c 
(which stores a character), x, y and z are of type int, variables d, e and f are of 
type double, variable ptr is of type char * and arrays s1[100] and s2[100] are of type char.

* Convert the character stored in variable c to an uppercase letter. Assign the result to variable c.

* Determine whether the value of variable c is a digit. Use the conditional operator as shown in 
Figs. 8.2–8.4(Get figures from Instructor) to print “ is a ” or “ is not a ” when the result is displayed.

* Determine whether the value of variable c is a control character. Use the conditional operator to 
print “ is a ” or “ is not a ” when the result is displayed.

* Read a line of text into array s1 from the keyboard. Do not use scanf.

* Print the line of text stored in array s1. Do not use printf.

* Assign ptr the location of the last occurrence of c in s1.

* Print the value of variable c. Do not use printf.

* Determine whether the value of c is a letter. Use the conditional operator to print “is 
a ” or “is not a” when the result is displayed.

* Read a character from the keyboard and store the character in variable c.

* Assign ptr the location of the first occurrence of s2 in s1.

* Determine whether the value of variable c is a printing character. Use the conditional 
operator to print “ is a ” or “ is not a ” when the result is displayed.

* Read three double values into variables d, e and f from the string “1.27 10.3 9.432”.

* Copy the string stored in array s2 into array s1.

* Assign ptr the location of the first occurrence in s1 of any character from s2.

* Compare the string in s1 with the string in s2. Print the result.

* Assign ptr the location of the first occurrence of c in s1.

* Use sprintf to print the values of integer variables x, y and z into array s1. Each value 
should be printed with a field width of 7.

* Append 10 characters from the string in s2 to the string in s1.

* Determine the length of the string in s1. Print the result.

* Assign ptr to the location of the first token in s2. Tokens in the string s2 are separated by commas (,).

## Show two different methods of initializing character array vowel with the string of vowels “AEIOU”.

## What, if anything, prints when each of the following C statements is performed? If the statement contains an error, describe the error and indicate how to correct it. Assume the following variable definitions:

* char s1[ 50 ] = “jack”, s2[ 50 ] = “jill”, s3[ 50 ];

* printf( “%c%s”, toupper ( s1[ 0 ] ), &s1[ 1 ] );

* printf( “%s”, strcpy( s3, s2) );

* printf( “%s”, strcat( strcat( strcpy( s3, s1), “ and ”), s2) );

* printf( “%u”, strlen( s1) + strlen( s2) );

* printf( “%u”, strlen( s3) ); // using s3 after part (c) executes

##  Find the error in each of the following program segments and explain how to correct it:

* char s[ 10 ];
  strncpy( s, "hello", 5 );
  printf( "%s\n", s );

* printf( "%s", 'a' );

* char s[ 12 ];
  strcpy( s, "Welcome Home" );

* if ( strcmp( string1, string2 ) ) {
    puts( "The strings are equal" );
}

## (Character Testing)
Write a program that inputs a character from the keyboard and tests it with 
each of the functions in the character-handling library. The program should print the value returned by each function.

## (Converting Strings to Integers for Calculations)
Write a program that inputs four strings that represent integers, converts the strings to integers, sums the values and prints the total of the four values.

## (Comparing Strings) 
Write a program that uses function strcmp to compare two strings input by the user. The program should state whether the first string is less than, equal to or greater than the second string.

## (Random Sentences) 
Write a program that uses random number generation to create sentences. The program should use four arrays of pointers to char called article, noun, verb and preposition. The program should create a sentence by selecting a word at random from each array in the following order: article, noun, verb, preposition, article and noun. As each word is picked, it should be concatenated to the previous words in an array large enough to hold the entire sentence. The words should be separated by spaces. When the final sentence is output, it should start with a capital letter and end with a period. The program should generate 20 such sentences. The arrays should be filled as follows: The article array should contain the articles “the”, “a”, “one”, “some” and “any”; the noun array should contain the nouns “boy”, “girl”, “dog”, “town” and “car”; the verb array should contain the verbs “drove”, “jumped”, “ran”, “walked” and “skipped”; the preposition array should contain the prepositions “to”, “from”, “over”, “under” and “on”.

After the preceding program is written and working, modify it to produce a short story consisting of several of these sentences. (How about the possibility of a random term paper writer?)

##  (Tokenizing Telephone Numbers)
Write a program that inputs a telephone number as a string in the form (555) 555-5555. The program should use function strtok to extract the area code as a token, the first three digits of the phone number as a token and the last four digits of the phone number as a token. The seven digits of the phone number should be concatenated into one string. The program should convert the area-code string to int and convert the phone-number string to long. Both the area code and the phone number should be printed.

##  (Displaying a Sentence with Its Words Reversed) 
Write a program that inputs a line of text, tokenizes the line with function strtok and outputs the tokens in reverse order.

## (Counting the Occurrences of a Substring)
Write a program that inputs several lines of text and a search string and uses function strstr to determine the total occurrences of the string in the lines of text. Print the result.

## (Counting the Letters of the Alphabet in a String) 
Write a program that inputs several lines of text and uses function strchr to determine the total occurrences of each letter of the alphabet in the lines of text. Uppercase and lowercase letters should be counted together. Store the totals for each letter in an array and print the values in tabular format after the totals have been determined.

##  (Strings Starting with “b”) 
Write a program that reads a series of strings and prints only those beginning with the letter “b”.

## (Write Your Own Character-Handling Functions) 
Using an ASCII character chart as a guide, write your own versions of the character-handling functions. 







