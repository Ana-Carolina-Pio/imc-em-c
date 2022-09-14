
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float peso;
    float altura;
    float IMC;
    char sexo;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo atraves de M ou F: ");
    scanf("%s", &sexo);
    IMC= peso/pow(altura,2);
    printf("O seu IMC e %.2f\n" , IMC);
    //homem
    if(sexo == 'M'){            
        if(26.4 >= IMC >= 20.7){
            printf ("Seu peso esta normal");
        }
        else{
            printf ("Seu peso nao esta normal");
        }
    }
    //mulher
    if(sexo == 'F'){
        if(25.8 >= IMC >= 19.1){
            printf ("Seu peso esta normal");  
        }
        else{
             printf ("Seu peso não esta normal");
        } 
    }
    return 0;
}