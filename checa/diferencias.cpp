#include <stdio.h>

int main()
{
    int N1,N2;
    
    printf("Escriba un numero: ");
    scanf("%i", &N1);
    printf("Escriba otro numero: ");
    scanf("%i", &N2);
    if (N1==N2)
    {
     printf("Ambos numeros son iguales");
               
    }
    else if(N1>N2)
    {
     printf("El primer numero es mayor al otro");           

    }
    else if(N1<N2){
    printf("El primer numero es menor al otro");
    
         
         
         }
    getchar();
    getchar();
    return 0;
       
}