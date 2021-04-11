#include "stack_0411.h" // 사용자가 정의한 내용 (in 헤더파일)  은  " "사용해서 include하기

element stack[5];
int top = -1;

void func_st_push(element item) { //스택에 데이터 삽입
	++top;
	if (top > (sizeof(stack)/4-1)) {
		printf("overflow!");
	}
	else {
		stack[top] = item;
		printf("데이터 삽입 완료!\n");
	}
}
element func_st_pop() { //스택으로 부터 데이터 삭제 (스택에서 데이터 빼기)
	if (top == -1) {
		printf("error");
		return 0;
	}
	else {
		printf("데이터 삭제 완료!\n");
		return 0;
	}
}
void func_st_del() { //스택에 있는 데이터 삭제 (데이터 필요없어서 버리기)
	if (top == -1) {
		printf("error");
	}
	else {
		stack[top] = 0;
		--top;
	}	
}
element func_st_peek() { //사용할 다음 데이터 검색 (다음 값이 무엇이 있는지 체크)
	return top;
}
void func_st_print() { //스택의 모든 데이터를 출력
	for (int i = 0; i < 5; i++) {
		printf("stack[%d]=%d\n", i, stack[i]);
	}
}