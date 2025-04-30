#include <algorithm>

void ordina(int v[], int dim){
    for(int i=0; i<dim-1; i++){
        for(int j=i; j<dim; j++){
            if(v[i]>v[j]) std::swap(v[i], v[j]);
        }
    }
}
