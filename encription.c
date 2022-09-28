#include<stdio.h>

void crypt(char* a, int i)
{
    for(; *a; a++)
    {
        if((*a>='A')&&(*a<='Z'))
            *a=*a+32;

        switch(*a)
        {

        case 'a':
        {
            switch(i)
            {
            case 1:
                *a=9;
                break;
            case 2:
                *a='f';
                break;
            }
            break;
        }

        case 'b':
        {
            switch(i)
            {
            case 1:
                *a='y';
                break;
            case 2:
                *a='k';
                break;
            }
            break;
        }

        case 'c':
        {
            switch(i)
            {
            case 1:
                *a='h';
                break;
            case 2:
                *a='y';
                break;
            }
            break;
        }

        case 'd':
        {
            switch(i)
            {
            case 1:
                *a='s';
                break;
            case 2:
                *a='w';
                break;
            }
            break;
        }

        case 'e':
        {
            switch(i)
            {
            case 1:
                *a='x';
                break;
            case 2:
                *a='q';
                break;
            }
            break;
        }

        case 'f':
        {
            switch(i)
            {
            case 1:
                *a='a';
                break;
            case 2:
                *a=32;
                break;
            }
            break;
        }

        case 'g':
        {
            switch(i)
            {
            case 1:
                *a='m';
                break;
            case 2:
                *a='r';
                break;
            }
            break;
        }

        case 'h':
        {
            switch(i)
            {
            case 1:
                *a='t';
                break;
            case 2:
                *a='c';
                break;
            }
            break;
        }

        case 'i':
        {
            switch(i)
            {
            case 1:
                *a=32;
                break;
            case 2:
                *a='n';
                break;
            }
            break;
        }

        case 'j':
        {
            switch(i)
            {
            case 1:
                *a='v';
                break;
            case 2:
                *a='x';
                break;
            }
            break;
        }

        case 'k':
        {
            switch(i)
            {
            case 1:
                *a='b';
                break;
            case 2:
                *a='s';
                break;
            }
            break;
        }

        case 'l':
        {
            switch(i)
            {
            case 1:
                *a='z';
                break;
            case 2:
                *a='u';
                break;
            }
            break;
        }

        case 'm':
        {
            switch(i)
            {
            case 1:
                *a='w';
                break;
            case 2:
                *a='g';
                break;
            }
            break;
        }

        case 'n':
        {
            switch(i)
            {
            case 1:
                *a='i';
                break;
            case 2:
                *a='t';
                break;
            }
            break;
        }

        case 'o':
        {
            switch(i)
            {
            case 1:
                *a='q';
                break;
            case 2:
                *a='z';
                break;
            }
            break;
        }

        case 'p':
        {
            switch(i)
            {
            case 1:
                *a='u';
                break;
            case 2:
                *a='v';
                break;
            }
            break;
        }

        case 'q':
        {
            switch(i)
            {
            case 1:
                *a='e';
                break;
            case 2:
                *a='o';
                break;
            }
            break;
        }

        case 'r':
        {
            switch(i)
            {
            case 1:
                *a='g';
                break;
            case 2:
                *a=9;
                break;
            }
            break;
        }

        case 's':
        {
            switch(i)
            {
            case 1:
                *a='k';
                break;
            case 2:
                *a='d';
                break;
            }
            break;
        }

        case 't':
        {
            switch(i)
            {
            case 1:
                *a='n';
                break;
            case 2:
                *a='h';
                break;
            }
            break;
        }

        case 'u':
        {
            switch(i)
            {
            case 1:
                *a='l';
                break;
            case 2:
                *a='p';
                break;
            }
            break;
        }

        case 'v':
        {
            switch(i)
            {
            case 1:
                *a='p';
                break;

            case 2:
                *a='j';
                break;
            }
            break;
        }


        case 'w':
        {
            switch(i)
            {
            case 1:
                *a='d';
                break;
            case 2:
                *a='m';
                break;
            }
            break;
        }

        case 'x':
        {
            switch(i)
            {
            case 1:
                *a='j';
                break;
            case 2:
                *a='e';
                break;
            }
            break;
        }

        case 'y':
        {
            switch(i)
            {
            case 1:
                *a='c';
                break;
            case 2:
                *a='b';
                break;
            }
            break;
        }

        case 'z':
        {
            switch(i)
            {
            case 1:
                *a='o';
                break;
            case 2:
                *a='l';
                break;
            }
            break;
        }


        case 32:
        {
            switch(i)
            {
            case 1:
                *a='f';
                break;
            case 2:
                *a='i';
                break;
            }
            break;
        }

        case 9:
        {
            switch(i)
            {
            case 1:
                *a='r';
                break;
            case 2:
                *a='a';
                break;
            }
            break;
        }


        case '.':
        {
            switch(i)
            {
            case 1:
                *a='?';
                break;
            case 2:
                *a='!';
                break;
            }
            break;
        }


        case '?':
        {
            switch(i)
            {
            case 1:
                *a='!';
                break;
            case 2:
                *a='.';
                break;
            }
            break;
        }


        case '!':
        {
            switch(i)
            {
            case 1:
                *a='.';
                break;
            case 2:
                *a='?';
                break;
            }
            break;
        }


        default:
        {
            switch(i)
            {
            case 1:
                *a=*a-32;;
                break;
            case 2:
                *a=*a+32;
                break;
            }
        }


        }
    }
}
int main()
{
    int i,j=0,n;
    char par[1000], *en="g:\\encription.txt", *de="g:\\decription.txt", c='a', *a, *b;



    printf("1. Plane text to Cypher text \n2. Cypher text to plane text \n\n Enter choice first \t");

    scanf("%d",&i);

    printf("\nGoto G drive and open %s.txt\nNow write there the %s text. Don't exit the DOS! \n If you are done, then enter any character, else enter nothing. ", i-1? "decription":"encription", i-1? "Cypher":"Plane");

    getchar();
    getchar();

    a= (i-1) ? de : en;
    b= (i-1) ? en : de;


    FILE *f1=fopen(a,"r"), *f2=fopen(b,"w");

     while(c!=EOF)
     {
         c=fgetc(f1);
         if(c==10) c=9;
         par[j++]=c;
     }

    crypt(par,i);

    par[j-1]=0;

    fprintf(f2,"%s",par);

    printf("\n\nDone! Check %s for output file\n\n",b);
    fclose(f1);
    fclose(f2);

    return 0;
}
