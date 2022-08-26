#include<stdio.h>
#include<windows.h>
int main(){
    int h,m,s;
    int d=1000;//we add a delay of 1000 miliseconds and we will use it in the function sleep
    printf("Set Time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if (h>24 || m>60 || s>60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1)//this is an infinite loop and anything inside it will repeat itself to infinity
    {
        s++;
        if (s>59)
        {
            m++;
            s=0;
        }
        if (m>59)
        {
            h++;
            m=0;
        }
        if (h>23)
        {
            h=0;
        }
        if (h>11)
        {
            printf("\n\n\n\t\t\tClock is:");
            printf("\n\n\n\t\t\t%02d:%02d:%02d PM",h,m,s);
        }
        else{
            printf("\n\n\n\t\t\tClock is:");
            printf("\n\n\n\t\t\t%02d:%02d:%02d AM",h,m,s);
        }
        Sleep(d);
        system("cls");
    }
    

    return 0;
}