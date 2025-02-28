#include <stdio.h>

int main() {
    int senha;
    char cpf[12];

printf("Digite seu CPF: ");
fgets (cpf, 12, stdin);

printf("Digite sua senha: ");
scanf("%d", &senha);

printf("Seu CPF é %s\n", cpf);
printf("Sua senha é %d\n", senha);

return 0;
}

