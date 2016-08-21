#include <stdio.h>

int main(void)

{

  char res;

  printf("あなたは男性ですか？ \n");

  printf("YまたはNを入力してください。 \n");

  res = getchar();

  if(res == 'Y' || res == 'y') {

    printf("男性でしたか。。 \n");

  } else if(res == 'N' || res == 'n') {

    printf("女性でしたか。。 \n");

  } else { 

    printf("YかNを入力してください。 \n");

  }
  return 0;
}

