#include<stdio.h>
#include<windows.h>
int main(){ //This is the my 1st project guided from youtube
    int s,m,h;  // 
    int d=1000;  // for delay time in milli seconds
    printf("Set The Inital Time :"); //output print
    scanf("%d%d%d", &s,&m,&h); // inputs taken from user
    if(h>24 || m>60 || s>60){   //if condition for limits to time
        printf("Fucking! Set the correct Time"); // error 
        exit(0);
    }
    while(1){  // while loop
        s++;  // seconds count start
        if (s>59){  // conditation for seconds! seconds not exceed to 59
            m++;    // after seconds reach 59 print and start the minuits
            s=0;   // again seconds is ZERO
        }
        if(m>59){  //condition for minitus
            h++;   // hours increment
            m=0;   // reset the minutes
        }
        if(h>24){   //hours condition
            h=1;   // hours reset
        }
        printf("\n Time right now :");   // print status
        printf("%02d:%02d:%02d", s,m,h);  // excuite the total code 
        Sleep(d);  // delay the counting tht number
        system("cls"); // clear screen to good at looking
    }
}

// Thankyou guys im your yogesh joga
// haw haw haw//