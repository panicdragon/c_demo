#include <stdio.h>

int main(void)

{

  int res;

  printf("整数を入力してください。\n");

  scanf("%d", &res);

  if(res == 5) {
    printf("5が入力されました。 \n");
  } 
  else if(res == 6) {
    printf("6が入力されました。 \n");
  } 
  else {
    printf("5、6以外が入力されました。 \n");
  } 

  printf("処理を終了します。\n");

  return 0;

}

