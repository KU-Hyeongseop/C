#include <stdio.h>

// int main(){
//     int x=1, y=2, z[2];
//     z[0] = 4;
//     int *ptr;
//     ptr = &x;
//     printf("ptr: %p\n", ptr);
//     y = *ptr;
//     printf("y: %d\n", y);
//     *ptr = 0; //x만 0으로 바뀜
//     printf("y: %d\n", y);
//     printf("*ptr: %d\n", *ptr);
//     ptr = &z[0];
//     printf("ptr: %p\n", ptr);
//     printf("z[0]: %d\n", z[0]);
//     return 0;
// }


// int main(){
//     int x, y, sum;
//     x = 100;
//     y = 200;
//     int *ptr_x, *ptr_y, *ptr_sum;
//     ptr_x = &x;
//     ptr_y = &y;
//     ptr_sum = &sum;
//     *ptr_sum = *ptr_x + *ptr_y;
//     printf("ptr_x: %p, ptr_y: %p\n", ptr_x, ptr_y);
//     printf("*ptr_x: %d, *ptr_y: %d\n", *ptr_x, *ptr_y);
//     printf("*ptr_sum: %d\n", *ptr_sum);
//     return 0;
// }

// int main(){
//     int x = 100;
//     int *ptr_x;
//     ptr_x = &x;
//     *ptr_x = *ptr_x + 200;
//     printf("x: %d\n", x);
// }

// int main(){
//     int x;
//     int *ptr_x = &x; //한번에 써도 되네
//     x = 100;
//     // ptr_x = &x;
//     printf("x: %d\n", x);
//     printf("*ptr_x: %d\n", *ptr_x);
//     printf("ptr_x: %p\n", ptr_x);
//     return 0;
// }

