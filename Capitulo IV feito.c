#include <stdio.h>
#define ex8

/**OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
**/
#ifdef ex1
int A[3];
float B[3];
long C[3];
double D[3];
unsigned E[3];

main(){
    printf("INSIRA NUMEROS NOS VETORES\n");
    printf("\nDIGITE 3 VALORES INTEIROS E APERTE ENTER\n");
    scanf("%d", &A[0]);
    scanf("%d", &A[1]);
    scanf("%d", &A[2]);
    printf("\nDIGITE 3 VALORES REAIS E APERTE ENTER\n");
    scanf("%f", &B[0]);
    scanf("%f", &B[1]);
    scanf("%f", &B[2]);
    printf("\nDIGITE 3 VALORES LONGOS E APERTE ENTER\n");
    scanf("%ld", &C[0]);
    scanf("%ld", &C[1]);
    scanf("%ld", &C[2]);
    printf("\nDIGITE 3 VALORES DOUBLE E APERTE ENTER\n");
    scanf("%lf", &D[0]);
    scanf("%lf", &D[1]);
    scanf("%lf", &D[2]);
    printf("\nDIGITE 3 VALORES SEM SINAL E APERTE ENTER\n");
    scanf("%u", &E[0]);
    scanf("%u", &E[1]);
    scanf("%u", &E[2]);

    printf("\n        10        20        30        40        50\n");
    printf("\n12345678901234567890123456789012345678901234567890\n");
    printf("  %-6d              %-11ld               %-5u\n", A[0], C[0], E[0]);
    printf("\n        %-8.1e             %-9.e\n", B[0], D[0]);
    printf("  %-6d              %-11ld               %-5u\n", A[1], C[1], E[1]);
    printf("\n        %-8.1e             %-9.e\n", B[1], D[1]);
    printf("  %-6d              %-11ld               %-5u\n", A[2], C[2], E[2]);
    printf("\n        %-8.1e             %-9.e\n", B[2], D[2]);

}

#endif // ex1

#ifdef ex2
/**2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)
**/
int main(){
    int a[10], i, j, s;

    printf("COLOQUE OS 10 ELEMENTOS DO VETOR:\n");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    j=9;
    s=0;
    for(i=0; i<4; i++){
        printf("%d %d\n", a[1], a[j]);
        if(a[i] != a[j]){
            s = 1;
            break;

        } j--;

                                }
        if(s==0){
            printf("\n %d eh vetor Palindromo", a[i]);
        }else{
            printf("\n %d nao eh vetor Palindromo", a[i]);
        }

    return 0;
}

#endif // ex2
/** 3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos. */
#ifdef ex3
int valores[2][3][3] = {
                         {{0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0}},

                          {{0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0}}
                                };

main()
{
    int i,x,y;

printf("Valores da pagina 1\n");
for (i=0; i<=2; i++){
    printf(" Insira linha 1 coluna %d ->\t", i);
    scanf("%d",&valores[0] [0] [i]);}

for (i=0; i<=2; i++){
        x=1;
    printf(" Insira linha 2 coluna %d ->\t", i);
    scanf("%d",&valores[0] [x] [i]);}

for (i=0; i<=2; i++){
        x=2;
    printf(" Insira linha 3 coluna %d ->\t", i);
    scanf("%d",&valores[0] [x] [i]);}

for (i=0; i<=2; i++){
        x=1;
    printf(" Insira linha 1 coluna %d ->\t", i);
    scanf("%d",&valores[x] [0] [i]);}

for (i=0; i<=2; i++){
        x=1;
        y=1;
    printf(" Insira linha 2 coluna %d ->\t", i);
    scanf("%d",&valores[x] [y] [i]);}

for (i=0; i<=2; i++){
        x=1;
        y=2;
    printf(" Insira linha 3 coluna %d ->\t", i);
    scanf("%d",&valores[x] [y] [i]);}

printf("\n\n linha 1 coluna 1-> %d\n",valores[0] [0] [0]);
printf(" linha 1 coluna 2-> %d\n",valores[0] [0] [1]);
printf(" linha 1 coluna 3-> %d\n",valores[0] [0] [2]);

printf(" linha 2 coluna 1-> %d\n",valores[0] [1] [0]);
printf(" linha 2 coluna 2-> %d\n",valores[0] [1] [1]);
printf(" linha 2 coluna 3-> %d\n",valores[0] [1] [2]);

printf(" linha 3 coluna 1-> %d\n",valores[0] [2] [0]);
printf(" linha 3 coluna 2-> %d\n",valores[0] [2] [1]);
printf(" linha 3 coluna 3-> %d\n",valores[0] [2] [2]);

printf("\n======PÁGINA 2=========\n");

printf(" linha 1 coluna 1-> %d\n",valores[1] [0] [0]);
printf(" linha 1 coluna 2-> %d\n",valores[1] [0] [1]);
printf(" linha 1 coluna 3-> %d\n",valores[1] [0] [2]);

printf(" linha 2 coluna 1-> %d\n",valores[1] [1] [0]);
printf(" linha 2 coluna 2-> %d\n",valores[1] [1] [1]);
printf(" linha 2 coluna 3-> %d\n",valores[1] [1] [2]);

printf(" linha 3 coluna 1-> %d\n",valores[1] [2] [0]);
printf(" linha 3 coluna 2-> %d\n",valores[1] [2] [1]);
printf(" linha 3 coluna 3-> %d\n",valores[1] [2] [2]);

}
#endif // ex3
/** 4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores. */
#ifdef ex4
int tabelax [2] [3];
int tabelay [2] [3];
int resultado [2] [3];
int i, x;

