#include <bits/stdc++.h> 

using namespace std; 
vector<int> grafo[10000];

//MENU PARA INTERACCION 
void printMenu() {
    cout<<"====================================================="<<endl;
    cout<<"1. Ejecutar el Primer Ejemplo: Graficar el Grafo con Lista de Adyacencia"<<endl;
    cout<<"2. Ejecutar el Segundo Ejemplo: Graficar el Grafo con Lista de Adyacencia"<<endl;
    cout<<"3. Ejecutar el Tercer Ejemplo: Graficar el Grafo con Matriz de Adyacencia"<<endl;
    cout<<"4. Ejecutar el Cuarto Ejemplo: Graficar el Grafo con Matriz de Adyacencia"<<endl;
    cout<<"5. Ejecutar el Quinto Ejemplo: Mostrar el Recorrido BFS de una conexion de servidores"<<endl;
    cout<<"6. Ejecutar el Sexto Ejemplo: Mostrar el Recorrido BFS de una conexion de servidores"<<endl;
    cout<<"7. Ejecutar Tu propio Ejemplo: Impresion de Grafo con Lista"<<endl;
    cout<<"8. Ejecutar Tu propio Ejemplo: Recorrido BFS"<<endl;
    cout<<"X. Salir del programa"<<endl;
    cout<<"====================================================="<<endl;
}


//FUNCION PARA MOSTRAR EL GRAFO AL INGRESAR LOS SERVIDORES Y CONEXIONES
void mostrarElGrafo(int servidores){
    cout<<"El grafo es: "<<endl;
    for(int i=1;i<=servidores;i++) {
        cout<<"{"<<(i)<<"}=>";
        for(int j=0;j<grafo[i].size();j++) {
            cout<<"["<<grafo[i][j]<<"]";
        }
        cout<<endl;
    }
}

//MUESTRA EL GRAFO EN UNA MATRIZ DE ADYACENCIA 
void mostrarLaMatriz(int servidores, int conexiones){
    int matrizAdyacencia[servidores][servidores];
    for(int l = 0; l<servidores; l++){
        for(int h = 0; h<servidores;h++){
            matrizAdyacencia[l][h] = 0;
        }
    }
    for(int i=0;i<conexiones;i++) {
        cout<<"Ingrese la conexion entre dos servidores, esta conexion sera mutuo"<<endl;
        int a,b;
        cin>>a>>b;
        matrizAdyacencia[a-1][b-1] = 1;
        matrizAdyacencia[b-1][a-1] = 1;
    }
    cout<<"La matriz es: "<<endl;
    cout<<"    1    ";
    for(int i=2;i<=servidores;i++) {
        cout<<i<<"    ";
    }
    for(int j=1;j<=servidores;j++) {
        cout<<endl<<j<<" ";
        for(int n=0;n<servidores;n++) {
            cout<<" ["<<matrizAdyacencia[j-1][n]<<"] ";
        }    
        cout<<endl;
    }
        
        cout<<endl;
}


//MUESTRA EL RECORRIDO HECHO POR LOS SERVIDORES PARA TRANSPORTAR EL PAQUETE DE DATOS
void mostrarRecorridoBFS(int nodoActual, int servidor, int nodoFinal){ 
    int nodoInicial = nodoActual;
    vector <pair<int, int>> padres;
    vector<bool> visitados(servidor+1);                   
    queue<int> colita;
    visitados[nodoActual] = true;  
    colita.push(nodoActual);                
    vector<int> level(servidor+1);            
    level[nodoActual] = 0;
    while(!colita.empty() && !visitados[nodoFinal]){
        int nodoActual = colita.front();
        colita.pop(); 
        for(int i=0;i<grafo[nodoActual].size();i++) {
            int nodoAVisitar = grafo[nodoActual][i];   
            if(!visitados[nodoAVisitar]) {
                padres.push_back(make_pair(nodoActual, nodoAVisitar));
                colita.push(nodoAVisitar);
                visitados[nodoAVisitar] = true;
                level[nodoAVisitar] = level[nodoActual] + 1;
            }
        }
    }
    if(visitados[nodoFinal]){
        cout<<"el paquete de datos si llego"<<endl;
        vector <pair<int, int>> trayectoBFS;
        trayectoBFS.push_back(padres[padres.size()-1]);
        pair<int,int>actuales = padres[padres.size()-1];
        while(trayectoBFS[trayectoBFS.size()-1].first != nodoInicial){
            for (int i = 0; i < padres.size(); i++) {
                if(actuales.first == padres[i].second) {
                    trayectoBFS.push_back(padres[i]);
                }
            }
                actuales = trayectoBFS[trayectoBFS.size()-1];
    }
    for(int f = trayectoBFS.size()-1; f > 0; f--){
        cout<<trayectoBFS[f].first<<"-->"<<trayectoBFS[f].second<<endl;
    }
    cout<<trayectoBFS[0].first<<"-->"<<trayectoBFS[0].second<<endl;

    cout<<"Paso por "<<trayectoBFS.size()<<" niveles "<<endl;
    } 
    else{
        cout<<"el paquete de datos no llego :( "<<endl;
    }
}



