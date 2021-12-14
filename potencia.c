#include <stdio.h>

void msg_potencia(int a, int b){
    int resultado = 1;
    for(int i = 0; i < b; i++){
        resultado = resultado * a;
    }
    printf("O resultado entre %d ^ %d = %d", a, b, resultado);
}

int main(){
    int a;
    int b;

    printf("***| Descubra aqui as suas duvidas sobre Potencia |***\n\n");
    printf("Lembre-se a exprecao e a^b \n");
    printf("Digite aqui o valor de a:\n");
    scanf("%d", &a);
    printf("Digite agora o valor de b:\n");
    scanf("%d", &b);

    msg_potencia(a, b);
}