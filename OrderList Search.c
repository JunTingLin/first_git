#include<stdio.h>
#include<stdlib.h>
//�H�K�å�
//{34,23,37,64,12,3}->��ƦC 
int locn ;
int main(void){
	int A[6] = {3,12,23,34,37,64};
	printf("���L���:%d\n",OrderListSearch(A,5,12));
	printf("�̫�blocn=%d������\n",locn);
	system("pause");
	return 0;
}
int OrderListSearch(int list[], int lastIndex, int target){
	int looker;
	if(target<list[lastIndex]){  //target�O�_�p��̫�@�Ӽ� 
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
