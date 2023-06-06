int main()
{
    int n = 0;
    scanf("%d", &n);

    int *arr = (int *)calloc(100, sizeof(int));
    //For implementing counting sort

    int *input = (int *)calloc(n, sizeof(int));
    //For storing the input integers
    char **strings = (char **)calloc(n, sizeof(char *));
    //For storing the input strings
    for (int i = 0; i < n; i++)
        strings[i] = (char *)calloc(10, sizeof(char));

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        input[i] = num;
        arr[num]++;
        scanf("%s", strings[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        int j = 0;
        for (; arr[i]; arr[i]--)

        {
            for (; input[j] != i; j++);

            if (j < n / 2)
                printf("- ");
            else
                printf("%s ", strings[j]);
            strings[j]++;

            j++;
        }
    }
    return 0;
}