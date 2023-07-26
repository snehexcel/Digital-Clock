#include <stdio.h>
#include <windows.h>
int main()

{
    int h,m,s;
    int d=1000; // we add a delay of 1000 milliseconds and we will use it in the function sleep
    printf("Set time :\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("Error ! \n");
        exit(0);
    }
    while(1)// this is an infinite loup and anything inside will repeat itself to infinity
    {
        s++;
        if(s>59)
        {
           m++;
           s=0; 
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        sleep(d);// the function sleep slow down the while loop make it more like a real clock
        system("cls"); // this clears the screen
        }
        return 0;
    }
