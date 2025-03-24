#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++){
        int chave = arr[i];
        int j = i - 1;
    
    while(j >= 0 && arr[j] > chave){
        arr[j + 1] = arr[j];
        j--;
    }
    
    arr[j + 1] = chave;
    
    }


}

int main(){

    int arr[] = {5, 3, 8, 4, 2};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes da ordenacao: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    insertionSort(arr, tamanho);

    printf("Array ordenado: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0; 
}

