//结构体的自引用

////错误代码
//typedef struct //去掉命名标签后
//{
//	int data;// 4
//	Node* next;// 4/8
//	//去掉命名标签后
//	//无法使用node，因为node还没定义，没定义就无法使用
//
//}Node;
////typedef重命名后也不要把命名标签去掉
//
//int main()
//{
//	struct Node n1;//去掉命名标签后
//	//无法使用node，因为node还没定义，没定义就无法使用
//	Node n2;
//
//	return 0;
//}


//解决方案：
typedef struct Node //typedef重命名后也不要把命名标签去掉
{
	int data;
	struct Node* next;
}Node;

int main()
{
	struct Node n1;
	Node n2;

	return 0;
}