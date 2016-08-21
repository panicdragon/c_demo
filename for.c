#include <stdio.h>

int main(void)

{

int res;

int i;

printf("何番目の処理を飛ばしますか？（1~10）\n");

scanf("%d", &res);

for(i = 1; i <= 10; i++) {

if(i == res)

continue;

printf("%d番目繰り返し中。\n", i);

}

printf("繰り返し終了。\n");

return 0;

}
