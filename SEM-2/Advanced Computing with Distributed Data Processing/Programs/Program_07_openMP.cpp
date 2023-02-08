#include <iostream>
#include <omp.h>
#define VECTOR_SIZE 10
int main() {
   int vector1[VECTOR_SIZE];
   int vector2[VECTOR_SIZE];
   int result[VECTOR_SIZE];
   // Initialize the vectors
   for (int i = 0; i < VECTOR_SIZE; i++) {
      vector1[i] = i;
      vector2[i] = i * 2;
   }
   
   // Parallelize the vector addition using OpenMP
   #pragma omp parallel for
   for (int i = 0; i < VECTOR_SIZE; i++) {
      result[i] = vector1[i] + vector2[i];
   }
   // Print the result
   for (int i = 0; i < VECTOR_SIZE; i++) {
      std::cout << "Result[" << i << "]: " << result[i] << std::endl;
   }
   
   return 0;
}
