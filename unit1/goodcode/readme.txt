There are three programs in this folder: broken.c, broken2.c, and broken3.c. Each contains several bugs. Your task is to identify these bugs and squash them (i.e. fix the programs so they can compile and run correctly). A good rule of thumb is to start by fixing the first error found in your program as it may be the cause of additional errors.

Before doing any debugging, try to compile each program (remember how?). Note the errors that pop up; we will log them here. It is essential that you learn to debug your code by recognizing the language of common errors. The compiler will tell you what is wrong with your code, but some errors are less obvious at the beginning of your coding journey.

broken.c
broken.c:1:10: error: expected "FILENAME" or <FILENAME> - add angled brackets around stdio.h
broken.c:3:1: error: 'main' must return 'int' - change first word in line 3 to int
broken.c:5:12: error: missing terminating '"' character [-Werror,-Winvalid-pp-token] - add " before );

broken2.c
broken2.c:6:21: error: expected ')' - move \n to be within quotes
broken2.c:7:34: error: expected ';' after expression - add semicolon to end of statement
broken2.c:9:5: error: implicit declaration of function 'print' is invalid in C99 [-Werror,-Wimplicit-function-declaration] - change to printf

broken3.c
broken3.c:6:5: error: implicit declaration of function 'GetString' is invalid in C99 [-Werror,-Wimplicit-function-declaration] - add header file for cs50.h which is where GetString is defined
broken3.c:7:19: error: unexpected type name 'string': expected expression - assignment order reversed
broken3.c:9:5: error: use of undeclared identifier 'userAge' - need data type int before variable declaration
broken3.c:10:17: error: invalid '==' at end of declaration; did you mean '='? - change to = (== checks for equality)
broken3.c:11:5: error: implicit declaration of function 'print' is invalid in C99 [-Werror,-Wimplicit-function-declaration] - change to printf
broken3.c:11:76: error: format specifies type 'int' but the argument has type 'string' (aka 'char *') [-Werror,-Wformat] - change first %d to %s in order to print a string
broken3.c:11:95: error: data argument not used by format string [-Werror,-Wformat-extra-args] - remove argument "userAge" since it is not meant to be printed

A few more questions for you once you fix each program. When in doubt, use your C Programming book, Google, and/or the CS50 AP Portal. Complete sentences not required.

0000. What is "boilerplate code" in C? Sections of code that have to be included in every program in order for it to run.
0001. What are the rules for naming variables in C? Can use letters, numbers, and _, but must begin with either _ or letter. (p. 43)
0010. What is camelCase? A way of capitalizing words in variables. If a variable name consists of multiple words, every word after the first is capitalized.
0011. What is the difference between data types int and float? An int stores integers (whole numbers) while a float stores real numbers. (p. 42)
0100. What is the difference between data types int and long long? An int gets 4 bytes of memory while a long long gets twice that (8 bytes of memory). (p. 42)
0101. What is the technical term for the "%" placeholder found in a printf command? Conversion specifier/character or format specifier. (p. 36f)
0110. When would you use "%s" instead of "%c"? When printing a string rather than a single character. (p. 36f)
0111. When would you use "%lld" instead of "%d"? When printing a long long rather than an int. (p. 36f)
1000. When would you use "%f" instead of "%d"? When printing a float or double rather than an int. (p. 36f)

Bonus 0: write a program called fun.c that prints a message to the screen, asks for user input, and/or works with variables.

    [Answers will vary - no one right program.]

Bonus 1: since you have fixed these programs, they should no longer be "broken" but rather "fixed." Additionally, the folder "badcode" should now be called "goodcode." Do some research into the "mv" Linux command, and see if you can rename these files/this folder using only the command line.

    General formula:
    mv <source> <destination>
    
    Sample commands:
    mv badcode goodcode
    mv broken.c fixed.c
    mv broken2.c fixed2.c
    mv broken3.c fixed3.c