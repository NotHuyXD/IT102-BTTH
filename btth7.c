#include <stdio.h>
int main(){
    int r,c , choice;
    printf("Nhập số cột cho mảng:");
    scanf("%d", &c);
    printf("Nhập số hàng cho mảng:");
    scanf("%d", &r);
    int arr[r][c];
    int temp[r*c];
    int index=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("Phần tử của arr[%d][%d]:\n", i, j);
            scanf("%d", &arr[i][j]);
            temp[index++]=arr[i][j];
        }
    }
    do {
    printf("MENU\n");
    printf("1.In mảng ra theo ma trận\n");
    printf("2.Sắp xếp mảng giảm dần bằng Insertion Sort\n");
    printf("3.Sắp xếp mảng tăng dần bằng Selection Sort\n");
    printf("4.Sắp xếp mảng giảm dần bằng Bubble Sort\n");
    printf("5.Thoát\n");
    printf("\n Lựa chọn của bạn:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Mảng theo ma trận là: \n");
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i=1;i<r*c;i++){
                int key=temp[i];
                int j=i-1;
                while (j>=0 && temp[j]<key){
                    temp[j+1]=temp[j];
                    j=j-1;
                }
                temp[j+1]=key;
            }
            index=0;
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    arr[i][j]=temp[index++];
                }
            }
            printf("Mảng sau khi sắp xếp giảm dần là: \n");
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i=0;i<r*c-1;i++){
                int min=i;
                for (int j=i+1;j<r*c;j++){
                    if (temp[min]>temp[j]){
                        int t=temp[i];
                        temp[i]=temp[j];
                        // ngu vl
                        temp[j]=t;
                    }
                }
            }
            index=0;
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    arr[i][j]=temp[index++];
                }
            }
            printf("Mảng sau khi sắp xếp tăng dần là: \n");
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            for (int i=0;i<r*c-1;i++){
                for (int j=0;j<r*c-i-1;j++){
                    if (temp[j]<temp[j+1]){
                        int t=temp[j];
                        temp[j]=temp[j+1];
                        temp[j+1]=t;
                    }
                }
            }
            index=0;
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    arr[i][j]=temp[index++];
                }
            }
            printf("Mảng sau khi sắp xếp tăng dần là: \n");
            for (int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;

        default: printf("Lựa chọn không hợp lệ\n");
            break;
    }

} while (choice!=5);
    return 0;
}