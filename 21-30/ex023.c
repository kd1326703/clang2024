#include <stdio.h>
main()
{
    //ex023,023-1
	/*int time, hours, min, sec;
	printf("Enter time in second : ");
	scanf("%d", &time);

    if (time > 5000){
        printf("You must input smaller than 5000 seconds. \n");
        }
    if (time < 0) {
        printf("Time cannot be negative. \n");
    }

    else {
        hours = time / 3600;
        min = (time % 3600) / 60;
        sec = time % 60;

        printf("%dhours %dmin %dsec \n", hours, min, sec);
    }
	

	return 0;
}

#include <stdio.h>*/

/*int main() {
    int totalSeconds, hours, minutes, seconds;

    // �� �Է� �ޱ�
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // �Է°��� 5000�� �Ѱų� ������ ��� �ٽ� �Է� �ȳ�
    while (totalSeconds > 5000 || totalSeconds < 0) {
        printf("Error: Input must be between 0 and 5000 seconds. Please enter again: ");
        scanf("%d", &totalSeconds);
    }

    // �ð� ���
    hours = totalSeconds / 3600;
    // ������ �ʸ� ������ ȯ���Ͽ� �� ���
    minutes = (totalSeconds % 3600) / 60;
    // ������ �� ���
    seconds = totalSeconds % 60;

    // ��� ���
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);

    return 0;*/

    //ex023-2
    /*int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("%d is not a vaild year \n",year);
    }
    
    else if (year % 4 == 0) {
        printf("%d is leap year \n", year);
    } 

    else if (year != 0) {
        printf("%d is not leap year \n", year);
    }*/

    //ex023-3
    int cal;
    float a, b;

    printf("Choose calculation : ");
    scanf("%d", &cal);

    while (cal > 4 || cal <= 0) {
        printf("Error : Please enter one between 1 and 4 : ");
        scanf("%d", &cal);
    }

    if (cal == 1) {
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
        printf("Result is %.2f \n", a + b);
    }

    else if (cal == 2) {
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
        printf("Result is %.2f \n", a - b);
    }

    else if (cal == 3) {
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
        printf("Result is %.2f \n", a * b);
    }

    else if (cal == 4) {
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
        while (b == 0) {
            printf("Error : Cannnot be devided by 0. Please enter again : ");
            scanf("%f %f", &a, &b);
        }
        printf("Result is %.2f \n", a / b);
    }

    return 0;
}
