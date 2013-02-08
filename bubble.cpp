#include "bubble.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;
bubble::bubble()
{
    //ctor
}

bubble::~bubble()
{
    //dtor
}
void bubble::bubblesort()
{
    int i=0,j=0,n=100;
    char tname [n],name[n][n];
    string line;
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        myfile>>name[i];
        i++;
    }
    for(i=0; i<n-1; i++)
        {
            for(j = i+1; j<n; j++)
                {
                    if(strcmp(name[i], name[j])>0)
                        {
                              strcpy(tname, name[i]);
                              strcpy(name[i], name[j]);
                              strcpy(name[j], tname);
                        }
                }
        }
       for (i =0; i<n; i++)
       cout<<name[i]<<endl;
       myfile.close();
}
void bubble::load()
{
    bubblesort();
}

