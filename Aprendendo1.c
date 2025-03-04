#include <stdio.h>
int main()
{
int a = 1, b = 2, c = 3;
printf("endereco de a: %p\n", &a);
printf("endereco de b: %p\n", &b);
printf("endereco de c: %p\n", &c);
int* p = &c;
printf("p: %p\n", p);
printf("conteudo de p: %d\n", *p);
p = p + 1;
printf("p: %p\n", p);
printf("conteudo de p: %d\n", *p);
p = p + 1;
printf("p: %p\n", p);
printf("conteudo de p: %d\n", *p);
return 0;
}

