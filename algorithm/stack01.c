#include <stdio.h>
#define STACKSIZE 8		//스택 사이즈
int stack[STACKSIZE];	//스택 영역용 배열
int sp = 0;				//스택 포인터(배열 첨자용)

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;

	do {
		printf("\n\nEnter 'i' to push, 'o' to pop : ");
		key = getche();
		printf("\n");

		//push 처리
		if (key == 'i') {
			printf("Enter data : ");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n***Stack is full***\n");
			}
			else { display();
			}
		}

		//pop 처리

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n***Stack is blank***\n");
			}
			else {
				printf("Poped data(%d) from stack\n", data);
				display();
			}
		}
	} while (key != 'e');

	return 0;
}

//스택 표시 함수
void display(void)
{
	int i;

	printf("\n===Contents of the current stack===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d] is %d", i, stack[i]);
		if (i == sp) {
			printf("←- current sp is %d", sp);
		}
		printf("\n");
	}
	return;
}
//스택에 데이터 push 함수
int push(int d)
{
	if (sp == STACKSIZE) { return -1; }
	stack[sp] = d;
	sp++;

	return 0;
}

//스택에서 데이터 pop 함수
int pop(int* pd)
{
	if (sp == 0) { return -1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;

	return 0;
}