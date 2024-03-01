#include<stdio.h>
int input_array_size(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n]){
    printf("enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
int is_composite(int n,int i,int a[i]){
   
    if(a[i]<=1){
        return 0;
    }
    for(int j=2;j<a[i];j++){
        if(a[i]%j==0){
            return 1;
        }
    }
    return 0;
}
int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    int i;
    for( i=0;i<n;i++){
        if(is_composite(n,i,a)==1){
            sum+=a[i];
        }
    }
    return sum;
}
void output(int sum){
    printf("the sum of composite numbers in array is %d", sum);
}

int main(){
    int n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
