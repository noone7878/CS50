#include <stdio.h>

int main(void)
{
    const int n = 8; //Used const so that it is not changed if ever there is n++ in the for loop
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                {
                    printf("#");
                }
            printf("\n");
        }

}
