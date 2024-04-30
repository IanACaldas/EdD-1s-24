void bubble_sort(int arr[], int n){

   for(int i = 0; i < quant_n - 1; i++){
            for(int j = i; j < quant_n; j++){
                if(arr[i] > arr[j]){
                    swap(&arr[i], &arr[j])
            }
        }
    }   
    

}

void swap(int* n1, int* n2){

    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;

}