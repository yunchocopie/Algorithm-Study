#include<iostream>
using namespace std;
int a[100][100];  //도화지를 배열로 생각해 풀어보자  
int main(){
    int paper,x,y,cnt=0;
    cin>>paper;   //종이 몇 장있는지 입력
	  
    while(paper--){
    	
        cin>>x>>y; //가로입력받고, 세로 입력받기  
        for(int i=y; i<y+10; i++){  //색종이 하나가 10이기 때문에,  
        	
            for(int j=x; j<x+10; j++){
            	
                if(!a[i][j]){    
                    cnt++; 
                   a[i][j]=1;
                }
            }
        }
    }
    cout<<cnt;
}

