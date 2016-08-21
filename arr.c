#include <stdio.h>

#define SUB 2

#define NUM 3

int main(void)

{


int i;

int arr[][3] = {

{20,40,70},{10,30,50}

};





for(i = 0; i < NUM; i++) {

printf("%d番目の人のドンキーコングのスコアは%dです。\n", i + 1, arr[0][i]);

printf("%d番目の人のマリオのスコアは%dです。\n", i + 1, arr[1][i]);

}

return 0;

}
