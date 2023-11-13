#include <iostream>
#include <map>

using namespace std;


void printDatos(map<string, int> mapa){
    for(auto i:mapa){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){

    map<string, int> alumnos;
    int Queries, option;
    cin>>Queries;

    for (int i=0;i<Queries;i++){
        cin>>option;
        
        string name;
        int score;
        switch (option)
        {
        case 1:
            cin>>name>>score;
            alumnos.insert(pair<string, int>(name, score));
            break;
        
        default:
            break;
        }
    }

    printDatos(alumnos);
    

    return 0;
}