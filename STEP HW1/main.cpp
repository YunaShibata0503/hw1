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
    int j,k,l;
    char tmp,obj[16],result;//c[10000]a[10000],*b = nullptr,
    //FILE *fp;
    
    //the dictionary into a[]
/*    fp=fopen("https://icanhazwordz.appspot.com/dictionary.words","r");
    i=0;
    while(1){
        fscanf(fp,"%s",&a[i]);
        if(a[i]==EOF)break;
        i++;
    }
    fclose(fp);
    
    l=sizeof(a);
    
    //a[] into the right order c[]
    for(i=0;i<l;i++){
        do{
            *b=a[i];
            b++;
        }while(*b!='\0');
        for(j=0;j<16;j++){
            for(k=1;k<16;k++){
                if(b[j]>b[k]){
                    tmp=b[j];
                    b[j]=b[k];
                    b[k]=tmp;
                }
            }
        }
        c[i]=*b;
    }
    printf("%c",c[1]);
 */
    
    char c[5][16]={"banana","dei","skfgr","diesl","vsjkslf"};
    
    l=sizeof(c);
    
        soto1(*c,l);
    
    printf("%s",c[2]);
    
        //input the word obj[]
        printf("enter the word:");
        scanf("%s",obj);
    
        //obj[] into the right order
        for(j=0;j<16;j++){
            for(k=1;k<16;k++){
                if(obj[j]>obj[k]){
                    tmp=obj[j];
                    obj[j]=obj[k];
                    obj[k]=tmp;
                }
            }
        }
    printf("%s",obj);
    
        //search obj[] from dictionary
 /*       result=binarySearch(*c,l,0,*obj);
    
        printf("%s",&result);
  */
    return 0;
}

void soto1(char *jisho,int a){
    int i,j;
    char tmp;
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(jisho[i]>jisho[j]){
                tmp=jisho[i];
                jisho[i]=jisho[j];
                jisho[j]=tmp;
            }
        }
    }
}

/*char binarySearch(char *obj, int l, int r, char x){
    if(r>=l){
        int mid=l+(r-1)/2;
        if(obj[mid]==x) return x;
        if(obj[mid]>x) return binarySearch(obj,l,mid-1,x);
        if(obj[mid]<x) return binarySearch(obj,mid+1,r,x);
    }
    return -1;
}
*/

