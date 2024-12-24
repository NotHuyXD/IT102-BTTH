#include <stdio.h>
int main(){
    int n, choice;
    printf("Nhập số phần tử cho mảng:");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &arr[i]);
    }
    do {
    printf("MENU\n");
    printf("1.In các phần tử của mảng\n");
    printf("2. Sắp xếp mảng giảm dần bằng Insertion Sort\n");
    printf("3. Sắp xếp mảng tăng dần bằng Selection Sort\n");
    printf("4. Sắp xếp mảng giảm dần bằng Bubble Sort\n");
    printf("5.Thoát\n");
    printf("\n Lựa chọn của bạn:");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Các phần tử của mảng là: ");
            for (int i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            break;
        case 2:
            for (int i=1;i<n;i++){
                int key=arr[i];
                int j=i-1;
                while (j>=0 && arr[j]<key){
                    arr[j+1]=arr[j];
                    j=j-1;
                }
                arr[j+1]=key;
            }
            printf("Mảng sau khi sắp xếp giảm dần là: ");
            for (int i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            break;
        case 3:
            for (int i=0;i<n-1;i++){
                int min=i;
                for (int j=i+1;j<n;j++){
                    if (arr[min]>arr[j]){
                        int temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            printf("Mảng sau khi sắp xếp tăng dần là: ");
            for (int i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            break;
        case 4:
            for (int i=0;i<n-1;i++){
                for (int j=0;j<n-i-1;j++){
                    if (arr[j]<arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            printf("Mảng sau khi sắp xếp giảm dần là: ");
            for (int i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            break;
        case 5:
            return 0;
        default:
            printf("Lựa chọn không hợp lệ");
    }
} while (choice!=5);
    return 0;
        
}