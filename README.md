<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Introduction</a></li>
<li><a href="#sec-2">2. Objectives</a></li>
<li><a href="#sec-3">3. General Instructions</a></li>
<li><a href="#sec-4">4. Mandatory part</a>
<ul>
<li><a href="#sec-4-1">4.1. Technical considerations</a></li>
<li><a href="#sec-4-2">4.2. Part 1 - Libc functions</a></li>
<li><a href="#sec-4-3">4.3. Part 2 - Additional functions</a></li>
</ul>
</li>
<li><a href="#sec-5">5. Bonus part</a></li>
</ul>
</div>
</div>

# Introduction<a id="sec-1" name="sec-1"></a>

The libft project builds on the concepts you learned during Day-06 of the bootcamp
ie code a library of useful functions that you will be allowed to reuse in most of your C
projects this year. This will save you a lot of precious time. The following assignments
will have you write lines of code you already wrote during the bootcamp. See the libft
project as a Bootcamp reminder and use it wisely to assess your level and progress.

# Objectives<a id="sec-2" name="sec-2"></a>

C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project makes you to take the time to re-write those functions,
understand them, and learn to use them. This library will help you for all your future C
projects.
Through this project, we also give you the opportunity to expand the list of functions
with your own. Take the time to expand your libft throughout the year.

# General Instructions<a id="sec-3" name="sec-3"></a>

-   You must create the following functions in the order you believe makes most sense. We encourage you to use the functions you have already coded to write the next ones. The difficulty level does not increase by assignment and the project has not been structured in any specific way. It is similar to a video game, where you can complete quests in the order of your choosing and use the loot from the previous quests to solve the next ones.
-   Your project must be written in accordance with the Norm.
-   Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the defence.
-   All heap allocated memory space must be properly freed when necessary.
-   You must submit a file named author containing your username followed by a ’\n’ at the root of your repository,
-   You must submit a C file for each function you create, as well as a libft.h file, which will contain all the necessary prototypes as well as macros and typedefs you might need. All those files must be at the root of your repository.
-   You must submit a Makefile which will compile your source files to a static library libft.a.
-   Your Makefile must at least contain the rules $(NAME), all, clean, fclean et re in the order that you will see fit.
-   Your Makefile must compile your work with the flags -Wall, -Wextra and -Werror.
-   Only the following libc functions are allowed : malloc(3), free(3) and write(2), and their usage is restricted. See below.
-   You must include the necessary include system files to use one or more of the three authorized functions in your .c files. The only additional system include file you are allowed to use is string.h to have access to the constant NULL and to the type size&#95;t. Everything else if forbidden.
-   We encourage you to create test programs for your library even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are correcting.

# Mandatory part<a id="sec-4" name="sec-4"></a>

## Technical considerations<a id="sec-4-1" name="sec-4-1"></a>

-   Your libft.h file can contain macros and typedefs if needed.
-   A string must ALWAYS end with a ’&#92;0’, even if it is not included in the function’s description, unless explicitly stated otherwise.
-   It is forbidden to use global variables.
-   If you need sub-functions to write a complex function, you must define these subfunctions as static as stipulated in the Norm.
-   You must pay attention to your types and wisely use the casts when needed, especially when a void&#42; type is involved. Generally speaking, avoid implicit casts.

Example:

    char *str;
    str = malloc(42 * sizeof(*str)); /* Wrong ! Malloc returns a void * (implicit cast) */
    str = (char *) malloc(42 * sizeof(*str)); /* Right ! (explicit cast) */

## Part 1 - Libc functions<a id="sec-4-2" name="sec-4-2"></a>

In this first part, you must re-code a set of the libc functions, as defined in their
man. Your functions will need to present the same prototype and behaviors as the originals.
Your functions’ names must be prefixed by “ft&#95;”. For instance strlen becomes
ft&#95;strlen.
You must re-code the following functions:
-   memset
-   bzero
-   memcpy
-   memccpy
-   memmove
-   memchr
-   memcmp
-   strlen
-   strdup
-   strcpy
-   strncpy
-   strcat
-   strncat
-   strlcat
-   strchr
-   strrchr
-   strstr
-   strnstr
-   strcmp
-   strncmp
-   atoi
-   isalpha
-   isdigit
-   isalnum
-   isascii
-   isprint
-   toupper
-   tolower

## Part 2 - Additional functions<a id="sec-4-3" name="sec-4-3"></a>

