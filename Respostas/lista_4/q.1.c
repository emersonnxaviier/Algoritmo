void main(){
	int v[5];
	int c;
	
	for(c=1;c<=5;c++){
		system("cls");
		printf("digite um numero: ");
		scanf("%d", &v[c]);
	}
	for(c=1;c<=5;c++){
		printf("[%d]", v[c]);
	}
}

