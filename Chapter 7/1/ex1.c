#include <stdio.h>
 
int main(void)
{
    FILE *fp;
    char fName[20];   // для ввода имени файла
    printf("Enter file name:");
    scanf("%20s",fName);
    // создаем/открываем файл
    fp=fopen(fName,"w");
    // проверяем создание файла
    if(!fp)
    {
        printf("Error!!!");
        return 1;
    }
    printf("File created successfully.");
    fclose(fp);
    return 0;
}
