#include <iostream>
#define L1 3
#define C1 3
#define L2 3
#define C2 3

using namespace std;

int main(){
    int mat1[L1][C1], mat2[L2][C2];

    if(L1 == L2 && C1 == C2){

        // Matriz 1

        for(int i = 0; i<L1; i++){
            cout << "Linha " << i+1 <<endl;
            for(int j = 0; j<C1; j++) cin >> mat1[i][j];
        }
        
        cout << "matriz 1:" <<endl;
        for(int i = 0; i<L1; i++){
            for(int j = 0; j<C1; j++) cout << mat1[i][j] << " ";
            cout <<endl;
        }

        // Matriz 2

        for(int i = 0; i<L2; i++){
            cout << "Linha " << i+1 <<endl;
            for(int j = 0; j<C2; j++) cin >> mat2[i][j];
        }
        
        cout << "matriz 2:" <<endl;
        for(int i = 0; i<L2; i++){
            for(int j = 0; j<C2; j++) cout << mat2[i][j] << " ";
            cout <<endl;
        }

        // Multiplicação
        cout << "matriz resultante da soma:" <<endl;
        for (int i = 0; i<L1; i++) {
            for (int j = 0; j<C2; j++) {
                cout << mat1[i][j] + mat2[i][j] << " ";
            }
            cout << endl; 
        }
    } else cout << "nao eh possivel somar essas dimensoes de matrizes" <<endl;
}
