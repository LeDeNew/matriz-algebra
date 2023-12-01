#include <iostream>
#include <iomanip>
#define L 3
#define C 4

using namespace std;

int main(){
    double mat[L][C];
    cout << fixed << setprecision(2);

    // preenche

    for(int i = 0; i<L; i++){
        cout << "linha " << i <<endl;
        for(int j = 0; j<C; j++) cin >> mat[i][j];
    }

    // imprime

    cout << "matriz:" <<endl;
    for(int i = 0; i<L; i++){
        for(int j = 0; j<C; j++) cout << mat[i][j] << " ";
        cout <<endl;
    }

    // trocar linha 0 e 1

    for(int i = 0; i<C; i++) swap(mat[0][i], mat[1][i]);

    // calculo

    for(int i = 0; i<C; i++) mat[2][i] -= (2*mat[0][i]);
    for(int i = 0; i<C; i++) mat[0][i] -= (mat[1][i]/2);
    for(int i = 0; i<C; i++) mat[2][i] += (mat[1][i]/2);

    for(int i = 0; i<L-1; i++){
        for(int j = 0; j<C; j++){
            mat[i][j] += (((3.0-i)/5.0)*mat[2][j]);
        }
    }

    // final

    cout << "matriz final:" <<endl;
    for(int i = 0; i<L; i++){
        for(int j = 0; j<C; j++) cout << mat[i][j] << " ";
        cout <<endl;
    }

    cout << "soluções: " <<endl;
    for(int i = 0; i<L; i++){
        for(int j = 0; j<C-1; j++){
            if(mat[i][j]!=0) cout << mat[i][C-1]/mat[i][j] << " ";
        }
    }
    cout <<endl;

    return 0;
}
