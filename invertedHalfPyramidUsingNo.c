#include<stdio.h>
int main(void)
{
  for (size_t i = 5; i >0 ; i--) {
    for (size_t j = 1; j <=i; j++) {
      printf("%d ",j );
    }
    printf("\n");
  }
}
