#include <bits/stdc++.h> // importamos las librerias
using namespace std;

/**
Implementacion con lista de adyacencia
*/
class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    ~Graph();
    void addEdge(int u,int v);
    void BFS(int src);
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[this->V];
}
Graph::~Graph(){
    delete [] adj;
}
/**Grafo no dirigido*/
void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void Graph::BFS(int src){
    vector <int> dist(this->V,0);
    vector <int> parent(this->V,-1);
    vector <bool> visited(this->V,false);

    queue<int> Q;
    dist[src] = 0;
    visited[src] = true;
    Q.push(src);
    /* Iterador para poder procesar la lista de los vertices**/
    list<int>::iterator it;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        //visited[u] = true;
        /**
        suponemos que 'dest' es un vertice
        de destino. Si llegamos a nuestro vertice destino, será la ruta
        mas corta desde el orígen hasta éste.
        if(u == dest){
            imprimeDistancia---
            hazAlgo---
        }
        */
        /**
        Por cada vertice v que es adyacente a u:
        */
        for(it = adj[u].begin();it!=adj[u].end();++it){
            int v = *it;
            if(!visited[v]){
                dist[v] = dist[u] + 1;
                parent[v] = u;
                visited[v] = true;
                Q.push(v);
            }
        }
    }
}  //imprime distancias
int main(){
    int V = 5;
    Graph g(V);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,4);
    g.addEdge(3,4);

    g.BFS(0);
    return 0;
}
