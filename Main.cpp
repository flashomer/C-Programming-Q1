#include <stdio.h>
#include <string.h>

int count_line(FILE *finp)
{
	int count = 0;
	char ch;
	for (ch = getc(finp); ch != '\n'; ch = getc(finp))
	count++;
	return (count);
}

int main()
{
	int count = 0,b = 0,i=0,d=0,j=0,k=0;
	FILE *nTxt = fopen("name.txt", "r");
	//char ntext[10][1000];
	char a[10][50000];
	char junk;
	int status = 0;
	
	
while(!feof(nTxt)) {
    
    fscanf(nTxt,"%c",&junk);
    
	if(junk != '\n' && junk != '\0') a[i][j] = junk; 

	if(junk == '\n') { i++; j = 0;  } else 	j++; 
 

    //fscanf(nTxt,"%s",junk); //Remove any 'white space' characters
}
	i=0;	
	printf("Print: ");
	while(a[0][i] != '\0') { printf("%c",a[0][i]); i++; }
	i=0;
	printf("\n");
	
	
	i=0;	
	printf("Print: ");
	while(a[1][i] != '\0') { printf("%c",a[1][i]); i++; }
	i=0;
	printf("\n");	
	
	
	/*
	i=0;j=0;
	while(text[i][j] != '\0') { if(text[i][j] == '\n') {  i++; j = 0;}  printf("%c", text[i][j]); j++; }
	 */  
	
	
	char fName[10][50],mName[10][50],lName[10][50];
	
	//printf("Enter your first and last name: ");
    
    
   //scanf("%[^\n]%*c", a); 
	
	
	for(int m = 0; m<10; m++) {
		
		i=0;
		b=0;
		
		while(a[m][i] != '\0') {
			if(a[m][i] == ' ') b++;
			i++;
		}

		//printf("\n Satir: %d / Bosluk: %d \n",m,b);
	
		i=0;
		if(b==1) { j=0;
			while(a[m][i] != '\0') {
				
				if(d == 0) fName[m][j] = a[m][i]; else lName[m][j] = a[m][i];
				
				if(a[m][i] == ' ')  {d = 1; j=-1;}
				
				//if(a[m][i] == '\n')  {i = 0; j=0; }
				
				j++;
				i++;	
			}
		} else { j =0;
			while(a[m][i] != '\0') {
				
				if(d == 0) fName[m][j] = a[m][i];
				if(d == 1) mName[m][j] = a[m][i]; 
				if(d == 2) lName[m][j] = a[m][i];  
				
				if(a[m][i] == ' ')  {d++; j=-1;}
				i++;
				j++;	
			}		
		}
		
		//printf("\nSonuc2: %c \n",lName[0][1]);
		
		i = 0;
		while(lName[m][i] != '\0') { printf("%c",lName[m][i]); i++; }
		
		printf(" ");
	
		
		i = 0;
		while(fName[m][i] != '\0') { printf("%c",fName[m][i]); i++; }
		
		
		if(b>1) {	
		i = 0;
		while(mName[m][i] != '\0') { printf("%c",mName[m][i]); i++; }
		i = 0;		
		}
		
	printf("\n-----------------------\n");	
	
	}	
    
    return 0;

}
