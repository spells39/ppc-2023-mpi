// Copyright 2023 Veselov Ilya
#include <vector>
#include <boost/serialization/vector.hpp>
#ifndef TASKS_TASK_2_VESELOV_I_STRIP_HOR_MULT_MATRIX_VECTOR_STRIPHORMULTMATRIXVECTOR_H_
#define TASKS_TASK_2_VESELOV_I_STRIP_HOR_MULT_MATRIX_VECTOR_STRIPHORMULTMATRIXVECTOR_H_

// std::vector<int> matrix_vector_multiply_par(std::vector<std::vector<int>> matrix, std::vector<int> vec,
// int rows, int cols, int rank, int rowsPerProcess, int extraRows);
// std::vector<int> matrix_vector_multiply(std::vector<std::vector<int>> matrix, std::vector<int> vec,
// int rows, int cols);
// std::vector<std::vector<int>> randomMatrix(int n, int m, int minElem = -100, int maxElem = 100);

// std::vector<int> matrix_vector_multiply(std::vector<int> A, std::vector<int> x, int rows, int cols);
// std::vector<int> randomMatrix(size_t n, size_t m, int minElem = -100, int maxElem = 100);

// std::vector<int> randomVector(size_t n, int minElem = -100, int maxElem = 100);

/*void matrix_vector_multiply_par(int* A, int* X, int* res, int rows, int cols, int rank, int size);
void matrix_vector_multiply(int* A, int* X, int* res, int rows, int cols);
void randomMatrix(int* matrix, int rows, int cols, int minElem = -100, int maxElem = 100);
void randomVector(int* vec, int size, int minElem = -100, int maxElem = 100);*/

std::vector<int> matrix_vector_multiply_par(const std::vector<int>& A, const std::vector<int>& X, int rows, int cols);
std::vector<int> matrix_vector_multiply(const std::vector<int>& A, const std::vector<int>& X, int rows, int cols);
std::vector<int> randomVector(int size, int minElem = -100, int maxElem = 100);
std::vector<int> randomMatrix(int rows, int cols, int minElem = -100, int maxElem = 100);

#endif  // TASKS_TASK_2_VESELOV_I_STRIP_HOR_MULT_MATRIX_VECTOR_STRIPHORMULTMATRIXVECTOR_H_
