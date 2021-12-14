

int nums[3];
int tamanhoArray =  sizeof(nums)/sizeof(nums[0]);

#include <stdio.h>
#include <string.h>


int somararray(int numeros [], int tamanhoArray){

    int total=0;

    for (int i=0; i<tamanhoArray; i++)
    {
        total= total+numeros[i];
    }

    return total;
}

int main(){

    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int tamanhoArray =  sizeof(nums)/sizeof(nums[0]);

    int total = somararray(nums, tamanhoArray);

    printf("Total:  %d", total);
}