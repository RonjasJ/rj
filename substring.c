#pragma<stdio.h>
#pragma<string.h> 
int main()
{
    char str[80], search[10];
    int l1,l2, i, j, flag;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter search substring:");
    scanf("%s",search);
    l1=strlen(str);
    l2=strlen(search);
    for (i = 0; i <= l1-l2; i++)
    {
        for (j = i; j < i + l2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("yes");
    else
        printf("no");
        return 0;
}
