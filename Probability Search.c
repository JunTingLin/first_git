#include<stdio.h>
#include<stdlib.h>

int locn ;
int main(void){
	int i=1;
	int A[6] = {34,23,37,64,12,3};
	for(i=1;i<=5;i++){
		printf("���L���:%d\n",ProbabilitySearch(A,5,3));
		printf("�̫�blocn=%d������\n",locn);
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
		if(looker>0){ //�O�Ĥ@�Ӥ������᪺�A�N�n���e�h
			int temp = list[looker-1];
			list[looker-1] = list[looker];
			list[looker] = temp;
			looker = looker - 1; //����looker�A���e���A�~�O�ڭ̭���쪺��
		}
		locn = looker;
		return 1;  //����� 
	}
	else{
		locn = looker;
		return 0; //�S����� 
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
