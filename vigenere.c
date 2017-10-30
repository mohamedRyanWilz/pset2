#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//proto type 
void convert(int x,char y);

int main (int argc,string argv[])
{
if(argc!=2){
printf("error\n");
return 1;
}
else{
string x=argv[1];
int n=strlen(x);
int arr[n];
// from line 20 to 36 convert string key to interger and store it in array 
for(int j=0;j<n;j++){
if(isalpha(x[j])){
if(islower(x[j])){
arr[j]=x[j]%97;
}
else
{
arr[j]=x[j]%65;
}
}
else{
printf("error\n");
return 1;

}
}
string s=GetString();//get the string we want to cipher
int y=strlen(s);// get the length of the string
//check the string if it is alphapet or no if it send it to function convert 
//to convert it
// and incremment the key index by one
//else it print it as it and go step back with the key index number 
for(int i=0,w=0;i<y;i++,w=((w+1)%n)){
if(isalpha(s[i])){
convert(arr[w],s[i]);
}
else{
printf("%c",s[i]);
w--;
}

}
printf("\n");

}
}

void convert(int x,char y){
int k=x,a;
//it check if its upper or lower letter to convert it and print it
if(isupper(y)){
k=k%26;
a=y+k;
if(a>90){
a=(a-90)+64;
printf("%c",a);
}
else{
printf("%c",a);
}
}
else{
k=k%26;
a=y+k;
if(a>122){
a=(a-122)+96;
printf("%c",a);
}
else{
printf("%c",a);
}

}

}
