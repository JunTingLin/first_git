#include<stdio.h>
#include<stdlib.h>
int locn ;
int main(void){
	int A[6] = {34,23,37,64,12,3}; 
	printf("���L���:%d\n",SeqSearch(A,5,15));
	printf("�̫�blocn=%d������\n",locn);
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
		return 1;  //����� 
	}
	else{
		return 0; //�S����� 
	}
}