In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form. Some of these functions can be useful to write Part
1’s functions.
-   ft&#95;memalloc
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void &#42; ft&#95;memalloc(size&#95;t size);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The size of the memory that needs to be allocated.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The allocated memory area.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;memdel
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;memdel(void &#42;&#42;ap);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">A pointer’s address that needs its memory freed and set to NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">free(3).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strnew
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strnew(size&#95;t size);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a “fresh” string ending with ’&#92;0’. Each character of the string is initialized at ’&#92;0’. If the allocation fails the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The size of the string to be allocated.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The string allocated and initialized to 0.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strdel
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;strdel(char &#42;&#42;as);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string’s address that needs to be freed and its pointer set to NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">Free(3).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strclr
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;strclr(char &#42;s);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Sets every character of the string to the value ’&#92;0’.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string that needs to be cleared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">None.</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;striter
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;striter(char &#42;s, void (&#42;f)(char &#42;));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to iterate.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The function to apply to each character of s.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">None.</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;striteri
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;striteri(char &#42;s, void (&#42;f)(unsigned int, char &#42;));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to iterate.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The function to apply to each character of s and its index.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">None.</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strmap
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strmap(char const &#42;s, char (&#42;f)(char));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Applies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to map.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The function to apply to each character of s.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The “fresh” string created from the successive applications of f.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strmapi
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strmapi(char const &#42;s, char (&#42;f)(unsigned int, char));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to map.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The function to apply to each character of s and its index.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The “fresh” string created from the successive applications of f.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strequ
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">int ft&#95;strequ(char const &#42;s1, char const &#42;s2);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The first string to be compared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The second string to be compared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">1 or 0 according to if the 2 strings are identical or not.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">None.</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strnequ
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">int ft&#95;strnequ(char const &#42;s1, char const &#42;s2, size&#95;t n);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Lexicographical comparison between s1 and s2 up to n characters or until a ’&#92;0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The first string to be compared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The second string to be compared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #3</td>
    <td class="left">The maximum number of characters to be compared.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">1 or 0 according to if the 2 strings are identical or not.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">None.</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strsub
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strsub(char const &#42;s, unsigned int start, size&#95;t len);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string from which create the substring.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The start index of the substring.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #3</td>
    <td class="left">The size of the substring.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The substring.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strjoin
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strjoin(char const &#42;s1, char const &#42;s2);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a “fresh” string ending with ’&#92;0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The prefix string.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The suffix string.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The “fresh” string result of the concatenation of the 2 strings.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strtrim
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;strtrim(char const &#42;s);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to be trimed.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The “fresh” trimmed string or a copy of s.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;strsplit
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42;&#42; ft&#95;strsplit(char const &#42;s, char c);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’&#92;0’, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example: ft&#95;strsplit("&#42;hello&#42;fellow&#42;&#42;&#42;students&#42;", ’&#42;’) returns the array ["hello", "fellow", "students"].</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to split.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The delimiter character.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The array of “fresh” strings result of the split.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3), free(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;itoa
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">char &#42; ft&#95;itoa(int n);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocate (with malloc(3)) and returns a “fresh” string ending with ’&#92;0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The integer to be transformed into a string.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The string representing the integer passed as argument.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putchar
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putchar(char c);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the character c to the standard output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The character to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putstr
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putstr(char const &#42;s);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the string s to the standard output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putendl
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putendl(char const &#42;s);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the string s to the standard output followed by a ’\n’.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putnbr
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putnbr(int n);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the integer n to the standard output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The integer to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putchar&#95;fd
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putchar&#95;fd(char c, int fd);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the char c to the file descriptor fd.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The character to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The file descriptor.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putstr&#95;fd
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putstr&#95;fd(char const &#42;s, int fd);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the string s to the file descriptor fd.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The file descriptor.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putendl&#95;fd
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putendl&#95;fd(char const &#42;s, int fd);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the string s to the file descriptor fd followed by a ’\n’.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The string to output.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The file descriptor.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;putnbr&#95;fd
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;putnbr&#95;fd(int n, int fd);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Outputs the integer n to the file descriptor fd.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The integer to print.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The file descriptor.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">write(2).</td>
    </tr>
    </tbody>
    </table>

# Bonus part<a id="sec-5" name="sec-5"></a>

If you successfully completed the mandatory part, you’ll enjoy taking it further. You can
see this last section as Bonus Points.
Having functions to manipulate memory and strings is very useful, but you’ll soon
discover that having functions to manipulate lists is even more useful.
You’ll use the following structure to represent the links of your list. This structure
must be added to your libft.h file.

    typedef struct s_list
    {
      void *content;
      size_t content_size;
      struct s_list *next;
    } t_list;

Here is a description of the fields of the t&#95;list struct:
-   content : The data contained in the link. The void &#42; allows to store any kind of data.
-   content&#95;size : The size of the data stored. The void &#42; type doesn’t allow you to know the size of the pointed data, as a consequence, it is necessary to save its size. For instance, the size of the string "42" is 3 bytes and the 32bits integer 42 has a size of 4 bytes.
-   next : The next link’s address or NULL if it’s the last link.

The following functions will allow you to manipulate your lists more easily.

-   ft&#95;lstnew
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">t&#95;list &#42; ft&#95;lstnew(void const &#42;content, size&#95;t content&#95;size);</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Allocates (with malloc(3)) and returns a “fresh” link. The variables content and content&#95;size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content&#95;size is initialized to 0 even if the parameter content&#95;size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The content to put in the new link.</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #2</td>
    <td class="left">The size of the content of the new link.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">The new link.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">malloc(3), free(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;lstdelone
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;lstdelone(t&#95;list &#42;&#42;alst, void (&#42;del)(void &#42;, size&#95;t));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function del given as a parameter, then frees the link’s memory using free(3). The memory of next musnt not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft&#95;memdel in the mandatory part).</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The adress of a pointer to a link that needs to be freed.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">free(3)</td>
    </tr>
    </tbody>
    </table>
-   ft&#95;lstdel
    
    <table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">
    
    
    <colgroup>
    <col  class="left" />
    
    <col  class="left" />
    </colgroup>
    <tbody>
    <tr>
    <td class="left">Prototype</td>
    <td class="left">void ft&#95;lstdel(t&#95;list &#42;&#42;alst, void (&#42;del)(void &#42;, size&#95;t));</td>
    </tr>
    
    
    <tr>
    <td class="left">Description</td>
    <td class="left">Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL (quite similar to the function ft&#95;memdel from the mandatory part).</td>
    </tr>
    
    
    <tr>
    <td class="left">Param. #1</td>
    <td class="left">The address of a pointer to the first link of a list that needs to be freed.</td>
    </tr>
    
    
    <tr>
    <td class="left">Return value</td>
    <td class="left">None.</td>
    </tr>
    
    
    <tr>
    <td class="left">Libc functions</td>
    <td class="left">free(3)</td>
    </tr>
    </tbody>
    </table>

\*ft&#95;lstadd

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="left" />

<col  class="left" />
</colgroup>
<tbody>
<tr>
<td class="left">Prototype</td>
<td class="left">void ft&#95;lstadd(t&#95;list &#42;&#42;alst, t&#95;list &#42;new);</td>
</tr>


<tr>
<td class="left">Description</td>
<td class="left">Adds the element new at the beginnning of the list.</td>
</tr>


<tr>
<td class="left">Param. #1</td>
<td class="left">The address of a pointer to the first link of a list.</td>
</tr>


<tr>
<td class="left">Param. #2</td>
<td class="left">The link to add at the beginning of the list.</td>
</tr>


<tr>
<td class="left">Return value</td>
<td class="left">None.</td>
</tr>


<tr>
<td class="left">Libc functions</td>
<td class="left">None.</td>
</tr>
</tbody>
</table>

\*ft&#95;lstiter

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="left" />

<col  class="left" />
</colgroup>
<tbody>
<tr>
<td class="left">Prototype</td>
<td class="left">void ft&#95;lstiter(t&#95;list &#42;lst, void (&#42;f)(t&#95;list &#42;elem));</td>
</tr>


<tr>
<td class="left">Description</td>
<td class="left">Iterates the list lst and applies the function f to each link.</td>
</tr>


<tr>
<td class="left">Param. #1</td>
<td class="left">A pointer to the first link of a list.</td>
</tr>


<tr>
<td class="left">Param. #2</td>
<td class="left">The address of a function to apply to each link of a list.</td>
</tr>


<tr>
<td class="left">Return value</td>
<td class="left">None.</td>
</tr>


<tr>
<td class="left">Libc functions</td>
<td class="left">None.</td>
</tr>
</tbody>
</table>

\*ft&#95;lstmap

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="left" />

<col  class="left" />
</colgroup>
<tbody>
<tr>
<td class="left">Prototype</td>
<td class="left">t&#95;list &#42; ft&#95;lstmap(t&#95;list &#42;lst, t&#95;list &#42; (&#42;f)(t&#95;list &#42;elem));</td>
</tr>


<tr>
<td class="left">Description</td>
<td class="left">Iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL.</td>
</tr>


<tr>
<td class="left">Param. #1</td>
<td class="left">A pointer’s to the first link of a list.</td>
</tr>


<tr>
<td class="left">Param. #2</td>
<td class="left">The address of a function to apply to each link of a list.</td>
</tr>


<tr>
<td class="left">Return value</td>
<td class="left">The new list.</td>
</tr>


<tr>
<td class="left">Libc functions</td>
<td class="left">malloc(3), free(3).</td>
</tr>
</tbody>
</table>

If you successfully completed both the mandatory and bonus sections of this project,
we encourage you to add other functions that you believe could be useful to expand your
library. For instance, a version of ft&#95;strsplit that returns a list instead of an array,
the function ft&#95;lstfold similar to the function reduce in Python and the function
List.fold&#95;left in OCaml (beware of the memory leak !). You can add functions to
manipulate arrays, stacks, files, maps, hashtables, etc. The limit is your imagination.
