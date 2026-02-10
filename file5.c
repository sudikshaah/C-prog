#include <stdio.h>
#include <string.h>
int main() {
    FILE *f;
    int l,i;
    char data [25]="Learning is Essential";
    l=strlen(data);
    f=fopen("new.txt","w+");
    if(f==NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    else{
        for (i=0;i<l;i++)
        {
            printf("\nWriting %c to file",data[i]);
            fputc(data[i],f);
        }
        printf("\nData written to file successfully.\n");
        fclose(f);
    }
    return 0;
}