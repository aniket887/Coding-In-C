#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    int y;
    int a,b,c,d,e;
    a=b=c=d=e=0;
    fgets(ch,100,stdin);
    strlwr(ch);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            a++;
        }
        else if ((ch[i] >= 'a' && ch[i] <= 'z')){
            b++;
        }
        else if (ch[i] >= '0' && ch[i] <= '9') {
            c++;
        }
        else if (ch[i] == ' ') {
            d++;
        }
        else{
            e++;
        }
    }
    printf("vovels=%d , consonent=%d , digit=%d , spaces=%d , special characters:%d",a,b,c,d,e-1);
    return 0;
}

