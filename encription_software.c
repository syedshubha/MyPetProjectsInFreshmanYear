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
    int i,j=0;
    char par[1000],c='a';

    printf("1. Plane text to Cypher text \n 2. Cypher text to plane text \n\n Enter choice first, then input the text \t");
    scanf("%d ",&i);

    for(; c!=10;)
    {
        scanf("%c",&c);
        par[j++]=c;
    }
    par[j]='\0';

    crypt(par,i);

    printf("\n\n output text: \n\n");
    puts(par);

    return 0;
}
