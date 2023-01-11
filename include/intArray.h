#ifndef INT_ARRAY_H
#define INT_ARRAY_H

typedef struct iNode{
	struct iNode* link;
	int data;
} iNode;

typedef struct intArray{
	iNode* head;
	int size;
	int capacity;
} intArray;

void int_array_init(intArray* table,int capacity);

void int_array_add(intArray* table,int data);

#endif
