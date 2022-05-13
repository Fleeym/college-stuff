#include <iostream>

int** citeste_mat(int &n, int &m, bool &alocat) {
    int **a;
    std::cout << "Introduceti numarul de linii: ";
    std::cin >> n;
    std::cout << "Introduceti numarul de coloane: ";
    std::cin >> m;

    a = new int*[n];
    if (!a) {
        std::cout << "Alocare esuata!\n";
        alocat = false;
        return NULL;
    } else {
        for (int i = 0; i < n; i++) {
            a[i] = new int[m];
            if(!a[i]) {
                std::cout << "Alocare esuata!\n";
                alocat = false;
                return NULL;
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                std::cout << "a[" << i << "][" << j << "] = ";
                std::cin >> a[i][j];
            }
        return a;
    }
}
void puncte_sa (int *matr[], int n, int m) {
    int nr_puncte_sa = 0;
    bool da;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            da = true;
            for(int k = 0; k < m; k++)
                if (matr[i][k] < matr[i][j])
                    da = false;
            for (int k = 0; k < n; k++)
                if (matr[k][j] > matr[i][j])
                    da = false;
            if (da) {
                std::cout << "a[" << i << "][" << j << "] = " << matr[i][j] << " este punct sa\n";
                nr_puncte_sa++;
            }
        }
    if (nr_puncte_sa)
        std::cout << "Avem puncte sa.\n";
    else
        std::cout << "Nu avem puncte sa.\n";
}

void scrie_matrice (int *matr[], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            std::cout << matr[i][j] << " ";
        std::cout << "\n";
    }
}

int main() {
    int **a;
    bool alocare = true;
    int lin, col;
    a = citeste_mat(lin, col, alocare);
    if(alocare)
        puncte_sa(a, lin, col);
    return 0;
}