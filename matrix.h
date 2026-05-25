#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
	int rows;
	int cols;
	int *data;
	// Sub matrix
	// int stride
} Matrix;

Matrix mat_alloc(int rows, int cols);

Matrix mat_mult(Matrix a, Matrix b);
Matrix mat_add(Matrix a, Matrix b);
Matrix mat_scale(Matrix a, int scalar);

float MatrixDeterminant(Matrix mat)                                         // Compute matrix determinant
    float MatrixTrace(Matrix mat)                                               // Get the trace of the matrix (sum of the values along the diagonal)
    Matrix MatrixTranspose(Matrix mat)                                          // Transposes provided matrix
    Matrix MatrixInvert(Matrix mat)                                             // Invert provided matrix
    Matrix MatrixIdentity(void)                                                 // Get identity matrix
    Matrix MatrixAdd(Matrix left, Matrix right)                                 // Add two matrices
    Matrix MatrixSubtract(Matrix left, Matrix right)                            // Subtract two matrices (left - right)
    Matrix MatrixMultiply(Matrix left, Matrix right)                            // Get two matrix multiplication NOTE: When multiplying matrices... the order matters!
    Matrix MatrixMultiplyValue(Matrix left, float value)                        // Multiply matrix components by value
    Matrix MatrixTranslate(float x, float y, float z)                           // Get translation matrix
    Matrix MatrixRotate(Vector3 axis, float angle)                              // Create rotation matrix from axis and angle NOTE: Angle should be provided in radians
    Matrix MatrixRotateX(float angle)                                           // Get x-rotation matrix NOTE: Angle must be provided in radians
    Matrix MatrixRotateY(float angle)                                           // Get y-rotation matrix NOTE: Angle must be provided in radians
    Matrix MatrixRotateZ(float angle)                                           // Get z-rotation matrix NOTE: Angle must be provided in radians
    Matrix MatrixRotateXYZ(Vector3 angle)                                       // Get xyz-rotation matrix NOTE: Angle must be provided in radians
    Matrix MatrixRotateZYX(Vector3 angle)                                       // Get zyx-rotation matrix NOTE: Angle must be provided in radians
    Matrix MatrixScale(float x, float y, float z)                               // Get scaling matrix
    Matrix MatrixFrustum(double left, double right, double bottom, double top, double nearPlane, double farPlane) // Get perspective projection matrix
    Matrix MatrixPerspective(double fovY, double aspect, double nearPlane, double farPlane) // Get perspective projection matrix NOTE: Fovy angle must be provided in radians
    Matrix MatrixOrtho(double left, double right, double bottom, double top, double nearPlane, double farPlane) // Get orthographic projection matrix
    Matrix MatrixLookAt(Vector3 eye, Vector3 target, Vector3 up)                // Get camera look-at matrix (view matrix)
    float16 MatrixToFloatV(Matrix mat)                                          

void mat_print(Matrix mat);
void free_mat(Matrix *mat);

#endif // MATRIX_H
