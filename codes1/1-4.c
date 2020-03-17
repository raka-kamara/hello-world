int main()
{
    int employee, work_hour, amount, salary;
    printf("Enter employee number, work hour, amount per hour:");
    scanf("%d%d%d", &employee, &work_hour, &amount);
    salary = work_hour*amount;
    printf("Recieves:$%d", salary);
    return 0;
}