//FUNCIONES PARA PONER EN EL MENU DE PRESENTACION
void ejemplo1() {
    for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
    cout<<"====================================================="<<endl;    
    cout<<"Imprimiendo el Primer Ejemplo"<<endl;
    int servidores = 8;
    int conexiones = 12;
    //1 a 2
    grafo[1].push_back(2);  
    grafo[2].push_back(1);
    //1 a 6
    grafo[1].push_back(6);
    grafo[6].push_back(1);
    //2 a 3
    grafo[2].push_back(3);
    grafo[3].push_back(2);
    //2 a 4
    grafo[2].push_back(4);
    grafo[4].push_back(2);
    //3 a 4
    grafo[3].push_back(4);  
    grafo[4].push_back(3);
    //3 a 8
    grafo[3].push_back(8);  
    grafo[8].push_back(3);
    //4 a 5
    grafo[4].push_back(5);  
    grafo[5].push_back(4);
    //4 a 6
    grafo[4].push_back(6);  
    grafo[6].push_back(4);
    //5 a 7
    grafo[5].push_back(7);  
    grafo[7].push_back(5);
    //6 a 7
    grafo[6].push_back(7);  
    grafo[7].push_back(6);
    //6 a 8
    grafo[6].push_back(8);  
    grafo[8].push_back(6);
    //8 a 7
    grafo[7].push_back(8);  
    grafo[8].push_back(7);
    
    mostrarElGrafo(servidores);
}

