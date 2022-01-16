/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divisor.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:44:37 by tvilella          #+#    #+#             */
/*   Updated: 2022/01/16 00:04:19 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static float	ft_vout	(float vin	, int r1, int r2);
static float	ft_vin 	(int r1		, int r2, float vout);
static int		ft_r1	(float vin	, int r2, float vout);
static int		ft_r2	(float vin	, int r1, float vout);

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

		vout = ft_vout(vin, r1, r2);

		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);

		return(0);
	}
	
	if (argc == 3)
	{
		vin = 5.0;
		r1 = atoi(argv[1]);
		r2 = atoi(argv[2]);

		vout = ft_vout(vin, r1, r2);
		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);
		
		return (0);
	}

	if (argc == 4)
	{
		vin = atoi(argv[1]);
		r1 =  atoi(argv[2]);
		r2 =  atoi(argv[3]);

		vout = ft_vout(vin, r1, r2);
		printf("\n| ==== Resultado ==== |\nVin: %.2f V | R1: %i Ohms | R2: %i Ohms\nVout = %.2f V\n\n", vin, r1, r2, vout);
		
		return (0);
	}
	
	return(1);
}

static float	ft_vout(float vin, int r1, int r2)
{
	return (vin * (float)r2 / ((float)r1 + (float)r2));
}

static float	ft_vin 	(int r1		, int r2, float vout)
{
	return (vout * ((float)r1 + (float)r2) / (float)r2);
}

static int		ft_r1	(float vin	, int r2, float vout)
{
	return ( (vin * r2 / vout) - r2);
}

static int		ft_r2	(float vin	, int r1, float vout)
{
	return ( (vout / (vin - vout)) * r1 );
}
