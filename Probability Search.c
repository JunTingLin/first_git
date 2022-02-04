#include<stdio.h>
#include<stdlib.h>

int locn ;
int main(void){
	int i=1;
	int A[6] = {34,23,37,64,12,3};
	for(i=1;i<=5;i++){
		printf("有無找到:%d\n",ProbabilitySearch(A,5,3));
		printf("最後在locn=%d的索引\n",locn);
		show(A);
	}
	system("pause");
	return 0;
}
int ProbabilitySearch(int list[], int lastIndex, int target){
	int looker = 0;
	while((looker < lastIndex) && (target != list[looker])){
		looker = looker+1;
	}
	if(target == list[looker]){
		if(looker>0){ //是第一個元素之後的，就要往前搬
			int temp = list[looker-1];
			list[looker-1] = list[looker];
			list[looker] = temp;
			looker = looker - 1; //指標looker再往前指，才是我們剛剛找到的值
		}
		locn = looker;
		return 1;  //有找到 
	}
	else{
		locn = looker;
		return 0; //沒有找到 
	}
	
}
void show(int arr[]){
	int i=0;
	printf("%d\t%d\n\n",sizeof(arr),sizeof(arr)/sizeof(int));
	for(i=0;i<6;i++){  //sizeof(arr)/sizeof(int)
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}
