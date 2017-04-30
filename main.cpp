/* Prints a message on the screen */
#include <stdio.h>
int main()
{
    int Cont;
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
    scanf(" %d", &Cont);
    /* This determins what to do*/
    if (Cont==1)
    printf("Our PBL is on Wellness\n");
    printf("Sensors to dectect if pathogens can reproduce\n");
    printf("This is made by Daniel Thompson\n");
    printf("Press 1 to contitube on the Sensors section\n");
    printf("Press 2 to go to the C/C++ Section\n");
    printf("Press 3 to exit\n");
    scanf(" d", &Cont);
    if (Cont==1)
    printf("Content will come in a future patch\n");
    if (Cont==3)
    printf("Close\n");
    if (Cont==2)
    printf("Welome to learn to program in C/C++\n");
    printf("printf\n");
    printf("prints text on the screen\n");
    printf("scanf\n");
    printf("scans for input\n");
    printf("int means a intger\n");
    printf("if means if then statements");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n"); 
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Press 1 to go to the Sensors section\n");
    printf("Press 2 to countitune the tutoral of C/C++\n");
    printf("Press 3 to exit\n");
    scanf(" %d", &Cont);
    if (Cont==1)
    printf("Our PBL is on Wellness\n");
    printf("Sensors to dectect if pathogens can reproduce\n");
    printf("This is made by Daniel Thompson\n");
    
    if (Cont==2)
    printf("Content will come in a future patch\n");
    
    if (Cont==3)
    printf("Thank you\n");
    printf("Copyright danielt3131\n");
    printf("Made By danielt3131\n");
    printf("Built by danielt3131\n");
    printf("Press 0 to exit\n");
    scanf(" %d", &number_exit);
    if (number_exit ==0)
    timer=timer+2;



  }
