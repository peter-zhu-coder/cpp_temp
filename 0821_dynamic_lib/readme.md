Linux下生成和使用动态库的步骤如下：

1. 编写源文件。
2. 将一个或几个源文件编译链接，生成共享库。
3. 通过 -L<path> -lxxx 的gcc选项链接生成的libxxx.so。
4. 把libxxx.so放入链接库的标准路径，或指定 LD_LIBRARY_PATH，才能运行链接了libxxx.so的程序。  

生成库：
`g++ -fPIC -shared -o libmax.so max.cc` 
等同于下面两行 
`g++ -c -fPIC max.cc`
`g++ -shared -o libmax.so max.o`
其中， -fPIC是编译选项，PIC是 Position Independent Code 的缩写，表示要生成位置无关的代码，这是动态库需要的特性； -shared是链接选项，告诉gcc生成动态库而不是可执行文件。

使用库：
`g++ test.cc -L. -lmax` 
注意，如果同一目录下同时存在同名的动态库和静态库，比如 libmax.so 和 libmax.a 都在当前路径下，则gcc会优先链接动态库。
或者
`g++ test.cc ./libmax.so`

生成可执行文件，运行
`./a.out`
运行 ./a.out 会得到错误提示。找不到libmax.so，原来Linux是通过 /etc/ld.so.cache 文件搜寻要链接的动态库的。而 /etc/ld.so.cache 是 ldconfig 程序读取 /etc/ld.so.conf 文件生成的。（注意， /etc/ld.so.conf 中并不必包含 /lib 和 /usr/lib，ldconfig程序会自动搜索这两个目录）。如果我们把 libmax.so 所在的路径添加到 /etc/ld.so.conf 中，再以root权限运行 ldconfig 程序，更新 /etc/ld.so.cache ，a.out运行时，就可以找到 libmax.so。
另一种简单的方法，就是为a.out指定 LD_LIBRARY_PATH。
`LD_LIBRARY_PATH=. ./a.out`

