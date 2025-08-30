#include <stdio.h>

int main(void)
{
    int posi = 0;
    int i = 0;
    while (i < 200){
        if (i%2==0){
            posi+=i;
        }
        
        i++;
    }
    printf("Hello, World!\n");
    printf("%d\n",posi);

return 0;
}