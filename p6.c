#include<stdio.h>
#include<string.h>
struct mobile{
	
	char company_name[50];
	char company_color[50];
	char company_model[50];
	int price;
	
};
void main(){
	
    int n;
    printf("enter the any mobile :");
    scanf("%d",&n);
     
    struct mobile m1[n];
    
    int i;
    int mbl;
	
	for(i = 0; i < n; i++){

        printf("mobile price: ");
        scanf("%d", &m1[i].price);
        
        fflush(mbl);
        printf("mobile Name: ");
        gets(m1[i].company_name);
        
		fflush(mbl);
        printf("mobile color: ");
        gets(m1[i].company_color); 
		
		fflush(mbl);
        printf("mobile model: ");
        gets(m1[i].company_model);       
     
   

	for(i = 0; i < n; i++){
		printf("%d\t %s\t %s\t %s\t",m1[i].price,m1[i].company_name,m1[i].company_color,m1[i].company_model);
	}
}
}
