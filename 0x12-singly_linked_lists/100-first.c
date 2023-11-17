#include <stdio.h>
#include "lists.h"

int main(void);
void init(void);
static void first(void) {
printf("Message\n");
}
void init(void) {
first();
}
