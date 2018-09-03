int main()
{
    long long int numero = 5;
    int i;
    int resultado = 1;

    for (i=numero, i >= 1, i--)
    {
        resultado = resultado * i;
    }

    printf("el factorial es %lld", resultado);

    return 0;

}
