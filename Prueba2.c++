#include <bits/stdc++.h> 
//#define input freopen("in.txt","r",stdin)
//#define output freopen("out.txt","w",stdout)
using namespace std; 
vector<int> grafo[10000];
void mostrarRecorridoBFS(int nodoActual, int servidor){
    vector<bool> visitados(servidor);
    queue<int> colita;
    //int nodoActual = 1;
    visitados[nodoActual] = true; // empezando desde ricardo 1 pero el vector empieza en 0 por lo cual vamos a restar 1 
    colita.push(nodoActual); // agregamos el primer nodo y restamos 1 por que empieza en 0 
    vector<int> level(servidor);
    level[nodoActual] = 0;
    while(!colita.empty()){
        int nodoActual = colita.front();
        colita.pop(); 
        for(int i=0;i<grafo[nodoActual].size();i++) {
            int nodoAVisitar = grafo[nodoActual][i];  // grafo[0][1] = 1 grafo[3][2] =4 
            if(!visitados[nodoAVisitar]) {
                colita.push(nodoAVisitar);
                visitados[nodoAVisitar] = true;
                level[nodoAVisitar] = level[nodoActual] + 1;
                pdre[nodoAVisitar] = [nodoActual];
                printPath(nodoFinal)// metodo aparte
                if(padre(nodoFinal!=-1))
                printPath(padre(nodo))
                cout<<nodoFinal;
            }
        }
    }

    for(int i = 0 ; i<= servidor; i++  ) {
        cout<<"[" << visitados[i] <<"]" ;
    }

    if(visitados[7]){
        cout<<level[7]<<endl;
        cout<<"el paquete de datos si llego"<<endl;
    } 
    else{
        cout<<"el paquete de datos no llego :( "<<endl;
    }
}
    

int main() 
{ 
    //input; 
    int servidores,conexiones; 
    cin>>servidores>>conexiones;
    
    
    for(int i=0;i<conexiones;i++) {
        int a,b;
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
   
   //Mostrar el grafo
    
    for(int i=1;i<=servidores;i++) {
        cout<<"{"<<(i)<<"}=>";
        for(int j=0;j<grafo[i].size();j++) {
            cout<<"["<<grafo[i][j]<<"]";
        }
        cout<<endl;
    }
    
    mostrarRecorridoBFS(1,servidores)
    return 0; 
}