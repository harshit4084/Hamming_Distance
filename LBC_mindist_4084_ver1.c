#include<stdio.h>

int a[25][25];  //maxsize of G matrix will be 25x25
char c[25];
int m,d_star=25,i,j;

int min_dist()
{
int k,d; //in worst case d_star will be number of columns in G matrix
for(i=0;i<m;i++){
for(k=0;k<m;k++){
	if(k!=i) {
            d=0;
	for(j=0;c[j]!='\0';j++){
		/*if(a[k][j]==a[i][j])
			d=d;
		else */
            if(a[k][j]!=a[i][j])
            {
                printf("\nNOT EQUAL INCREMENTING d");
            d=d+1;
            }

		}
	} /*else {
	d=d;
	}*/
		if (d_star>d)
		d_star=d;
		/*else d_star=d_star;*/
		printf("\n\t\t K is now %d",k);
}
		printf("\n\n\t\t I is now %d",i);
}
return d_star;
}

int  main()
{
printf("\n\nENTER NUMBER OF THE CODEWORDS\n");
scanf("%d",&m);
for(i=0;i<m;i++){
printf("\n\nENTER %dTH CODEWORD\n",i);
scanf("%s",c);
for(j=0;c[j]!='\0';j++){
	a[i][j]=c[j];
}
}

printf("\n\n*************THE GENERATOR MATRIX IS **************  \n\n");
for(i=0;i<m;i++){
	printf("\n");
for(j=0;c[j]!='\0';j++){
	printf("\t%c",a[i][j]);
}
}
printf("\nCAlling  min_dist\n");
d_star=min_dist();
printf("\n\n THE MINIMUM DISTANCE BETWEEN CODEWORDS IS d*=%d \n",d_star);
	return 0;
}
