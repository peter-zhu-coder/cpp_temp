this file teach you how to build and use a static library.
提供一个静态库需要一个库文件和头文件；

1. build a static library:
step1: Write the source file and generate to object file;
g++ -c sub.cc sum.cc div.cc multiply.cc

step2: build object files to static library;
ar rcs libmymath.a sub.o sum.o div.o multiply.object

step3: write a head file, provide API to users;
my_math.h

2. usage:
（1）g++ -static test.cc ./libmymath.a
（2）g++ -static test.cc -lmymath -L./
这两种方式都可以，可以省略-static；
第一种方式是直接指定库文件的路径；
第二种方式-l是指定库的名字；
-L是指定库的路径；编译器默认查找的/usr/lib;/usr/local/lib系统文件夹中的库。要么将你制作的libmymath.a放到上面的lib文件夹中，要么通过-L来指定你存放库的路径。
如果头文件不在当前目录下，需要通过-I来指定，比如
g++ test.cc -static ./lib_dir/libmymath.a -I ./lib_dir/
g++ test.cc -static -lmymath -L ./lib_dir/ -I ./lib_dir/

