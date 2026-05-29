#include <stdio.h>
#include <stdlib.h>
#define NATTEMPS 48

//O(Q * (N + M)) --> gotta alloc adjlist in place -->O(N + M + Q*K*logN)
//i do adj list per every query!

void solve1(int yokan[],int Nelems, int left, int right, int Nflavours){//soling via counting
    // 1. Calcola la lunghezza reale dell'intervallo
    int L = right - left + 1; 
    
    // 2. Calcola le soglie usando L
    int theshold = (L + 2) / 3; //+2 covers all aprox to the next bigger
    int threshold_double = (2 * L + 2) / 3;
    
    int* counter=calloc(Nflavours+1,sizeof(int));
    for(int i=left; i<=right; i++){
        counter[yokan[i]]++;
    }
    int solved1=0; //flag if 1 friend is happy solved, remembers what flavour it's gotten
    for(int i=1; i<=Nflavours; i++){
        if(counter[i]>=threshold_double){ //if 1 flavour make everyone happy
            printf("YES\n"); 
            free(counter);
            return;
        }
        if(counter[i]>=theshold){ //if i got a flavour that makes happy friend2 and I already made happy friend 1
            if(solved1!=0){
                printf("YES\n");
                free(counter);
                return;
            }
            else
                solved1=i;//i remember I solved1;
        }
    }
    printf ("NO\n");
    free(counter);
    return;
}

int lowest_index(int pieces[], int num_pieces, int at_least) { //bin search
  int low, high, mid;
  //invariant: low is feasable
  low = 0;
  high = num_pieces;
  while (high - low >= 1) {
    mid = (low + high) / 2;
    if (pieces[mid] < at_least)//if low
      low = mid + 1;
    else
      high = mid;
  }
  return low;//return leftiest feasable
}

int flavorElemsInSlab(int pieces[], int num_pieces, int left, int right){//i pass adj list interested flavor
    int firstFeasableidx=lowest_index(pieces,num_pieces,left);
    int firstNotFidx=lowest_index(pieces,num_pieces,right+1);
    // Il numero di elementi è (primo elemento DOPO il range) - (primo elemento NEL range)
    return firstNotFidx-firstFeasableidx;
}


void solve2(int yokan[], int Nelems, int left, int right, int Nflavours) {
    // --- 1. COSTRUZIONE ADJLIST IN SOLVE2 ---
    int *cnt = calloc(Nflavours + 1, sizeof(int));//counter of n per every flavour
    for (int i = 1; i <= Nelems; i++) {
        cnt[yokan[i]]++;
    }

    int **pos = malloc((Nflavours + 1) * sizeof(int *));
    int *write = calloc(Nflavours + 1, sizeof(int));

    for (int f = 1; f <= Nflavours; f++) {
        if (cnt[f] > 0) { //if not allced alloc
            pos[f] = malloc(cnt[f] * sizeof(int));
        } else {
            pos[f] = NULL;
        }
    }

    for (int i = 1; i <= Nelems; i++) {
        int f = yokan[i];
        pos[f][write[f]++] = i; //fill adjlist
    }
    free(write); 

    // 1. Calcola la lunghezza reale dell'intervallo
    int L = right - left + 1; 
    
    // 2. Calcola le soglie usando L
    int theshold = (L + 2) / 3; //+2 covers all aprox to the next bigger
    int threshold_double = (2 * L + 2) / 3;
    int first_flavor=0;
    
    //choose a ramdon

    //FIRST ROUND
    for (int attempt = 0; attempt < NATTEMPS; attempt++) {
        int rand_piece = (rand()%(right-left+1)+left);
        int rand_flavor = yokan[rand_piece];
        int result = flavorElemsInSlab(pos[rand_flavor], cnt[rand_flavor], left, right);//binsearch funz
            if (result >= threshold_double) { //if i made both friends happy
            printf("YES\n");
            for(int f=1; f<=Nflavours; f++) if(pos[f]) free(pos[f]);//dealloc
            free(pos); free(cnt);
            return;
            }
            if (result >= theshold){ //make one happy
            first_flavor = rand_flavor;
            break; //go out-->lets find the next
            }
        }
        if (first_flavor == 0) {//not founded
            printf("NO\n");
            for(int f=1; f<=Nflavours; f++) if(pos[f]) free(pos[f]);//dealloc
            free(pos); free(cnt);
            return;
        }
    //SECOND ROUND
    for (int attempt = 0; attempt < NATTEMPS; attempt++) {
        int rand_piece = (rand()%(right-left+1)+left);
        int rand_flavor = yokan[rand_piece];
        if (rand_flavor == first_flavor) 
            continue; // Se peschiamo di nuovo lo stesso gusto, riproviamo
        int result = flavorElemsInSlab(pos[rand_flavor], cnt[rand_flavor], left, right);
        if (result >= theshold) { // Trovato il secondo gusto per la seconda amica!
            printf("YES\n");
            for(int f=1; f<=Nflavours; f++) if(pos[f]) free(pos[f]);//dealloc
            free(pos); free(cnt);
            return;
        }
    }
    //Nothing found second round
    printf("NO\n");
    for(int f=1; f<=Nflavours; f++) if(pos[f]) free(pos[f]);//dealloc
    free(pos); free(cnt);
    return;
}


int main(){
    int m,n;//m nflavours, n nelems yukan
    scanf("%d %d",&n,&m);
    int *yokan=malloc((n+1)*sizeof(int));
    for(int i=1; i<=n; i++)
        scanf("%d",&yokan[i]);
    int q; //q nqueries
    scanf("%d",&q);
    int left,right;
    for(; q>0; q--){
        scanf("%d %d", &left, &right); //read slab per every test
        //solve query
        solve2(yokan,n,left,right,m);
    }
    free(yokan);
    return 0;
}