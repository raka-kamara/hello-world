int main()
{
    int u, v, a, t, s;
    scanf("%d%d%d", &u, &a, &t);
    v = u + a*t;
    s = u*t + 0.5*a*t*t;
    printf("v=%d\ns=%d", v, s);
    return 0;
}
