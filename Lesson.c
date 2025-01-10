
#include <stdio.h>

/*
    int main()
{
    int a, b, c, cheese, monkeys, anything;
    scanf("%d" "%d" "%d" "%d" "%d" "%d", &a, &b, &c, &cheese, &monkeys, &anything);

    printf("%d", a*b+c+cheese*monkeys*anything/19);

    } 
*/

/* #include <stdio.h>

int main()
{
    printf("Hellow World\n");

    printf("Before we move on to LOOPS! \n jina ni? \n");

    char str[] = ""; 

    scanf("%s", str);

    printf("My name is %s", str);
}
 */

    /* #include <stdio.h>

    // A program that prints the number that a user inputs
    int main()
    {
        printf("Program Starting.... \n bzzt \n bzzt \n Please input a number \n"); //this is how all programs should start yk..


        int numb;

        scanf("%d", &numb);

        printf("YOUR NUMBER IS!!!! %d", numb);




    } */

/* 
        // C Implementation for drawing circle 
        #include <graphics.h> 

        //driver code 
        int main() 
        { 
            // gm is Graphics mode which is 
            // a computer display mode that 
            // generates image using pixels. 
            // DETECT is a macro defined in 
            // "graphics.h" header file 
            int gd = DETECT, gm; 

            // initgraph initializes the 
            // graphics system by loading a 
            // graphics driver from disk 
            initgraph(&gd, &gm, ""); 

            // circle function 
            circle(250, 200, 50); 

            getch(); 

            // closegraph function closes the 
            // graphics mode and deallocates 
            // all memory allocated by 
            // graphics system . 
            closegraph(); 

            return 0; 
        } 
 */
    /* 
    int main ()
    {
        printf("Testing Input");

        char input[] = {'A', 'Z', 'D', 'L', 'Y', 'M' };

        printf("\n\n", input);

        for (char i = 0; i < 8; i++){
        switch(input[i]){
                case 'A' ... 'I':
                printf("%c is in the first labeled range\n", input[i]);
                break;
                case 'J' ... 'R':
                printf("%c is in the seconderrss labeled range\n", input[i]);
                break;

                case 'S' ... 'V':
                printf("%c is not in a range\n", input[i]);
                break;

                default:
                printf("Not labeled... \n ");
                break;
        } 
        }
    } */


int main (){

    int arr[] = {24, 56, 72, 11, 33, 88, 45, 63, 9, 78, 62, 18, 55, 2, 67, 48, 16, 54, 80, 23};
    for(int i = 0; i < 9;i++){
        switch(arr[i]){
            case 0 ... 20:
            printf("%d is bigger than twenty\n\n", arr[i]);
            break;
             case 24 ... 54:
            printf("%d is in the range of irregular activities\n\n", arr[i]);
            break;
             case 55 ... 71:
            printf("%d is in need of serious re aligning\n\n", arr[i]);
            break;
            default:
            printf("%d no need to be moved\n\n", arr[i]);
            break;
        }
    } 
}