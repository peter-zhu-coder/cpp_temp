# Compilation process

let's study the complete compilation process of gcc/g++ compiler.  

* precompilation;
* compilation;
* assemble;
* link;

1. Get executable file directly  
`g++ test.cc`;  
then you can get a executable file named "a.exe".  
if you want specify the name of executable file, you can execute the command:  
`g++ test.cc -o test.exe`;  
you can get a executable file named "test.exe".  

2. Precompilation  
`g++ -E test.cc -o test.i`  
you can get a interpreted (pre-compiled) file named "test.i";  

3. Compilation  
`g++ -S test.cc -o test.s`  
`g++ -S test.i -o test.s`  
after either of the two commands above, you can get a assembly code file named "test.s";  

4. Assemble  
`g++ -c test.cc -o test.o`  
`g++ -c test.s -o test.o`  
after either of the two commands above, you can get a object file named "test.o";  

5. Link  
`g++ test.cc -o test.exe`  
`g++ test.o -o test.exe`  
after either of the two commands above, you can get a executable file named "test.exe";  
