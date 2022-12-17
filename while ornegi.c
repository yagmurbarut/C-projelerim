#include <stdio.h>
#include <stdlib.h>

//1-30 arası çift sayıların çıktısınu veren kodlama örneği

int main() {
	
	int i;
	i=1;
	while(i<=30)
	{
		if(i%2==0) 
		{
			printf("%d\n",i);
		}
		i++;
	}
	
	
	return 0;
}
