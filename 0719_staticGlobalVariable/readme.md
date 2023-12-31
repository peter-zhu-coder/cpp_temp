# 静态全局变量

全局变量和静态全局变量的区别，一般在涉及多个源文件时：  

作用域：  

* 全局变量：全局作用域。当一个源程序由多个源文件组成时，全局变量在各个源文件中都是可见的。当然，其他不包含全局变量定义的源文件需要用extern关键字再次声明这个全局变量；  
* 静态全局变量：文件作用域。静态全局变量则限制了其作用域， 即只在定义该变量的源文件内有效，在同一源程序的其它源文件中不能使用它。由于静态全局变量的作用域局限于一个源文件内，只能为该源文件内的函数公用，因此可以避免在其它源文件中引起错误。  

生命周期（内存分配）：

* 全局变量：在静态存储区内分配空间， 在整个程序运行期间都不释放。  
* 静态全局变量：在静态存储区内分配存储单元， 在整个程序运行期间都不释放。  

从以上分析可以看出， 把局部变量改变为静态变量后是改变了它的存储方式即改变了它的生命周期。把全局变量改变为静态变量后是改变了它的作用域，限制了它的使用范围。  
