#include<bits\stdc++.h>
#include<cstring>
using namespace std;

int main(){

	char ar[100];
	scanf("%s", ar);
	for (int i = 0; ar[i] != '\0'; i++){
		if (ar[i] >= '5' && ar[i] <= '9'){
			if (i == 0 && ar[i] == '9')
            continue;
			ar[i] = '0' + '9' - ar[i];
		}
	}
	printf("%s\n", ar);
	return 0;
}