int maxArea(int* height, int heightSize){
    int j = heightSize - 1;
    int i = 0;
    printf("%d\n", j);  // int
    printf("%d\n", i);  // int
    int res = 0;

    while (i < j) {
        int current = (j-i) * fmin(height[i], height[j]);
        res = fmax(res, current);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    printf("%d\n", res);
    return res;
}