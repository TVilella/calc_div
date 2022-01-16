/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divisor.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:44:37 by tvilella          #+#    #+#             */
/*   Updated: 2022/01/15 23:05:58 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	float	vin;
	int		r1;
	int		r2;
	float	vout;
	
	if (argc == 1)
	{
		printf("Digite Vin: ");
		scanf("%f", &vin);
		printf("Digite r1: ");
		scanf("%i", &r1);
		printf("Digite r2: ");
		scanf("%i", &r2);

		vout = vin * (float)r2 / ((float)r1 + (float)r2);

		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);

		return(0);
	}
	
	if (argc == 3)
	{
		vin = 5.0;
		r1 = atoi(argv[1]);
		r2 = atoi(argv[2]);

		vout = vin * (float)r2 / ((float)r1 + (float)r2);
		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);
		
		return (0);
	}

	if (argc == 4)
	{
		vin = atoi(argv[1]);
		r1 =  atoi(argv[2]);
		r2 =  atoi(argv[3]);

		vout = vin * (float)r2 / ((float)r1 + (float)r2);
		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);
		
		return (0);
	}
	
	return(1);
}
