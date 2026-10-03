//BFS uses queue unlike DFS which uses stack
#include <stdio.h>
int graph[10][10];
int visited[10];
int queue[10];
int n;
void BFS(int start)
{
    int front = 0, rear = 0;
    int i, v;
    visited[start] = 1;
    queue[rear++] = start;
    while(front < rear)
    {
        v = queue[front++];
        printf("%d ", v);
        for(i = 0; i < n; i++)
        {
            if(graph[v][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}
int main()
{
    int i, j, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("BFS: ");
    BFS(start);
    return 0;
}
