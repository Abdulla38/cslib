#include "../include/vector.h"
#include <math.h>

// Multiply vector by matrix
Vector2 Vectoe2MultiplyMatrix(Matrix a, Vector2 b);

// Add two vectors (v1 + v2)
Vector2 Vector2Add(Vector2 v1, Vector2 v2) {
    Vector2 result = { v1.x + v2.x, v1.y + v2.y };
    return result;
}
// Add vector and float value
Vector2 Vector2AddValue(Vector2 v, float add) {
    Vector2 result = { v.x + add, v.y + add };
    return result;
}

// Subtract two vectors (v1 - v2)
Vector2 Vector2Subtract(Vector2 v1, Vector2 v2) {
    Vector2 result = { v1.x - v2.x, v1.y - v2.y };
    return result;
}

// Subtract vector by float value
Vector2 Vector2SubtractValue(Vector2 v, float sub) {
    Vector2 result = { v.x - sub, v.y - sub };
    return result;
}

// Calculate vector length
float Vector2Length(Vector2 v) {
    float result = sqrtf((v.x * v.x) + (v.y * v.y));
    return result;
}

// Calculate vector square length
float Vector2LengthSqr(Vector2 v) {
    float result = (v.x * v.x) + (v.y * v.y);
    return result;
} 

// Calculate two vectors dot product
float Vector2DotProduct(Vector2 v1, Vector2 v2) {
    float result = (v1.x * v2.x + v1.y * v2.y);
    return result;
}

// Calculate two vectors cross product
float Vector2CrossProduct(Vector2 v1, Vector2 v2) {
    float result = (v1.x * v2.x - v1.y * v2.y);
    return result;
}

// Calculate distance between two vectors
float Vector2Distance(Vector2 v1, Vector2 v2) {
    float result = sqrtf((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y));
    return result;
}
// Calculate square distance between two vectors
float Vector2DistanceSqr(Vector2 v1, Vector2 v2) {
    float result = (v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y);
    return result;
}  

// Calculate the signed angle from v1 to v2, relative to the origin (0, 0) NOTE: Coordinate system convention: positive X right, positive Y down positive angles appear clockwise, and negative angles appear counterclockwise
float Vector2Angle(Vector2 v1, Vector2 v2)        
float Vector2LineAngle(Vector2 start, Vector2 end)// Calculate angle defined by a two vectors line NOTE: Parameters need to be normalized Current implementation should be aligned with glm::angle

// Scale vector (multiply by value)
Vector2 Vector2Scale(Vector2 v, float scale) {
    Vector2 result = { v.x * scale, v.y * scale };
    return result;
}

// Multiply vector by vector
Vector2 Vector2Multiply(Vector2 v1, Vector2 v2) {
    Vector2 result = { v1.x * v2.x, v1.y * v2.y };
    return result;
}
                                                  
// Negate vector
Vector2 Vector2Negate(Vector2 v) {
    Vector2 result = { -v.x, -v.y };
    return result;
}

// Divide vector by vector
Vector2 Vector2Divide(Vector2 v1, Vector2 v2) {
    Vector2 result = { v1.x / v2.x, v1.y / v2.y };
    return result;
}

// Normalize provided vector
Vector2 Vector2Normalize(Vector2 v) {

}

Vector2 Vector2Transform(Vector2 v, Matrix mat)   // Transforms a Vector2 by a given Matrix
Vector2 Vector2Lerp(Vector2 v1, Vector2 v2, float amount)  // Calculate linear interpolation between two vectors
Vector2 Vector2Reflect(Vector2 v, Vector2 normal) // Calculate reflected vector to normal
Vector2 Vector2Min(Vector2 v1, Vector2 v2)        // Get min value for each pair of components
Vector2 Vector2Max(Vector2 v1, Vector2 v2)        // Get max value for each pair of components
Vector2 Vector2Rotate(Vector2 v, float angle)     // Rotate vector by angle
Vector2 Vector2MoveTowards(Vector2 v, Vector2 target, float maxDistance)    // Move Vector towards target
Vector2 Vector2Invert(Vector2 v) // Invert the given vector
Vector2 Vector2Clamp(Vector2 v, Vector2 min, Vector2 max)  // Clamp the components of the vector between min and max values specified by the given vectors
Vector2 Vector2ClampValue(Vector2 v, float min, float max) // Clamp the magnitude of the vector between two min and max values
int Vector2Equals(Vector2 p, Vector2 q)           // Check whether two given vectors are almost equal
Vector2 Vector2Refract(Vector2 v, Vector2 n, float r)    
