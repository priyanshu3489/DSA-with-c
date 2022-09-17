#include<stdio.h>
#define SIZE 4

int graph[SIZE][SIZE];


void addEdge(int src,int dest){//0,3 => 1 3,0 => 1
     graph[src][dest] = 1;
     graph[dest][src] = 1;
}

int main(){

    int i,j,cost;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(graph[i][j] == 0){
                printf("\n%d is connected with %d",i,j);
                scanf("%d",&cost);//1 - connected and -1 not connected
                if(cost)
                    addEdge(i,j);//0,1
                if(cost == -1 ){
                    graph[i][j]= -1;
                    graph[j][i]= -1;
                }
            }
        }
        printf("\n");
    }
// int pathsum()
// {

// }

    for(i=0;i<SIZE;i++){
        printf("\n%d is connected with : ",i);
        for(j=0;j<SIZE;j++){
                if(graph[i][j] == 1){
                    printf(" %d ",j);
                }


        }
    }

    return 0;

}