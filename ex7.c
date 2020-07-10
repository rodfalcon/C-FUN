#include "stdio.h"
#define exa

#ifdef ex1
struct reg{
	char n[20];
};

main(){
struct reg cad[4];
int x;

for(x=0;x<2;x++){
gets(cad[x].n);
}

for(x=0;x<2;x++){
printf("%s\n",cad[x].n);
}
}
#endif

#ifdef ex2
struct reg{
	char n[20];
};

main(){
struct reg cad[4];
int x;
struct reg *p;

p = &cad[0];

for(x=0;x<2;x++){
gets((p+x)->n);
}

for(x=0;x<2;x++){
printf("%s\n",(p+x)->n);
}
}
#endif // exa
#ifdef exa
struct reg{
	char n[20];
};

main(){
struct reg cad[4];
int x;
struct reg *p;

p = &cad[0];

recebe(p);

imp(p);
}

recebe(struct reg *p){
int x;

for(x=0;x<2;x++){
gets((p+x)->n);
}
}

imp(struct reg *p){
int x;

for(x=0;x<2;x++){
printf("%s\n",(p+x)->n);
}
}
#endif // exa
