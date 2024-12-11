#include <stdio.h>

int main() {
    char str[50];       
    int count = 0;
    
	printf("Nhap vao mot chuoi ki tu :");
	fgets(str,50,stdin);
     
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') { 
            count++;
        }  
    }
    printf("So ky tu o trong chuoi la: %d\n", count);
    
    return 0;
}

