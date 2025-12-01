#include <stdio.h>

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    int adj[n][n];
    int visited[n];
    int queue[n];
    int front = 0, rear = 0;

    int i, j;   // ? Declare loop variables here
    int node;   // ? Also used in BFS

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    // Initialize visited array
    for(i = 0; i < n; i++){
        visited[i] = 0;
    }

    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS traversal: ");

    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        node = queue[front++];
        printf("%d ", node);

        for(i = 0; i < n; i++) {
            if(adj[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    return 0;
}

