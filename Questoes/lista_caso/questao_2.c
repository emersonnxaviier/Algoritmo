void main()
{
	int n, l;
	printf("Digite 1-para portugues e 2-para ingles: ");
	scanf("%d", &l);
	printf("Digite um numero:\n");
	scanf ("%d", &n);
	switch ( l )
	{
	case 1:
	switch ( n )
	{
	case 0:
		printf("Zero");
		break;
	case 1:
		printf("Um");
		break;
	case 2:
		printf("Dois");
		break;
	case 3:
		printf("Tres");
		break;
	case 4:
		printf("Quatro");
		break;	
	case 5:
		printf("Cinco");
		break;
	case 6:
		printf("Seis");
		break;
	case 7:
		printf("Sete");
		break;
	case 8:
		printf("Oito");
		break;	
    case 9:
		printf("Nove");
		break;
	case 10:
		printf("Dez");
		break;
	default:
		printf("numero invalido!");
		break;
	}
}
	switch ( l )
	{
	case 2:
	switch ( n )
	{
	case 0:
		printf("Zero");
		break;
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	case 4:
		printf("Four");
		break;	
	case 5:
		printf("Five");
		break;
	case 6:
		printf("Six");
		break;
	case 7:
		printf("Seven");
		break;
	case 8:
		printf("Eight");
		break;	
    case 9:
		printf("Nine");
		break;
	case 10:
		printf("Ten");
		break;
	default:
		printf("number invalid!");
		break;
	}
}
}
