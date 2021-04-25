#include "stack.h"

void main(){
	element item;
	int i;

	for(i=1; i<=10; i++){
		fnc_stl_push(i);
	}
	fnc_stl_print();

	item = fnc_stl_peek();
	printf("peek=%d\n", item);

	item = fnc_stl_pop();
	printf("pop=%d\n", item);
	fnc_stl_print();
	printf("\n");

	for(i=1; i<=10; i++){
		fnc_stl_del();
	}
	fnc_stl_print();
	printf("\n");

	for(i=1; i<=SIZE; i++){
		fnc_stl_push(i);
	}
	fnc_stl_print();

}
