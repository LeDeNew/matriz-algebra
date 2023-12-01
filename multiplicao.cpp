#include <iostream>
#define L1 3
#define C1 2
#define L2 2
#define C2 3

using namespace std;

int main(){
    int mat1[L1][C1], mat2[L2][C2], mat3[L1][C2];

    if(L1 == C2){

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
        cout << "matriz resultante da multiplicacao:" <<endl;
        for (int i = 0; i<L1; i++) {
            for (int j = 0; j<C2; j++) {
                mat3[i][j] = 0;
                for (int k = 0; k<C1; k++) {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
                cout << mat3[i][j] << " ";
            }
            cout << endl; 
        }
    } else cout << "nao eh possivel multiplicar essas dimensoes de matrizes" <<endl;
}
