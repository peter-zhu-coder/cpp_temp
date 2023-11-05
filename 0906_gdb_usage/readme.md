# gdb knowledge

you need compile the source file with "-g" option if you want to gdb.  
then you can debug program by following command:  
`gdb <prog>`
the option "--args" can be used to set agru;  

when you begin debug with gdb, these command can help you:
l // list, list the source code;
list <linenum> // list the source code around special linenum;
list <function> // list a special function;
list // list the code after current line;
list - // list the code before current line;

r // run, begin run the prog;
info program // cehck is the prog running;
c // continue run when pause prog
step //
next //
bt // backtrace 打印当前的函数调用栈的所有信息
bt <n> // 只打印栈顶上n层的栈信息
bt <-n> //
f <n> // frame <n>, n是一个从0开始的整数，是栈中的层编号。比如：frame 0，表示栈顶，frame 1，表示栈的第二层。


设置断点：
break function
b linenum
b filename:linenum
b filename:function
b *address
b if <condition> // the breakpoint is valid when condition is true
i b // info b

d number // delete breakpoint number
delete breakpoints // delete all bps  
clear <linenum> // clear all stop point in linenum
clear <function> // clear all stop point in function
disable number // disable breakpoint number
dis breakpoints // disable all breakpoints;
enable number  
enable breakpoints  

设置观察点
watch <expr> // 表达式值有变化时，马上停住程序
info watchpoints

设置捕捉点
catch <event>

查看运行时数据
p <expr> // print expression, the expr can be a function name;
p 'file'::variable // print a variable in special file
p function::variable //
