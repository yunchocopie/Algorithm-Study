#include <stdio.h>

int main(void){
    int N,M,i,j;
    scanf("%d %d", &N, &M);  //n,m입력  
    int arr[N+1];          // 배열의 길이  
    for(int k=1;k<N+1;k++){
        arr[k]=k;  // 배열 순서대로 채우기  
    }
    for(int k=0;k<M;k++){
        scanf("%d %d",&i,&j);  //i j를 반복문안에서 입력    
        int num=0;
        
        for(int k= j;k>=i;k--){   //바꿔치기  
            num=arr[i];
            arr[i]=arr[k];
            arr[k]=num;
            
            i++;
             
        }
    }
    for(int k=1;k<N+1;k++){
        printf("%d ",arr[k]);
    }
}


