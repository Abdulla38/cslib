#include ".../include/matrix.h"
#include <stdlib.h>
#include <stdio.h>

#define MATRIX_CELL(m,i,j)  ((m).data[(i) * (m).cols + (j)])

Matrix mat_alloc(int rows, int  cols)
{
	Matrix mat = {0};
	mat.rows = rows;
	mat.cols = cols;
	mat.data = malloc(sizeof(*mat.data)*rows*cols);
	if (mat.data == NULL){ 
		fprintf(stderr, "ERROR: could not allocate memory.\n");
		exit(EXIT_FAILURE);
	}
	return mat;
}

Matrix mat_mult(Matrix a, Matrix b)
{
    if (a.cols != b.rows) {
		fprintf(stderr, "ERROR: Matrix rows and cols do not match for multiplication.\n");
		exit(EXIT_FAILURE);
    }
    Matrix result = mat_alloc(a.rows, b.cols);
    if (result.data) {
        for (int i = 0; i < a.rows; i++) {
            for (int j = 0; j < b.cols; j++) {
                int res = 0;
                for (int k = 0; k < a.cols; k++) {
                    res += MATRIX_CELL(a, i, k) * MATRIX_CELL(b, k, j);
                }
                MATRIX_CELL(result, i, j) = res;
            }
        }
    }
    return result;
}
Matrix mat_sum(Matrix a, Matrix b)
{
	if (a.cols != b.rows || a.cols != b.cols)
	{
		fprintf(stderr, "ERROR: Matrix dimensions do not match for addition\n");
		exit(EXIT_FAILURE);
	}
	Matrix result = mat_alloc(a.rows, a.cols);
	if (result.data) {
		for (int i = 0; i < a.rows; i++) {
			for (int j = 0; j < a.cols; j++) {
                MATRIX_CELL(result, i, j) = MATRIX_CELL(a, i, j) + MATRIX_CELL(b, i, j);
			}
		}
	} 
	return result;
}

Matrix mat_scalar(Matrix a, int scalar)  {
	Matrix result = mat_alloc(a.rows, a.cols);
	
}

Matrix mat_vector_mult(Matrix a, Matrix b);

void mat_print(Matrix mat) {
	for (int i = 0; i < mat.rows; i++) {
		for (int j = 0; j < mat.cols; j++) {
			printf("%i ", MATRIX_CELL(mat, i, j)); 
		}
		printf("\n");
	}
}

void free_mat(Matrix *mat) {
	if (mat) {
		free(mat->data);
		mat->data = NULL;
	}
}
