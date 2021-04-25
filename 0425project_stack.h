#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10000

typedef int element;

typedef struct stackNode{
	element data;
	struct stackNode * next;
}sNode;

void fnc_stl_push(element item);
element fnc_stl_pop();
void fnc_stl_del();
element fnc_stl_peek();
void fnc_stl_print();
