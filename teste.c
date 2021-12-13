#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void){
    char lista[]="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    int valor_atual=0; // Variavel para receber valores do calculo para comparação
    int valor_novo=0;  // Variavel para receber valores do calculo para comparação
    int tam;
    int p; // Variavel para armazenar a posição dos 5 digitos com maior produto

    tam=strlen(lista);

    for(int x=0;x<tam-4;x++){

        char caractere[2];
        char caractere1[2];
        char caractere2[2];
        char caractere3[2];
        char caractere4[2];

        caractere[1]='\0';
        caractere1[1]='\0';
        caractere2[1]='\0';
        caractere3[1]='\0';
        caractere4[1]='\0';

        caractere[0]=lista[x];
        caractere1[0]=lista[x+1];
        caractere2[0]=lista[x+2];
        caractere3[0]=lista[x+3];
        caractere4[0]=lista[x+4];

        int n=atoi(caractere);
        int n1=atoi(caractere1);
        int n2=atoi(caractere2);
        int n3=atoi(caractere3);
        int n4=atoi(caractere4);

        /*printf("%i%i%i%i%i\n",n,n1,n2,n3,n4); //print para verificar o que foi convertido para testes */
        
        valor_novo = n*n1*n2*n3*n4;
        if(valor_novo > valor_atual){
            valor_atual = valor_novo;
            p = x;
        }
    }
    
    printf("%c%c%c%c%c\n", lista[p], lista[p+1], lista[p+2], lista[p+3], lista[p+4]);
    
    return 0;
}