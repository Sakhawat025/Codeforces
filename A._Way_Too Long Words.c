#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len,l;
    char s[6000];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);


        if(l>10)
        {
            printf("%c%d%c",s[0],l-2,s[l-1]);
        }else printf("%s\n",s);
    }
  return 0;
}
