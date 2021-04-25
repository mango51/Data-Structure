#include "stack.h"

sNode * top = NULL;

void fnc_stl_push(element item){
	sNode * new_node = (sNode *)malloc( sizeof(sNode) );

	new_node->data = item;
	new_node->next = top;

	top = new_node;
}

element fnc_stl_pop(){
	element item;
	sNode * temp = top;

	if(top==NULL){
		printf("Stack is Empty!!!\n");
		return 0;
	}

	top = top->next;

	item = temp->data;
	free(temp);

	return item;

}

void fnc_stl_del(){
	sNode * temp = top;

	if(top == NULL){
		printf("Stack is Empty!!!\n");
		return ;
	}

	top = top->next;
	free(temp);
}

element fnc_stl_peek(){
	element item;

	if(top == NULL){
		printf("Stack is Empty!!!\n");
		return ;
	}

	item = top->data;

	return item;
}

void fnc_stl_print(){
	sNode * temp = top;

	printf("Stack [ ");
	while(temp){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("]\n");
}
