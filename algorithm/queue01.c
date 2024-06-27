#include <stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);
main()
{
	int key, data, result;

	do {
		printf("\n\nEnter 'i' to enqueue, 'o' to dequeue : ");
		key = getche();
		printf("\n");

		//enqueue ó��
		if (key == 'i') {
			printf("Enter data : ");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n***Queue is full***\n");
			}
			else {
				display();
			}
		}

		//dequeueó��

		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n***Queue is blank***\n");
			}
			else {
				printf("Dequeued data(%d) from Queue\n", data);
				display();
			}
		}
	} while (key != 'e');

	return 0;
}

//���� ǥ�� �Լ�
void display(void)
{
	int i;

	printf("\n===Contents of the current queue===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d] is %d", i, queue[i]);
		if (i == head) {
			printf("��- current head is %d", head);
		}
		if (i == tail) {
			printf("��- current tail is %d", head);
		}
		printf("\n");
	}
	return;
}
//���ÿ� ������ push �Լ�
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;

	return 0;
}

//���ÿ��� ������ pop �Լ�
int dequeue(int* pd)
{
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;

	return 0;
}