main()
{

for (i=0; i<=2; i++){
    printf(" Insira linha 1 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[0] [i]);}

for (i=0; i<=2; i++){
        x=1;
    printf(" Insira linha 2 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[x] [i]);}

printf(" valor da linha 1 coluna 1-> %d\n",tabelax[0] [0]);
printf(" valor da linha 1 coluna 2-> %d\n",tabelax[0] [1]);
printf(" valor da linha 1 coluna 3-> %d\n",tabelax[0] [2]);

printf(" valor da linha 2 coluna 1-> %d\n",tabelax[1] [0]);
printf(" valor da linha 2 coluna 2-> %d\n",tabelax[1] [1]);
printf(" valor da linha 2 coluna 3-> %d\n",tabelax[1] [2]);

for (i=0; i<=2; i++){
    printf(" Insira linha 1 coluna %d da tabela y ->\t", i);
    scanf("%d",&tabelay[0] [i]);}

for (i=0; i<=2; i++){
        x=1;
    printf(" Insira linha 2 coluna %d da tabela y ->\t", i);
    scanf("%d",&tabelay[x] [i]);}

printf(" valor da linha 1 coluna 1-> %d\n",tabelay[0] [0]);
printf(" valor da linha 1 coluna 2-> %d\n",tabelay[0] [1]);
printf(" valor da linha 1 coluna 3-> %d\n",tabelay[0] [2]);

printf(" valor da linha 2 coluna 1-> %d\n",tabelay[1] [0]);
printf(" valor da linha 2 coluna 2-> %d\n",tabelay[1] [1]);
printf(" valor da linha 2 coluna 3-> %d\n",tabelay[1] [2]);

for(i=0; i<=2; i++){
        for(x=0; x<=1; x++){
        resultado[x][i] = tabelax[x][i];
        resultado[x][i] = resultado[x][i] * tabelay[x][i];
                                                            }

        }
        printf("%d\n", resultado[0][0]);
        printf("%d\n", resultado[0][1]);
        printf("%d\n", resultado[0][2]);
         printf("%d\n", resultado[1][0]);
        printf("%d\n", resultado[1][1]);
        printf("%d\n", resultado[1][2]);





}

#endif
/** 5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
 */
#ifdef ex5
    int a[10], i, j[10], s[10];
    int x, y;

int main(){

    printf("COLOQUE OS 10 ELEMENTOS DO VETOR:\n");

    for(i=0; i<9; i++){
        scanf("%d", &a[i]);

        if(a[i]% 2 != 0){
        j[i] = a[i];

        }
        else{
        s[i] = a[i];
        }

    }

        for(i=0; i<9; i++)
            printf("Vetor ordem impar %d\n ", j[i]);
        for(i=0; i<9; i++)
            printf("Vetor ordem par %d \n", s[i]);

            return 0;
}
#endif // ex5
/** 6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.  */

#ifdef ex6
int a[10], i, j[10], s[10];
    int x, y;

int main(){

    printf("COLOQUE OS 10 ELEMENTOS DO VETOR:\n");

    for(i=0; i<9; i++){
        scanf("%d", &a[i]);

        if(a[i]% 2 != 0){
        j[x] = a[i];
        x++;
        }
        else{
        s[y] = a[i];
        y++;}

    }

        for(i=0; i<x; i++)
            printf("Vetor ordem impar %d\n ", j[i]);
        for(i=0; i<y; i++)
            printf("Vetor ordem par %d \n", s[i]);

            return 0;
}
#endif // ex6
/** 7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.  */

#ifdef ex7
int a[10], i, j[10], s[10];
int x, y;

int main(){

    printf("COLOQUE OS 10 ELEMENTOS DO VETOR:\n");

    for(i=0; i<9; i++)
        scanf("%d", &a[i]);

    for (i=0;i<10; i++)
    for(x=i+1;x<10;x++)
        if (a[i]>a[x]){
    {
            y=a[i];
            a[i]=a[x];
            a[x]=y;
                            }

        }
        printf("Vetor em ordem crescente: \n");
        for(i=0;i<10;i++)
        printf(" %d",a[i]);


            return 0;
    }
#endif

/** 8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.  */

#ifdef ex8
int tabelax [5][5];
int i, x, y, z, num, notfound = 0;

int main()
{

for (i=0; i<=4; i++){
    printf(" Insira linha 1 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[0] [i]);}

for (i=0; i<=4; i++){
        x=1;
    printf(" Insira linha 2 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[x] [i]);}

for (i=0; i<=4; i++){
        x=2;
    printf(" Insira linha 3 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[x] [i]);}

for (i=0; i<=4; i++){
        x=3;
    printf(" Insira linha 4 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[x] [i]);}

for (i=0; i<=4; i++){
        x=3;
    printf(" Insira linha 5 coluna %d da tabela x ->\t", i);
    scanf("%d",&tabelax[x] [i]);}

    printf("\n ESCREVA UM NUMERO PARA PESQUISAR NO VETOR \n");
    scanf("%d", &num);

    for(y=0; y < 4; y++){
       for(z=0; z < 4; z++)
    if(tabelax[y][z] == num){
    printf("\n numero %d foi encontrado na posicao %d %d", num, tabelax[y][z] );
    notfound = 1;
    }
                    }

    if(notfound == 0)
    printf(" O valor nao existe no vetor.\n");



    return 0;
}

#endif // ex8


