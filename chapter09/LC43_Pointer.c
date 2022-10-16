//回调函数

//之前写的冒泡排序
void BubbleSort(int arr[], int sz)
{
	//...
}
//qsort - 可以排序任意类型的数据 - C语言的库函数

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);

	return 0;
}