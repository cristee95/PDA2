#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000

bool prime(int nr)
{
	if (nr < 2)
		return 0;
	for (int i = 2; i <= nr / 2; i++)
		if (nr % i == 0)
			return 0;
	return 1;
}

int main(int argc, char *argv[])
{
	int	size, rank, start, stop;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	start = (MAX / 4) * rank + 1;
	stop = start + Max / 4 - 1;
	if (rank == 0)
		printf("2 ");
	for (int i = start; i <= stop; i = i + 2)
		if (isPrime(i))
			printf("%d ", i);
	MPI_Finalize();
}