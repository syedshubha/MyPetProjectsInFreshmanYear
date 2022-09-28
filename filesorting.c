#include<stdio.h>


typedef struct
{
    char name[20];
    int mark;
} student;

int n=0,j,i=0;


int main()
{
    student std[20],temp;
    char *p="e:\\c_files.shubha.txt", *q="e:\\c_files.sorted.txt";
    FILE *f=fopen(p,"r"), *g=fopen(q,"w");

    for(; fscanf(f,"%s %d",std[n].name,&std[n].mark)!=EOF; n++);

    fclose(f);


    for(; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(std[j].mark<std[j+1].mark)
            {
                temp=std[j];
                std[j]=std[j+1];
                std[j+1]=temp;
            }

    for(i=0; i<n; i++)
    {
        fprintf(g,"%s %d\n",std[i].name,std[i].mark);
    }

    fclose(g);

    return 0;
}
