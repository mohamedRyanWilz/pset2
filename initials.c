#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (void)
{
string s=GetString();
if(s!=NULL){
int i,n;
n=strlen(s);
printf("%c",toupper(s[0]));
for(i=0;i<n;i++){
if(s[i]==' '){
printf("%c",toupper(s[i+1]));
}

}
printf("\n");
}

}
