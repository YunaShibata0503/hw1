//
//  main.cpp
//  STEP HW1
//
//  Created by MacUser on 2018/05/30.
//  Copyright © 2018年 MacUser. All rights reserved.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void soto1(char *jisho,int a);
char binarySearch(char *obj, int l, int r, char x);

int main(){
    int i,j,k,l;
    char tmp,obj[17],c[10000],a[17][100000]={0},*b = nullptr,result;
    FILE *fp;
    
    //the dictionary into a[]
    fp=fopen("dictionary2","r");
    
    i=0;
    
    while(1){
        fgets(a[i],16,fp);
        i++;
        if(a[i]==NULL)break;
    }
    
    l=i;
    
    fclose(fp);
    

    
    //a[] into the right order c[]
    for(i=0;i<l;i++){
        for(j=0;j<16;j++){
            for(k=1;k<16-j;k++){
                if(b[k-1]>b[k]){
                    tmp=b[k-1];
                    b[k-1]=b[k];
                    b[k]=tmp;
                }
            }
        }
        c[i]=*b;
    }
    printf("%c",c[1]);
 
    
 //   soto1(c,l);
    
 //   printf("%s¥n",c[2]);
    
        //input the word obj[] 16 letters only
        printf("enter the word:");
        scanf("%s",obj);
    
        //obj[] into the right order
        for(j=0;j<16;j++){
            for(k=1;k<16-j;k++){
                if(obj[k-1]>obj[k]){
                    tmp=obj[k-1];
                    obj[k-1]=obj[k];
                    obj[k]=tmp;
                }
            }
        }
    printf("%s",obj);
    
        //search obj[] from dictionary
        result=binarySearch(c,l,0,*obj);
    
        printf("%s",result);
  
    return 0;
}

/*void soto1(char *jisho,int a){
    int i,j;
    char tmp;
    for(i=0;i<a;i++){
        for(j=1;j<a-i;j++){
            if(jisho[j-1]>jisho[j]){
                tmp=jisho[j-1];
                jisho[j-1]=jisho[j];
                jisho[j]=tmp;
            }
        }
    }
}
*/
 
char binarySearch(char *obj, int l, int r, char x){
    if(r>=l){
        int mid=l+(r-1)/2;
        if(obj[mid]==x) return x;
        if(obj[mid]>x) return binarySearch(obj,l,mid-1,x);
        if(obj[mid]<x) return binarySearch(obj,mid+1,r,x);
    }
    return -1;
}

