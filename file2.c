#include <stdio.h>
int main()
{
    FILE *fp=fopen("name.txt","w+");
    fprintf(fp,"123456789");
    rewind(fp);
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}