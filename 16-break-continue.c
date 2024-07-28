#include<stdio.h>
int main()

{
    int i =0;
    while (i<=10)
    {
        if (i==5)
    {
        i++; //eta continue er pore dile continue to nijei skip korbe, tokhon r iteration hobena, tai 4 er pore jokhon 5 hobe, tokhn if condition er vitorer i++ iteration er karone shei 5 6 hoye thn continue to the next step hobe. muloto ekhaner ei exra i++ ta specially 5 er porer sequence dhore rakhar jonno lekha.
        continue;
        
    }
    printf("%d\n",i);
    i++;
    }
    
    
    return 0;
}
