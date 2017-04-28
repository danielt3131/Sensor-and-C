/* Prints a message on the screen */
#include <stdio.h>
main()
{
    int Page;
    int C;
    int Sensor;
    int Alpha;
    int License;
    int timer;
    timer=1;
    int number_exit;
    int number;
    int number_2;
    int radius;
    int length;
    int width;
    float area_c;
    int area_r;

    printf("To order to use this program you must agree to the GNU GPLv2 License\n");
    printf("Type 5 if you agree to the License\n");
    scanf(" %d", &License);
    if (License==5)
    printf("Warning this is a beta build press 9 to continue\n");
    scanf(" %d", &Alpha);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Press 1 to help understand sensors\n");
    printf("Press 2 to learn to use C/C++\n");
    scanf(" %d", &Sensor);
    scanf(" %d", &C);
    /* This determins what to do*/
    if (Sensor==1)
    printf("2222\n");
    
    if (C==2)
    printf("Debug\n");

    printf("Thank you\n");
    printf("Copyright danielt3131\n");
    printf("Made By danielt3131\n");
    printf("Built by danielt3131\n");
   printf("Press 0 to exit\n");
    scanf(" %d", &number_exit);
    if (number_exit ==0)
    timer=timer+2;



  }