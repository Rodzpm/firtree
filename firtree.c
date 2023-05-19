#define p(c)printf(c)
#define z int
#define y for
main(z c,char**v){z l=7,n=0,m=7,s=atoi(v[1]),b=s%2==0?s+1:s;y(z i=1;i<s;i++)m+=(i+3-(i+1)/2)*2;y(z i=0;i<s;i++){y(z j=0;j<i+4;j++){n=(i!=0?l-((i+1)/2)*2+j*2:1+j*2);y(z k=0;k<m/2-n/2;k++)p(" ");y(z k=0;k<n;k++)p("*");p("\n");l=(j+1==i+4&&i!=0)?(l-((i+1)/2)*2+j*2):l;}}y(z i=0;i<s;i++){y(z j=0;j<m/2-b/2;j++)p(" ");y(z j=0;j<b;j++)p("|");p("\n");}}