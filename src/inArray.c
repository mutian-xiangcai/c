#include "intArray.h"
#include <stddef.h>
#include <stdlib.h>

void int_array_init(intArray* table,int capacity){
	table->capacity = capacity;
	table->size = 0;
	table->head = NULL;
}

void int_array_add(intArray* table,int data){
	iNode* node = (iNode*)malloc(sizeof(iNode));
	if(table->head == NULL){
		node->data = data;
		node->link = NULL;
		table->head = node;
		table->size+=1;
	}else{
		iNode* next = table->head;
		while(next->link != NULL){
			next =next->link;
		}
		node->data = data;
		node->link = NULL;
		next->link = node;
		table->size+=1;
	}
}
