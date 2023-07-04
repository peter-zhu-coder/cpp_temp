#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <memory.h>

// compare the function of memcmp and memmove
// 1. function memcmp
// return value: 
// destination ptr when success;
// null when fail;
// int main (){
//    char str_1[10] = "abc";
//    char str_2[10] = "abc";
//    char* str3 = nullptr;
//    puts("string str_1 before using memcpy ");
//    puts(str_1);
//    void* ptr = memcpy(str_1, str_2, sizeof(str_2));
//    puts("\n string str_1 after using memcpy ");
//    puts(str_1);
//    return 0;
// }

char str1[7] = "aabbcc";
int main()
{
    printf( "The string: %s\n", str1 );
    memcpy( &str1[2], &str1[0], 4 );
    printf( "New string: %s\n", str1 );

    strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string

    printf( "The string: %s\n", str1 );
    memmove( str1 + 2, str1, 4 );
    printf( "New string: %s\n", str1 );

    return 0;
}