void ejemplo2() {
    for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
    cout<<"====================================================="<<endl;    
    cout<<"Imprimiendo el Segundo Ejemplo"<<endl;
    int servidores = 8;
    int conexiones = 16;
    //1 a 2
    grafo[1].push_back(2);  
    grafo[2].push_back(1);
    //1 a 3
    grafo[1].push_back(3);  
    grafo[3].push_back(1);
    //1 a 4
    grafo[1].push_back(4);  
    grafo[4].push_back(1);
    //2 a 3
    grafo[2].push_back(3);
    grafo[3].push_back(2);
    //2 a 4
    grafo[2].push_back(4);
    grafo[4].push_back(2);
    //2 a 6
    grafo[2].push_back(6);
    grafo[6].push_back(2);
    //3 a 4
    grafo[3].push_back(4);  
    grafo[4].push_back(3);
    //3 a 5
    grafo[3].push_back(5);  
    grafo[5].push_back(3);
    //3 a 8
    grafo[3].push_back(8);  
    grafo[8].push_back(3);
    //4 a 5
    grafo[4].push_back(5);  
    grafo[5].push_back(4);
    //4 a 6
    grafo[4].push_back(6);  
    grafo[6].push_back(4);
    //4 a 7
    grafo[4].push_back(7);  
    grafo[7].push_back(4);
    //5 a 7
    grafo[5].push_back(7);  
    grafo[7].push_back(5);
    //6 a 7
    grafo[6].push_back(7);  
    grafo[7].push_back(6);
    //6 a 8
    grafo[6].push_back(8);  
    grafo[8].push_back(6);
    //7 a 8
    grafo[7].push_back(8);  
    grafo[8].push_back(7);
    
    mostrarElGrafo(servidores);
}
void ejemplo3() {
    int matrizAdyacenciaEjemplo3[9][9];
    for(int l = 0; l<9; l++){
        for(int h = 0; h<9;h++){
            matrizAdyacenciaEjemplo3[l][h] = 0;
        }
    }
    cout<<"Imprimiendo el Tercer Ejemplo"<<endl;
    //1 a 2
    matrizAdyacenciaEjemplo3[1][2] = 1;
    matrizAdyacenciaEjemplo3[2][1] = 1;
    //1 a 3
    matrizAdyacenciaEjemplo3[1][3] = 1;
    matrizAdyacenciaEjemplo3[3][1] = 1;
    //2 a 4
    matrizAdyacenciaEjemplo3[2][4] = 1;
    matrizAdyacenciaEjemplo3[4][2] = 1;
    //3 a 4
    matrizAdyacenciaEjemplo3[3][4] = 1;
    matrizAdyacenciaEjemplo3[4][3] = 1;
    //3 a 5
    matrizAdyacenciaEjemplo3[3][5] = 1;
    matrizAdyacenciaEjemplo3[5][3] = 1;
    //4 a 5
    matrizAdyacenciaEjemplo3[4][5] = 1;
    matrizAdyacenciaEjemplo3[5][4] = 1;
    //4 a 6
    matrizAdyacenciaEjemplo3[4][6] = 1;
    matrizAdyacenciaEjemplo3[6][4] = 1;
    //4 a 7
    matrizAdyacenciaEjemplo3[4][7] = 1;
    matrizAdyacenciaEjemplo3[7][4] = 1;
    //5 a 6
    matrizAdyacenciaEjemplo3[5][6] = 1;
    matrizAdyacenciaEjemplo3[6][5] = 1;
    //5 a 8
    matrizAdyacenciaEjemplo3[5][8] = 1;
    matrizAdyacenciaEjemplo3[8][5] = 1;
    //6 a 7 
    matrizAdyacenciaEjemplo3[6][7] = 1;
    matrizAdyacenciaEjemplo3[7][6] = 1;
    //6 a 9
    matrizAdyacenciaEjemplo3[6][9] = 1;
    matrizAdyacenciaEjemplo3[7][6] = 1;
    //6 a 8
    matrizAdyacenciaEjemplo3[6][8] = 1;
    matrizAdyacenciaEjemplo3[8][6] = 1;
    //8 a 9
    matrizAdyacenciaEjemplo3[8][9] = 1;
    matrizAdyacenciaEjemplo3[9][8] = 1;
    
    cout<<"La matriz es: "<<endl;
    cout<<"    1    ";
    for(int i=2;i<=9;i++) {
        cout<<i<<"    ";
    }
    for(int j=1;j<=9;j++) {
        cout<<endl<<j<<" ";
        for(int n=0;n<9;n++) {
            cout<<" ["<<matrizAdyacenciaEjemplo3[j-1][n]<<"] ";
        }    
        cout<<endl;
    }
        
        cout<<endl;
}

void ejemplo4() {
    int matrizAdyacenciaEj4[10][10];
    for(int l = 0; l<10; l++){
        for(int h = 0; h<10;h++){
            matrizAdyacenciaEj4[l][h] = 0;
        }
    }
    cout<<"Imprimiendo el Tercer Ejemplo"<<endl;
    //1. 1 a 2
    matrizAdyacenciaEj4[1][2] = 1;
    matrizAdyacenciaEj4[2][1] = 1;
    //2. 2 a 3
    matrizAdyacenciaEj4[2][3] = 1;
    matrizAdyacenciaEj4[3][2] = 1;
    //3. 3 a 4
    matrizAdyacenciaEj4[3][4] = 1;
    matrizAdyacenciaEj4[4][3] = 1;
    //4. 4 a 5
    matrizAdyacenciaEj4[4][5] = 1;
    matrizAdyacenciaEj4[5][4] = 1;
    //5. 5 a 6
    matrizAdyacenciaEj4[5][6] = 1;
    matrizAdyacenciaEj4[6][5] = 1;
    //6. 6 a 7
    matrizAdyacenciaEj4[6][7] = 1;
    matrizAdyacenciaEj4[7][6] = 1;
    //7. 7 a 8
    matrizAdyacenciaEj4[7][8] = 1;
    matrizAdyacenciaEj4[8][7] = 1;
    //8. 1 a 8
    matrizAdyacenciaEj4[1][8] = 1;
    matrizAdyacenciaEj4[8][1] = 1;
    //9. 1 a 9
    matrizAdyacenciaEj4[1][9] = 1;
    matrizAdyacenciaEj4[9][1] = 1;
    //10. 2 a 9
    matrizAdyacenciaEj4[2][9] = 1;
    matrizAdyacenciaEj4[9][2] = 1;
    //11. 3 a 9
    matrizAdyacenciaEj4[3][9] = 1;
    matrizAdyacenciaEj4[9][3] = 1;
    //12. 7 a 9
    matrizAdyacenciaEj4[7][9] = 1;
    matrizAdyacenciaEj4[9][7] = 1;
    //13. 9 a 10
    matrizAdyacenciaEj4[9][10] = 1;
    matrizAdyacenciaEj4[10][9] = 1;
    //14. 4 a 10
    matrizAdyacenciaEj4[4][10] = 1;
    matrizAdyacenciaEj4[10][4] = 1;
    //15. 5 a 10
    matrizAdyacenciaEj4[5][10] = 1;
    matrizAdyacenciaEj4[10][5] = 1;
    //16. 6 a 10
    matrizAdyacenciaEj4[6][10] = 1;
    matrizAdyacenciaEj4[10][6] = 1;;
    
    cout<<"La matriz es: "<<endl;
    cout<<"    1    ";
    for(int i=2;i<=10;i++) {
        cout<<i<<"    ";
    }
    for(int j=1;j<=10;j++) {
        cout<<endl<<j<<" ";
        for(int n=0;n<10;n++) {
            cout<<" ["<<matrizAdyacenciaEj4[j-1][n]<<"] ";
        }    
        cout<<endl;
    }
        
        cout<<endl;
}

