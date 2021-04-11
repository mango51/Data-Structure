#include <stdio.h> // 다른 사람이 이미 만들어놓은 라이브러리 사용
#include <string.h>
#include <stdlib.h> // system 함수 사용할 때 필요한 라이브러리

typedef int element;
int score;
element score; // int score와 동일함

void func_st_push(element item);
element func_st_pop();
void func_st_del();
element func_st_peek();
void func_st_print();

// 라이브러리, 함수 및 변수 선언하는 부분 (헤더 파일) ***
