#include <stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r+");
    if(fp==NULL)
    {
        printf("Error opening file\n");
    }
    else{
        printf("File opened successfully\n");
    }
    fclose(fp);
}