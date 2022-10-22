//文件操作
//打开文件

#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
    FILE* pf = fopen("myfile.txt", "r");
    if (pf != NULL)
    {
        printf("%s\n", strerror(errno));
        return 0;
    }

    //打开成功
    //读文件
    
    //关闭文件
    fclose(pf);//关闭文件只是传值操作，关闭后pf仍然存在
    pf = NULL;//所以要将pf设为NULL

    return 0;
}
