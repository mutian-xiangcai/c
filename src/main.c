#include <stdio.h>
#include <stdlib.h>
#include "intArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	intArray table;
	int_array_init(&table,10);
	printf("%d\n",table.capacity);
	int_array_add(&table,23);
	int_array_add(&table,24);
	printf("%d\n",table.head->link->data);
	return 0;
}
