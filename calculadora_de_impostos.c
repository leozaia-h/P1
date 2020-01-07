#include <stdio.h>

int main()
{
	double imposto, dolar, icms, valor_produto, valor_produto_real, valor_frete, valor_frete_real, aliquota, valor_final, valor_total;

	scanf("%lf%lf%lf%lf", &dolar, &aliquota, &valor_produto, &valor_frete);

	aliquota = aliquota / 100;
	valor_produto_real = valor_produto * dolar;
	valor_frete_real = valor_frete * dolar;

	if(valor_produto >= 2500)
	{
		imposto = valor_produto_real * 0.6;
		valor_total = (valor_produto_real + imposto) / (1 - aliquota);
		icms = valor_total * aliquota;
		valor_final = valor_produto_real + valor_frete_real + icms + imposto;
	}
	else
	{
		imposto = (valor_produto_real + valor_frete_real) * 0.6;
		valor_total = (valor_produto_real + valor_frete_real + imposto) / (1 - aliquota);
		icms = valor_total * aliquota;
		valor_final = valor_produto_real + valor_frete_real + icms + imposto;
	}

	printf("%.2lf\n", dolar);
	printf("%.2lf\n", valor_produto_real);
	printf("%.2lf\n", valor_frete_real);
	printf("%.2lf\n", valor_produto_real + valor_frete_real);
	printf("%.2lf\n", imposto);
	printf("%.2lf\n", icms);
	printf("%.2lf\n", imposto + icms);
	printf("%.2lf\n", valor_final);
	if(valor_produto >= 2500) printf("Impostos calculados sem o frete\n");
	else printf("Impostos calculados com o frete\n");

}
