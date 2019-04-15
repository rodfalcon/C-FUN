#include "stdio.h"
#define ex10

/******************************************************************************

            FUNÇÕES


			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
    */
#ifdef ex1

int find_index(int a[], int num_elements, char valor);

void main(void)
{
   int a[13] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
   int index;
   char valor;

   printf("\nDigite uma letra:\n");
   scanf("%c", &valor);

   index = find_index(a, 13, valor);
   if (index != valor)
   {
	 printf("A letra %c nao foi encontrada.\n", valor);
   }
   else
   {
	 printf("A letra %c foi encontrada em %d\n", valor, index);
   }

}

int find_index(int a[], int num_elements, char valor)
{
   int i;
   for (i=0; i<num_elements; i++)
   {
	 if (a[i] == valor)
	 {
	    return(valor);
	 }
   }
   return(-1);
}

    #endif // ex1

/**

2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os
**/
#ifdef ex2
int soma(int x,int y);
int subtrai(int x,int y);
int multiplica(int x,int y);
float divide(int x,int y);


main()
{
int a,b,c;
float d, e;

printf("Digite valor de A\n");
scanf("%d", &a);

printf("\nDigite valor de B\n");
scanf("%d", &b);

printf("\n=======chamando as funcoes===== \n");

c = soma(a,b);

printf("soma de a + b e': %d + %d = %d \n",a,b,c);

c = subtrai(a,b);

printf("subtracao de a - b e': %d - %d = %d \n",a,b,c);

c = multiplica(a,b);

printf("multiplicacao de a * b e': %d * %d = %d \n",a,b,c);

c = divide(a,b);

printf("divisao de a / b e': %d / %d = %d \n",a,b,c);


}


int soma(int x,int y)
{
int z;
z = x + y;

return(z);
}

int subtrai(int x,int y)
{
int z;
z = x - y;

return(z);
}

int multiplica(int x,int y)
{
int z;
z = x * y;

return(z);
}

float divide(int x,int y)
{
float z;
z = x / y;

return(z);
}

#endif // ex2

/**

3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.
 **/
 #ifdef ex3
int soma(int x[], int n);
int subtrai(int x[], int n);
int multiplica(int x[], int n);
int divide(int x[], int n);


