#include<stdio.h>
#include<stdlib.h>

//{34,23,37,64,12,3}->��ƦC 
int locn ;
int main(void){
	int A[6] = {34,23,37,64,12,3};
	printf("���L���:%d\n",SeqSearch(A,5,15));
	printf("�̫�blocn=%d������\n",locn);
	system("pause");
	return 0;
}

int SeqSearch(int list[], int lastIndex, int target){  //list[]�S���g���j�p�A�ҥH�U���i�H�A�����@�� 
	list[lastIndex+1]= target;  //������̫�@�ӭ�3�令target 
	int looker = 0;
	while(target != list[looker]){
		looker = looker+1;
	}
	if(looker <= lastIndex){  //looker<=5 
		locn = looker;
		return 1;
	}
	else{
		locn = lastIndex;  //����looker�|�O6�Alocn�n�s���Olast 5 
		return 0;
	}
	
	
}



