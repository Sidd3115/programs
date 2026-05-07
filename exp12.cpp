#include <iostream>
using namespace std;
int graph[10][10], visited[10], queueArr[10];
int n;
void DFS(int v) {
    cout << v << " ";
    visited[v] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}
void BFS(int start) {
    int front = 0, rear = 0;
    queueArr[rear++] = start;
    visited[start] = 1;
    while (front < rear) {
        int v = queueArr[front++];
        cout << v << " ";
        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                queueArr[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}
int main() {
    int choice, start;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    do {
        cout << "\n1. DFS Traversal";
        cout << "\n2. BFS Traversal";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice) {
        case 1:
                for (int i = 0; i < n; i++)
                    visited[i] = 0;
                cout << "Enter starting vertex: ";
                cin >> start;
                cout << "DFS Traversal: ";
                DFS(start);
                cout << endl;
                break;
        case 2:
                for (int i = 0; i < n; i++)
                    visited[i] = 0;
                cout << "Enter starting vertex: ";
                cin >> start;

                cout << "BFS Traversal: ";
                BFS(start);
                cout << endl;
                break;
         case 3:
                cout << "Program Ended";
                break;
         default:
                cout << "Invalid Choice";
        }
     } while(choice != 3);
     return 0;
}