main()
{
int b,c,i, n;

printf("Digite a quantidade de valores a ser calculado\n");
scanf("%d", &n);

int a[n];

printf("\nDigite os valores para calculo\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

printf("\n=======chamando as funcoes===== \n");

c = soma(a,n);

printf("\nSoma dos termos = %d\n", c);

c = subtrai(a, n);

printf("\nSubtracao dos termos = %d\n", c);

c = multiplica(a,n);

printf("\nMultiplicacao dos termos = %d\n", c);

c = divide(a,n);
printf("\nDivisao dos termos = %.d", c);

}

int soma(int x[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res = res+x[i];
            return(res);
}

int subtrai(int x[], int n)
{
 int res = 0, i;
    for (i = 0; i < n; i++)
        res = res-x[i];
            return(res);
}

int multiplica(int x[], int n)
{
int res = 0, i;
    for (i = 0; i < n; i++)
        res = soma(x,n)*soma(x,n);
            return(res);
}

int divide(int x[], int n)
{
int res = 0, i;
    for (i = 0; i < n; i++)
        res = (subtrai(x,n))/(soma(x,n));
            return(res);
}

 #endif
 /**
4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).

    **/
    #ifdef ex4
int soma(int x[], int n);
int subtrai(int x[], int n);
int multiplica(int x[], int n);
double divide(int x[], int n);


main()
{
int c,i=0, n=0, opc;

printf("Digite a quantidade de valores a ser calculado\n");
scanf("%d", &n);

int a[n];

printf("\nDigite os valores para calculo\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

printf("\nDigite o valor 1 para soma\n");
printf("\nDigite o valor 2 para subtracao\n");
printf("\nDigite o valor 3 para multiplicacao\n");
printf("\nDigite o valor 4 para divisao\n");
scanf("%d", &opc);

printf("\n=======chamando as funcoes===== \n");

switch(opc){

case 1:{

c = soma(a,n);

printf("\nSoma dos termos = %d\n", c);
    break;
};

    case 2:{

    c = subtrai(a, n);

    printf("\nSubtracao dos termos = %d\n", c);
    break;
    };

case 3:{

c = multiplica(a, n);

printf("\nMultiplicacao dos termos = %d\n", c);
    break;
};
case 4:{

c = divide(a,n);
printf("\nDivisao dos termos = %.1lf", c);
    break;
};
default: printf("Valor invalido");
}
return 0;
}

int soma(int x[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res = res+x[i];
            return(res);
}

int subtrai(int x[], int n)
{
 int res = x[0], i;

    for (i = 0; i < n; i++)
        printf("%d\n", x[i]);
        res = x[i] - res;
            return(res);
}

int multiplica(int x[], int n)
{
int res = 0, i;
    for (i = 0; i < n; i++)
        res = soma(x,n)*soma(x,n);
            return(res);
}

double divide(int x[], int n)
{
double res = 0, i;
    for (i = 0; i < n; i++)
        res = (subtrai(x,n))/(soma(x,n));
            return(res);
}
    #endif // ex4
    /**
5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.
**/
#ifdef ex5
char c[10];
char a[10];
char comparar(char x[], char y[], int elementsx, int elementsy);

main()
{
    int x=0, y=0;
    char res;
printf("digite o primeiro nome: \n");
gets(c);

printf("\ndigite o segundo nome: \n");
gets(a);

for(x=0; x<=c[10]; x++)
    c[10] = c[x];
for(y=0; y<=a[10]; y++)
    a[10] = a[y];

res = comparar(c, a, x, y);

}

char comparar(char x[], char y[], int elementsx, int elementsy){
char res;
    int i, z;
for(i=0; i<x[elementsx]; i++)
        x[i] = x[elementsx];
    for(z=0; z<y[elementsy]; z++){
            y[z] = y[elementsy];
    }
if(x[i]==y[z]){
  res = printf("As strings %s e %s sao iguais", &x[i], &y[z]);
}else
   res = printf("As strings %s e %s sao diferentes", &x[i], &y[z]);

   return(res);
}

#endif // ex5
/**

6 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!.
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.
**/
#ifdef ex6
int n = 0, res=0;
int somaDigitos (int digitos);
int fatorial(int x);

int fatorial(int x){

int CONT = 1;
int FAT = 1;
do
{
    FAT*= CONT;
    //FAT = FAT * CONT
    CONT+= 1;
    //CONT+= 1
    // CONT = CONT + 1
    }
while(CONT <= x);
printf("Resultado: %d", FAT);
return FAT;
}


int somaDigitos (int digitos)
{
    int resto, valor, i, resultado, soma = 0;

    resultado = digitos;

    while (resultado != 0)
    {
          soma += resultado % 10;
          resultado = resultado / 10;
    }

    return soma;
}

int main(){
    int res1;

    printf("Digite um numero para calculo de algarismos\n");
    scanf("%d", &n);
    res = fatorial(n);
    res1 = somaDigitos(res);

printf(" O fatorial de %d eh %d e a soma de seus algarismos eh %d", n, res, res1);

    return 0;
}
#endif // ex6
/**

7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.
**/
#ifdef ex7
double exponenciacao(double x, double y);

double exponenciacao(double x, double y){
            int i, res=1;
            for (i=1; i<=y; i++)
            res *= x;
            return res;
}

main(){
    double a, b, res;

    printf("Digite um numero e seu expoente:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);


    res = exponenciacao(a, b);
    printf("\nO resultado de %.1lf elevado a %.1lf eh...%.1lf", a, b, res);
}

#endif // ex7
     /**
8 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.

*/
#ifdef ex8
int verifica(int x, int y);
int retornar_soma(int x, int y);
int retornar_multiplica(int x, int y);

int retornar_multiplica(int x, int y){
int menor, maior, i, multiplica=1;
    if(x < y){
    menor = x;
    maior = y;
    }
    else{
    menor = y;
    maior = x;
    }

    x = menor;
    y = maior;
    i = x;

    while(i >= x && i <= y){

        multiplica = multiplica * i;
        i++;
    }
    return multiplica;

}

int retornar_soma(int x, int y){
    int menor, maior, i, soma=0;
    if(x < y){
    menor = x;
    maior = y;
    }
    else{
    menor = y;
    maior = x;
    }

    x = menor;
    y = maior;
    i = x;

    while(i >= x && i <= y){

        soma = soma + i;
        i++;
    }
    return soma;

}

int verifica(int x, int y){
    int res= 0;
    if(x>0 && y>0){
        res = 1;
    }else if (x<0 && y<0){
        res = 0;
    }else
    res = -1;

    return res;
}

 int main(){
    int a, b, res;

    printf("Digite dois numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);


    res = verifica(a, b);
    if(res == 1){
        res = retornar_soma(a, b);
        printf("A soma entre os intervalos entre %d e %d eh...%d", a, b, res);
    }else if (res == 0){
        res = retornar_multiplica(a,b);
        printf("A multiplicacao entre os intervalos entre %d e %d eh...%d", a, b, res);

    }
}
#endif // ex8
#ifdef ex11
/**9 - Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus divisores.
Escreva um programa que liste todos os números perfeitos menores que um inteiro n recebido via teclado.
Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é perfeito. **/
main(){

    int x;

    do {
    printf("Introduza um numero inteiro positivo: ");
    scanf("%d", &x);
  } while ( x < 1);

  printf("O numero %d", x);
  if (Num_Perfeito(x)) {
    printf(" e'");
  }
  else {
    printf(" nao e'");
  }
  printf(" um numero perfeito.\n");

  return 0;
}


int Num_Perfeito (int x)
{
    int sum=0,i;

    for (i=1; i<x;i++)
    {
        if((x%i) == 0)
               sum = sum+i;
    }
    if (sum == x){
       return 1;
    }
    else
       return 0;
}

#endif // ex1


#ifdef ex10
//*2 - A sequência de Fibbonaci é a sequência (1, 1, 2, 3, 5, 8, 13, ...).
//Escreva um programa que determine o n-ésimo termo desta sequência, n dado.
main()
{
   int x,res;
   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &x);
   res = fibonacci(x);
}

int fibonacci(int num){
    int i, t1 = 0, t2 = 1, nextTerm;
    for (i = 1; i <= num; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", t1);
    }
    return t1;
 }

#endif
