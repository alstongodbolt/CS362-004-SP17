/*The char function mad ea little more sense to me in the beginning of program development. I decided to create an array of char
variables (ranChar) and fill it will a number of variables. Next, I created the randomize variable (r) and decided it was
best to return what every value that was randomlly generated using return ranChar[r]

The string function didn't make sense to me in the beginning. I started of by attempting to return strings to the test
function. However, through research I learned that would never work. Also, when I ran the program I'd either get an 
infinite loop or uninitialized value error. So I went to lunch and had the thought of just doing the same thing for the string
function as I did for the char function. Th only difference is that i would enter all of the characters in a string 
and enclose quotes. This worked, eventually

I first ran the newly created program (using VS17) with 26 letters in the string. I forced quit the program at about 5 million
iterations. I decided to change the string to just the letters it needed to generate the expected output. about 100o0 iterations later, 
I saw the error message. 

Now that I know the program works as expected, I can go back and add all of the letters and numbers.

The inputchar function randomally searches the ranChar array and returns ranChar[r] to the function. The input string function 
randomly searches through the string and returns the address of temp[r]*/