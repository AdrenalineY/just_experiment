#include <stdio.h>

int step;

void MoveDisk(int number, int start, int end, int mid);

int main()
{
    int disk_number;
    step = 0;

    printf("Enter the number of the disk:\n");
    scanf("%d", &disk_number);

    MoveDisk(disk_number, 1, 3, 2);

    printf("Step = %d", step);

    return 0;
}

void MoveDisk(int number, int start, int end, int mid)
{

    if (number == 1)
    {
        printf("Move disk 1 from %d to %d.\n", start, end);
        step++;
    }
    else
    {
        MoveDisk(number - 1, start, mid, end);

        printf("Move disk %d from %d to %d.\n", number, start, end);
        step++;

        MoveDisk(number - 1, mid, end, start);
    }
}