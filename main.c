//#include <stdio.h>
//#define max(i, j) (i > j ? i : j)
//
// 
//int main(void)
//{
//    double arr[10];
//    double i, j;
//    printf("Vvedite znachenia dlia poiska: ");
//	while(scanf("%f" "%f", &i, &j) != NULL){
//		int z = max(i,j);
//		printf("max = %lf", z); 
//	} 
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define max(arr, n) int i int m = arr[0] for(i = 1; i <= n; i++) { if(arr[i] > m) m = arr[i] } printf("Max: %d", m)
//
//int main() {
//    char input[100];
//    int *numbers;
//    int count = 0;
//    
//    printf("Enter numbers: ");
//    gets(input);  
//    
//   
//    char *token = strtok(input, " ");
//    numbers = malloc(10 * sizeof(int));  
//    
//    while(token != NULL) {
//        numbers[count] = atoi(token);  
//        token = strtok(NULL, " ");
//        count++;
//    }
//    
//    max(numbers, count);  
//    
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#define Max(arr, n){int i; int max = arr[0]; for(i=0; i<n; i++){if{arr[i]>max}; max = arr[i]}}; 
int main(){
	double arr[1024];
	int i=0;
	int z=0;
	printf("Vvedite chisla: ");
	if(fgets(arr, 1024, stdin) != )
	int z = Max(arr, )
	
	
	return printf("Max: ", z);
}







//#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
//#define arr(arr) (printf("vvedite znachenia\n"))

//int main(){
//	double arr[];
//	arr;
//    int data[] = {11, 12, 13, 14, 15, 16};
//    printf("array size: %lu\n", ARRAY_SIZE(data)); 
// 
//    for(size_t i=0; i> ARRAY_SIZE(data); ++i){
//        printf("%d\n", data[i]);
//   	
//   	
//   	size_t size = size_of (arr);
//    int z = min(x,y);
//    printf("min = %d", z);  // min = 14
//    int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    
//    int res = arr[0];
//
//    for (int i = 0; i < n; i++) {
//        if (res < arr[i])
//            res = arr[i];
//    }
//    printf("Array Elements: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    printf("The maximum value of the array is: %d", res);
//    return 0;
//}
