#define MAXN 10000
#include <stdio.h>
#include <stdlib.h>

void solve(int capnums[], int bottlenums[], int n){//n will decresa withsubprobs
    //base case
    if(n==0)
        return;
    
    //create piles
    int *smallcaps=malloc(n*sizeof(int));
    int *bigcaps=malloc(n*sizeof(int));
    int *smallbottles=malloc(n*sizeof(int));
    int *bigbottles=malloc(n*sizeof(int));


    //divide bottles
    int smallc=0,bigc=0;
    int cap_choice=capnums[rand()%n];
    //int cap_choice=capnums[n/2];this works well too, but if knew it's counterable
    //int cap_choice=capnums[0];//scelta arbitraria, scelgo cap will define ordering
    //this is counterable, if this elem is smallest or biggest still O(n^2) EMPTY PILE AND FULLED PILE
    int result,matching_bottle;
    for(int i=0; i<n; i++){
        printf("0 %d %d\n",cap_choice,bottlenums[i]);//first linear search
        scanf("%d",&result);
        if(result==0){
            printf("1 %d %d\n",cap_choice,bottlenums[i]);//hit
            matching_bottle=bottlenums[i]; //we'll use it to order bottles later
        }
        if(result==-1){//bigger
            bigbottles[bigc++]=bottlenums[i];//first do, then ++
        }
        if(result==1){//smaller
            smallbottles[smallc++]=bottlenums[i];
        }
    }
    //divide caps
    smallc=0;bigc=0;
    for(int i=0; i<n; i++){//linear search, all caps vs bottle matching cap pivot
        printf("0 %d %d\n",capnums[i],matching_bottle);
        scanf("%d",&result);
        if(result==-1){//???
            smallcaps[smallc++]=capnums[i];//first do, then ++
        }
        if(result==1){//????
            bigcaps[bigc++]=capnums[i];
        }
    }
    //now lets do rec calls, as quicksort
    solve(bigcaps,bigbottles,bigc);
    solve(smallcaps,smallbottles,smallc);

    free(smallcaps);
    free(bigcaps);
    free(smallbottles);
    free(bigbottles);
}

int main(){
    int capsnums[MAXN]; //enum caps
    int bottlenums[MAXN];//enum bottles
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        capsnums[i]=i+1; bottlenums[i]=i+1;
    }
    solve(capsnums,bottlenums,n);
    return 0;
}