void ejemplo5(){
    for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
    cout<<"====================================================="<<endl;    
    cout<<"Imprimiendo el Quinto Ejemplo"<<endl;
    int servidores = 14;
    int conexiones = 24;
    //1 a 2
    grafo[1].push_back(2);  
    grafo[2].push_back(1);
    //1 a 12
    grafo[1].push_back(12);  
    grafo[3].push_back(1);
    //2 a 3
    grafo[2].push_back(3);  
    grafo[3].push_back(2);
    //2 a 13
    grafo[2].push_back(13);
    grafo[13].push_back(2);
    //3 a 4
    grafo[3].push_back(4);
    grafo[4].push_back(4);
    //3 a 13
    grafo[3].push_back(13);
    grafo[13].push_back(3);
    //4 a 5
    grafo[4].push_back(5);  
    grafo[5].push_back(4);
    //5 a 13
    grafo[5].push_back(13);  
    grafo[13].push_back(5);
    //5 a 14
    grafo[5].push_back(14);  
    grafo[14].push_back(5);
    //5 a 6
    grafo[5].push_back(6);  
    grafo[6].push_back(5);
    //6 a 7
    grafo[6].push_back(7);  
    grafo[7].push_back(6);
    //6 a 14
    grafo[6].push_back(14);  
    grafo[14].push_back(6);
    //6 a 8
    grafo[6].push_back(8);  
    grafo[8].push_back(6);
    //7 a 8
    grafo[7].push_back(8);  
    grafo[8].push_back(7);
    //8 a 9
    grafo[8].push_back(9);  
    grafo[9].push_back(8);
    //8 a 14
    grafo[8].push_back(14);  
    grafo[14].push_back(8);
    //9 a 10
    grafo[9].push_back(10);  
    grafo[10].push_back(9);
    //10 a 14
    grafo[10].push_back(14);  
    grafo[14].push_back(10);
    //10 a 11
    grafo[10].push_back(11);  
    grafo[11].push_back(10);
    //11 a 14
    grafo[11].push_back(14);  
    grafo[14].push_back(11);
    //11 a 13
    grafo[11].push_back(13);  
    grafo[13].push_back(11);
    //11 a 12
    grafo[11].push_back(12);  
    grafo[12].push_back(11);
    //12 a 13
    grafo[12].push_back(13);  
    grafo[13].push_back(12);
    //13 a 14
    grafo[13].push_back(14);  
    grafo[14].push_back(13);
    
    mostrarElGrafo(servidores);
    mostrarRecorridoBFS(1,servidores,7);
}

