#include <stdio.h>
#include <stdlib.h>

//1-30 arası çift sayıları yazdıran ama 12'yi yazdırmayan kodlama örneği

int main() {
	
	int i;
	i=1;
	
	while(i<=30)
	{
		if(i%2==0 && i!=12)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
	return 0;
}
