#include<stdio.h>
#include<stdlib.h>
int locn ;
int main(void){
	int A[6] = {34,23,37,64,12,3}; 
	printf("有無找到:%d\n",SeqSearch(A,5,15));
	printf("最後在locn=%d的索引\n",locn);
	system("pause");
	return 0;
}

int SeqSearch(int list[], int lastIndex, int target){
	int looker = 0;
	while((looker < lastIndex) && (target != list[looker])){
		looker = looker+1;
	}
	locn =  looker;
	if(target == list[looker]){
		return 1;  //有找到 
	}
	else{
		return 0; //沒有找到 
	}
}



