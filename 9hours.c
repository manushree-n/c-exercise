#include <stdio.h>
int main() 
{
	int tonnes;

int kg, hg,dag,g,dg,cg,mg;
	
	printf("Input tonnes: ");
	scanf("%d", &tonnes);
	
	
	kg = tonnes/1000;
	
    hg=tonnes/100;
    
    	dag = tonnes/10;

    
    hg=tonnes/100;
    
    	dg = tonnes/0.1;
	
    cg=tonnes/0.01;
    
    mg=tonnes/0.001;
    
    
	printf("kg:hg:dag:hg:dg:cg:mg  %d:%d:%d:%d:%d:%d:%d\n");
	
	return 0;
}

