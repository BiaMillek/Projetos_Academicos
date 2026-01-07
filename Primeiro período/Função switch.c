/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra,volume =50;
    scanf("%c",&letra);
    switch(letra){
        case('u'):
        printf("Cima\n");
        if(volume <100){
            volume++;
        }
        break;
        
    case('a'):
        printf("baixo\n");
        if(volume > 0){
            volume --;
        }
        
    break;
    default:
printf("Não reconhecido");
break;


    
    
    }
    
    printf("%d",volume);
    return 0;
}