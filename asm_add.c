#include <stdio.h>

int main(void)
{
        int foo = 10, bar = 15;
        __asm__ __volatile__("addl  %%ebx,%%eax" // ���ָ��
                             :"=a"(foo)  // ���������eax���ڴ�ż���������󱣴浽foo
                             :"a"(foo), "b"(bar)  // �����������һ��������foo����eax����ţ��ڶ���������bar����ebx�����
                             );
        printf("foo+bar=%d\n", foo);
        return 0;
}
