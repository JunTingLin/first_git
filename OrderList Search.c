#include<stdio.h>
#include<stdlib.h>
//隨便亂打
//{34,23,37,64,12,3}->原數列 
int locn ;
int main(void){
	int A[6] = {3,12,23,34,37,64,1000,1000};
	printf("有無找到:%d\n",OrderListSearch(A,5,12));
	printf("最後在locn=%d的索引\n",locn);
	system("pause");
	return 0;
}
int OrderListSearch(int list[], int lastIndex, int target){
	int looker;
	if(target<list[lastIndex]){  //target是否小於最後一個數 
		looker = 0;
		while(target>list[looker]){
			looker += 1;
		}
	}
	else{
		looker = lastIndex ;
	}
	if(target==list[looker]){
		locn = looker;
		return 1;
	}
	else{
		locn = looker;
		return 0;
	} 
	
}
