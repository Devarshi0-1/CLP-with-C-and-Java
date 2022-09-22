#include <stdio.h>
void morning();
void afternoon();
void evening();
void night();
int main()
{
    int time;
    printf("What time is it?\n");
    printf("This is the input catalogue\n If Time is between:\n 4AM-11:59AM \t 1 \n 12PM-4:30PM \t 2 \n 4:30PM-8:00PM \t 3 \n 8:00PM-4:00AM \t 4\n");
    scanf("%d", &time);
    switch (time)
    {
    case 1:
        morning();
        break;
    case 2:
        afternoon();
        break;
    case 3:
        evening();
        break;
    case 4:
        night();
        break;
    default:
        printf("Invalid input\n");
    }
    return 0;
}
    void morning()
    {
        printf("Good Morning Devarshi, One more day to do some hard work");
    }
    void afternoon()
    {
        printf("Good Afternoon");
    }
    void evening()
    {
        printf("Good Evening");
    }
    void night()
    {
        printf("You should sleep, Good Night");
    }
