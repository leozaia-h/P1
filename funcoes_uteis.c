//ACHAR O MDC PELO ALGORITMO DE EUCLIDES
int MDC(int x, int y)
{
    if(y == 0)
    {
        return x;
    }
    else
    {
        return MDC(y, x % y);
    }
}

//ACHAR MMC DO ARRAY COM MDC

int MMC(int array[], int tamanho)
{
	int i, res = array[0];

	for(i = 1 ; i < tamanho ; i++)
	{
		res = ((res * array[i]) / MDC(res, array[i]));
	}

	return res;
}

//BUBBLE SORT
void BUBBLE_SORT(int array[], int tamanho_array)
{
	int j, i, aux;

	for(j = 0 ; j < tamanho_array ; j++)
	{
		for(i = 0 ; i < tamanho_array-1 ; i++)
		{
			if(array[i] > array[i+1])
			{
				aux = array[i];
				array[i] = array[i+1];
				array[i+1] = aux;
			}
		}
	}
}

//FATORIAL
int FATORIAL(int numero)
{
    if(numero > 1)
    {
        return numero * FATORIAL(numero - 1);
    }
    else
    {
        return 1;
    }
}

//VERIFICAR SE É PRIMO

int VERIFICAR_PRIMO(int numero)
{
    int count = 0, i;

    for(i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            count++;
        }
    }

    if(count == 2 || numero == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

//PROXIMO NUMERO PRIMO COM UMA FUNCAO PARA VERIFICAR PRIMO
int PROX_PRIMO(int numero)
{
    int i = numero;

    while(VERIFICAR_PRIMO(i) != 1)
    {
        i++;
    }

    return i;
}

//MULTIPLOS ENTRE DOIS NUMEROS
void MULTIPLOS(int num1, int num2, int array[])
{
	int i;

	for(i = 1; i <= 50; i++)
	{
		if(i % num1 == 0 && i % num2 == 0)
		{
			array[i] = i;
		}
	}
}
