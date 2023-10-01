#include<stdio.h>
int returnmax(int arr[],int n){
    int max =0;
    for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
    }
    return max;
}
int main(){
    int arr[]={11,1500,19,55,20,23};
    int max = returnmax(arr,6);
    printf("the maximum elements in this array is %d",max);
    return 0;

}