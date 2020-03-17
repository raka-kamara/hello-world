int main()
{
    int a, b, sum, sub, multi, div, remainder;
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    multi = a*b;
    div = a/b;
    remainder = a%b;
    printf("sum=%d\n", sum);
    printf("subtraction=%d\n", sub);
    printf("multiplication=%d\n", multi);
    printf("division=%d\n", div);
    printf("remainder=%d", remainder);
    return 0;

}
