//结构体的自引用

// //错误代码
// struct Node
// {
// 	int data;//4
// 	struct Node n;//错误C2079	“n”使用未定义的 struct“Node”
// 	//结构体里面调用本身结构体是不行的
// };

// int main()
// {
// 	sizeof(struct Node);

// 	return 0;
// }


//正确的自引用方式：
struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	sizeof(struct Node);

	return 0;
}