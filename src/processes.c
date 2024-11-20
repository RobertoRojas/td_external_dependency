#include "processes.h"

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        return 0; // Handle division by zero as appropriate (e.g., returning 0 or an error code).
    }
    return a / b;
}
