void main()
{
    char v;
	printf("Digite uma tecla:\n");
	scanf("%c", &v);
	switch ( v )
	{
	case 'a':
		printf("vogal- a");
		break;
	case 'e':
		printf("vogal- e");
		break;
	case 'i':
		printf("vogal- i");
		break;
	case 'o':
		printf("vogal- o");
		break;
	case 'u':
		printf("vogal- u");
		break;
    default:
    	printf("caractere digitado nao e uma vogal");
    }
}


