#include <stdio.h>

int main(void)

{

  int res;

  printf("整数を入力してください。\n");

  scanf("%d", &res);

  switch(res) {

    case 5:

      printf("5が入力されました。 \n");

      break;

    case 6:

      printf("6が入力されました。 \n");

      break;

    default:

      printf("5、6以外が入力されました。 \n");

      break;

  }

  printf("処理を終了します。\n");

  return 0;

}