void ejemplo6(){
    for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
    cout<<"====================================================="<<endl;    
    cout<<"Imprimiendo el Quinto Ejemplo"<<endl;
    int servidores = 14;
    int conexiones = 24;
    //1 a 2
    grafo[1].push_back(2);  
    grafo[2].push_back(1);
    //1 a 12
    grafo[1].push_back(12);  
    grafo[3].push_back(1);
    //2 a 3
    grafo[2].push_back(3);  
    grafo[3].push_back(2);
    //2 a 13
    grafo[2].push_back(13);
    grafo[13].push_back(2);
    //3 a 4
    grafo[3].push_back(4);
    grafo[4].push_back(4);
    //3 a 13
    grafo[3].push_back(13);
    grafo[13].push_back(3);
    //4 a 5
    grafo[4].push_back(5);  
    grafo[5].push_back(4);
    //5 a 13
    grafo[5].push_back(13);  
    grafo[13].push_back(5);
    //5 a 14
    grafo[5].push_back(14);  
    grafo[14].push_back(5);
    //5 a 6
    grafo[5].push_back(6);  
    grafo[6].push_back(5);
    //6 a 7
    grafo[6].push_back(7);  
    grafo[7].push_back(6);
    //6 a 14
    grafo[6].push_back(14);  
    grafo[14].push_back(6);
    //6 a 8
    grafo[6].push_back(8);  
    grafo[8].push_back(6);
    //7 a 8
    grafo[7].push_back(8);  
    grafo[8].push_back(7);
    //8 a 9
    grafo[8].push_back(9);  
    grafo[9].push_back(8);
    //8 a 14
    grafo[8].push_back(14);  
    grafo[14].push_back(8);
    //9 a 10
    grafo[9].push_back(10);  
    grafo[10].push_back(9);
    //10 a 14
    grafo[10].push_back(14);  
    grafo[14].push_back(10);
    //10 a 11
    grafo[10].push_back(11);  
    grafo[11].push_back(10);
    //11 a 14
    grafo[11].push_back(14);  
    grafo[14].push_back(11);
    //11 a 13
    grafo[11].push_back(13);  
    grafo[13].push_back(11);
    //11 a 12
    grafo[11].push_back(12);  
    grafo[12].push_back(11);
    //12 a 13
    grafo[12].push_back(13);  
    grafo[13].push_back(12);
    //13 a 14
    grafo[13].push_back(14);  
    grafo[14].push_back(13);
    
    mostrarElGrafo(servidores);
    mostrarRecorridoBFS(4,servidores,9);
}

void ejemploPropio2(int servidores,int conexiones) {
    cout<<"Imprimiendo el propio Ejemplo"<<endl;
            for(int i=0;i<conexiones;i++) {
                cout<<"Ingrese la conexion entre dos servidores, esta conexion sera mutuo"<<endl;
                int a,b;
                cin>>a>>b;
                grafo[a].push_back(b);  
                grafo[b].push_back(a);  
            }
            mostrarElGrafo(servidores);
}

void ejemploPropio(int servidores,int conexiones) {
    cout<<"Imprimiendo el propio Ejemplo"<<endl;
            for(int i=0;i<conexiones;i++) {
                cout<<"Ingrese la conexion entre dos servidores, esta conexion sera mutuo"<<endl;
                int a,b;
                cin>>a>>b;
                grafo[a].push_back(b);  
                grafo[b].push_back(a);  
            }
            mostrarElGrafo(servidores);
}
void salir() {
    cout<<"Saliendo del Programa"<<endl;
}

    
//DESDE AQUI SE IMPRIME LOS EJEMPLOS Y SE INGRESAN LOS DATOS
int main() { 
    printMenu();
    int option;
    cin>>option;
    do{
        switch(option) {
        case 1:
            ejemplo1();
            break;
        case 2:
            ejemplo2();
            break;
        case 3:
            ejemplo3();
            break;
        case 4:
            ejemplo4();
            break;
        case 5:
            ejemplo5();
            break;
        case 6:
            ejemplo6();
            break;
        case 7:
        int servidores2, conexiones2;
        for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
        cout<<"Ingrese el numero de servidores que contiene su conexion"<<endl;
            cin>>servidores2;
            cout<<"Ingrese el numero de conexiones entre sus servidores"<<endl;
            cin>>conexiones2;
            ejemploPropio2(servidores2,conexiones2);
            break;
        case 8:
        int servidores1, conexiones1, inicioEjemplo, finalEjemplo;
        for(int i = 0; i<10000; i++){
            grafo[i].clear();
        }
        cout<<"Ingrese el numero de servidores que contiene su conexion"<<endl;
            cin>>servidores1;
            cout<<"Ingrese el numero de conexiones entre sus servidores"<<endl;
            cin>>conexiones1;
            ejemploPropio(servidores1,conexiones1);
            cout<<"Ingrese el inicio del recorrido"<<endl;
            cin>>inicioEjemplo;
            cout<<"Ingrese el final del recorrido"<<endl;
            cin>>finalEjemplo;
            mostrarRecorridoBFS(inicioEjemplo,servidores1,finalEjemplo);
        break;
        default:
            cout<<"No existe esa opcion"<<endl;
        }
        printMenu();
    }while(cin>>option && option);
    salir();
    
    return 0; 
} 