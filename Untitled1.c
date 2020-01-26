int main()
{
    int row, i, j;
    printf("input number of rows:");
    scanf("%d", &row);
    for(i=1; i<=row; i++){
            for(j=1; j<=row-i; j++){
        printf(" ");
    }

    for(j=1; j<=i; j++){

        printf("%d ", i%2);
    }
    printf("\n");
    }
    for(i=row-1; i>=1; i--){
            for(j=1; j<=row-i; j++){
        printf(" ");
    }

    for(j=1; j<=i; j++){

        printf("%d ", i%2);
    }
    printf("\n");
    }
    return 0;

}
