#include<stdio.h>
#include<stdlib.h>

//{34,23,37,64,12,3}->原數列 
int locn ;
int main(void){
	int A[6] = {34,23,37,64,12,3};
	printf("有無找到:%d\n",SeqSearch(A,5,15));
	printf("最後在locn=%d的索引\n",locn);
	system("pause");
	return 0;
}

int SeqSearch(int list[], int lastIndex, int target){  //list[]沒有寫死大小，所以下面可以再延伸一格 
	list[lastIndex+1]= target;  //直接把最後一個值3改成target 
	int looker = 0;
	while(target != list[looker]){
		looker = looker+1;
	}
	if(looker <= lastIndex){  //looker<=5 
		locn = looker;
		return 1;
	}
	else{
		locn = lastIndex;  //此時looker會是6，locn要存的是last 5 
		return 0;
	}
	
	
}



