#include <stdio.h>
void swap(int *x, int *y)
{
   int temp;
   temp = x; /* 保存 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 temp 赋值给 y */
  printf("交换中，a 的值： %d\n", &x );
   printf("交换中，b 的值： %d\n", &y );
   return;
} 
/* 函数声明 */
int main ()
{
   /* 局部变量定义 */
   int a = 100;
   int b = 200;
 
   printf("交换前，a 的值： %d\n", a );
   printf("交换前，b 的值： %d\n", b );
   swap(a, b);
 
   printf("交换后，a 的值： %d\n", a );
   printf("交换后，b 的值： %d\n", b );
 
   return 0;
}
/* 函数定义 */
