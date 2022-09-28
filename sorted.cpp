#include<iostream>
#include<cstdio>

using namespace std;


class result
{
private:

    typedef struct
    {
        string name;
        int roll;
        float cgpa;
        int rank;
    }   student;

    char sec;
    int n;
    student std[200] ;

    void roll_sort()
    {
        for(int i=0; i<n-1; i++)
            for(int j=0; j<n-1-i; j++)
                if(std[j].roll>std[j+1].roll)
                {
                    student temp=std[j];
                    std[j]=std[j+1];
                    std[j+1]=temp;
                }
    }

    void rank()
    {
        int j=0;
        for(int i=0; i<n; i++, j++)
            if(std[i].cgpa== std[i+1].cgpa)
            {
                std[i].rank= j+1;
                j--;
            }
            else
                std[i].rank= j+1;

        roll_sort();
    }

    void sort()
    {
        for(int i=0; i<n-1; i++)
            for(int j=0; j<n-1-i; j++)
                if(std[j].cgpa<std[j+1].cgpa)
                {
                    student temp=std[j];
                    std[j]=std[j+1];
                    std[j+1]=temp;
                }
        rank();
    }

public:

    void input()
    {
        cout<< "Enter Section no. \n";
        cin>> sec;
        cout << "\nHow many student? \n";
        cin>> n;
        cout<< "\nEnter student info. Input format <ROLL NAME CGPA>  (No need to use < > )\n";
        for(int i=0; i<n; i++)
        {
            cout << "\nNo. " << i+1 << "\t";
            cin>> std[i].roll >> std[i].name >> std[i].cgpa;
        }
        cout << "\nThank you!\n";
    }

    void output()
    {
        sort();
        cout<< "\n\nSorted List (On roll)\n\n\t\t\t\tSection- "  << sec << "\n..................................................................................................\n\n";

        for(int i=0; i<n; i++)
        {
            cout<< "Roll: " ;
            printf("%5d",std[i].roll);
            cout << "\t\tName: " << std[i].name << "\t\tCGPA: " ;
            printf("%.2f",std[i].cgpa);
            cout << "\t\tRank: " << std[i].rank << endl;
        }
        cout<< endl << "...................................................................................................\nTotal Student: " << n <<endl << endl;
    }
};


int main()
{
    result EEE;
    EEE.input();
    EEE.output();
    return 0;
}
