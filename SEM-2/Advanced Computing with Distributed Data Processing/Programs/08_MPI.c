// ***********************************************************************************************
  
 // File Name 	:   08_mpi.c
 // Purpose 	  :  parallel programing
 // Author	    :   Deepsphere.ai
 // Reviewer 	  :   Jothi Periasamy
 // Date        :   08/02/2023 
 // Version	    :   1.0	
  
// ***********************************************************************************************

// Program Description : The objective of program is basic broadcast operation in mpi

// Python Development Environment & Runtime - Trubo c, shell, codeblocks

// ***********************************************************************************************

#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int rank, size, data, i;

  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  if (rank == 0) {
    data = 42;
  }

  MPI_Bcast(&data, 1, MPI_INT, 0, MPI_COMM_WORLD);

  printf("Process %d received data %d\n", rank, data);

  MPI_Finalize();
  return 0;
}
