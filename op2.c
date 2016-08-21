#include <stdio.h>

int main(void)

{

int res;

char ans;

int hoge;
int hoge2;
int hoge3;
int hoge4;

hoge = 10&12;
printf("%d \n", hoge);

hoge2 = 10|12;
printf("%d \n", hoge2);

hoge3 = 10^12;
printf("%d \n", hoge3);

hoge4 = ~ 10;
printf("%d \n", hoge4);

return 0;

}
