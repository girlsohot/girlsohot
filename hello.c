#include <stdio.h>
#include <stdlib.h>
void pint(int n);

int main()
{
    int  i;
    i = 0.9 ;
//     int i;
//     int arr[10] ;
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = 1;
//         arr[i] = ~arr[i];
//         printf("%d\n",arr[i]);
//     }
    
//     system("pause"); //pause task.
//    printf("hello word!");
//    printf("%d",abs( -100 ));
printf("%d",sizeof(i));
   return 0;
}
void pint(int n)
{
    if (n > 9)
    {
        pint(n/10);
    }
    printf("%d",n%10);
    
}
