#include <stdio.h>

int main(void)
{
        int foo = 10, bar = 15;
        __asm__ __volatile__("addl  %%ebx,%%eax" // 汇编指令
                             :"=a"(foo)  // 输出参数：eax用于存放计算结果，最后保存到foo
                             :"a"(foo), "b"(bar)  // 输入参数：第一个参数是foo，用eax来存放；第二个参数是bar，用ebx来存放
                             );
        printf("foo+bar=%d\n", foo);
        return 0;
}
