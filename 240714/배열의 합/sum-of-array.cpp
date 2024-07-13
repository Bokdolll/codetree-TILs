#include <iostream>
using namespace std;

int main() {
    
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int k=0;k<4;k++){
            scanf("%d",&arr[i][k]);
        }
    }

    

     for(int i=0;i<4;i++){
        int sum=0;
        for(int k=0;k<4;k++){
            sum+=arr[i][k];
        }
        printf("%d\n",sum);
    }
    

    return 0;
}