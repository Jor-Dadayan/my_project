#include <stdio.h>

int main() {

int num;
int index;
scanf("%d %d", &num, &index);
printf("%d\n", (1 << index) | num);
}
