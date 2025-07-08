#include <stdio.h>
#include <conio.h>   
#include <dos.h>     

int main() {
    int h = 0, m = 0, s = 0;
    while (!kbhit()) {
        system("cls");  
        printf("Time: %02d:%02d:%02d\n", h, m, s);
        printf("Press any key to stop...\n");

        delay(1000);  
        s++;

        if (s == 60) {
            s = 0;
            m++;
        }
        if (m == 60) {
            m = 0;
            h++;
        }
    }

    getch(); 
    printf("\nStopwatch stopped at %02d:%02d:%02d\n", h, m, s);

    return 0;
}
