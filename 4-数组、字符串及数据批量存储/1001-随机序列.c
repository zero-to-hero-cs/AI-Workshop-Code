#include<stdio.h>
int main(){
    int numOfPaper,numOfNumber;
    int a[100005];
    scanf("%d",&numOfPaper);
    for(int k=0;k<numOfPaper;k++){
        double aver=0;
        long long sum=0;
        int max = -1000000000;
        int min=1000000000;
        double variance=0;
        double svariance=0;
        scanf("%d",&numOfNumber);
        for(int i=0;i<numOfNumber;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<numOfNumber;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        printf("%d ",max-min);
        for(int i=0;i<numOfNumber;i++){
            sum=sum+a[i];
        }
        aver=(double)sum/numOfNumber;
        for(int i=0;i<numOfNumber;i++){
            svariance=svariance+(a[i]-aver)*(a[i]-aver);
        }
        variance=svariance/numOfNumber;
        printf("%.3f\n",variance);
    }
}