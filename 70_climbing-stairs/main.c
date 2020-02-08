/*
 * 原理是斐波那契数列，但是不能用递归，会有过多重复计算。
 */
int climbStairs(int n){
    if (n <= 2) return n;
    int i1 = 1;
    int i2 = 2;
    int result;
    for (int i = 2; i < n; i++) {
        result = i1 + i2;
        i1 = i2;
        i2 = result;
    }
    return result;
}