/* Lab 8
By - Kaumudi Gupta (A0174617Y)
Email-e0215319@u.nus.edu */


To do the fuzzing, 
First compile and run the file lab8.c in the terminal using command ->
gcc lab8.c 
/a.out

This will produce a file called Result which has the output of all the combinations, in order to check the secret code run the file named fuzz.c by using command ->
gcc fuzz.c 
/a.out

This will give you the output ie. the secret code.


To see all the inputs which generate the secret code, compile and run formula.c in the terminal using command ->
gcc formula.c
./a.out

This will give you all the input numbers which generate the secret code. 
