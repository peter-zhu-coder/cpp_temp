# Disassembly code  

Compare the assembly file and disassembly file;  

1. get assembly file by source code  
`g++ -S test.cc -o test.s`  

2. get disassembly file by object file  
`g++ -c test.cc -o test1.o`  
`objdump -s -d test1.o > test1.o.txt`  
or  
`g++ -c test.cc -o test2.o -g`  
`objdump -S -d test2.o > test2.o.txt`  

3. get disassembly file by executable file  
`g++ test.cc -o test1.exe`  
`objdump -s -d test1.exe > test1.exe.txt`  
or  
`g++ test.cc -o test2.exe -g`  
`objdump -S -d test2.exe > test2.exe.txt`  

notice: the option '-S' is used to display sorce code in the disassembly file, but the precondition is add option '-g' during compilation, which is add debugging information.  

反汇编器使用的指令命名规则与gcc生成的汇编代码有些细微的差别。比如在示例中，它省略了很多指令结尾的'q'.  
