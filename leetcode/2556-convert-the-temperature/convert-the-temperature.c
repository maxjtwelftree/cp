/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
    * returnSize = 2;
    double* arr = (double*)malloc(2 * sizeof(double));
    double kel = (celsius * 1.80) + 32.00;
    double far = celsius + 273.15;
        arr[0] = far;
        arr[1] = kel;
    return arr;
}