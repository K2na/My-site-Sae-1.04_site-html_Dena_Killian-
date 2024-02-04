#include <stdio.h>

int factoriel(int n)
{
    int i,fact=1;

if (n!=0) {
    //boucle for allant de i à n
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
}
else
    fact=1;
        
    return fact;
}

int main() {
    int val;


    puts("Donnez la valeur de val: ");
    scanf("%d",&val);
    val=factoriel(val);
    printf("La factorielle de val est %d\n",val);
    return 0;
}