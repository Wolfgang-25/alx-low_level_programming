#This project deals with C programming and learning the betty style of writing C
gcc -E $CFILE -o c runs a C file through the preprocessor and save the result into another file
gcc -c $CFILE compiles a C file but does not link
gcc -S $CFILE generates the assembly code of a C code and save it in an output file
gcc $CFILE -o cisfun compiles a C file and creates an executable named cisfun
