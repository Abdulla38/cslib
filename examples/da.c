#include "../include/da.h"
#include <stdio.h>

DA(int, Numbers);

int main(void) {
  Numbers arr = {0};
  da_reserve(&arr, DA_DEFAULT_CAP);
  for (int i = 0; i < 10; i++)
    da_append_item(&arr, i);
  for (int i = 0; i < arr.count; i++) {
    printf("%d\n", arr.data[i]);
  }
  da_free(&arr);
}
