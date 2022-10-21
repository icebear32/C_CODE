//动态内存分配

//常见的动态内存错误 - 对同一块动态内存多次释放

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	//使用
//	//释放
//	free(p);
//	//...
//	free(p);// 对同一块动态内存多次释放 - 错误
//
//	return 0;
//}


//修改
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}

	//使用
	//释放
	free(p);
	p = NULL;//修改处：将p指针设置为空指针
	//...
	free(p);

	return 0;
}