/*************************************************************************
	> File Name: p1054.cpp
	> Author: zoe
	> Mail: 
	> Created Time: 2018年10月23日 星期二 18时57分43秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#define INF 0x3f3f3f3f
#define MX 55
#define MD 100000007

long long qpw(long long a, long b){
    long long int ans = 1;
    for(int i = 1; i <= b; i++) {
        ans = ans * a % MD;
    }
    return ans;
}

long long int calc(const char *str, int l, int r, int a_value) {
    int pos = -1, temp_prior = 0, prior = INF - 1;
    for (int i = l; i <= r; i++) {
        int cur_prior = INF;
        switch (str[i]) {
            case '(': temp_prior += 100; break;
            case ')': temp_prior -= 100; break;
            case '+': cur_prior = temp_prior + 1; break;
            case '-': cur_prior = temp_prior + 1; break;
            case '*': cur_prior = temp_prior + 2; break;
            case '/': cur_prior = temp_prior + 2; break;
            case '^': cur_prior = temp_prior + 3; break;
        }
        if (cur_prior <= prior) {
            prior = cur_prior;
            pos = i;
        }
    }
    if (pos == -1) {
        int num = 0;
        for (int i = l; i <= r; i++) {
            if (str[i] == 'a') return a_value;
            if (str[i] < '0' || str[i] > '9') continue;
            num = num * 10 + str[i] - '0';
        }
        return num;
    } else {
        long long a = calc(str, l, pos - 1, a_value);
        long long b = calc(str, pos + 1, r, a_value);
        switch (str[pos]) {
            case '+': return (a + b)%MD;
            case '-': return (a - b)%MD;
            case '*': return (a * b)%MD;
            case '/': return (a / b)%MD;
            case '^': return qpw(a, b);
        }
    }
    return 0;
}

int main() {
    int len[27],n,ans[15];
    char str[27][MX];    
    scanf("%[^\r]",str[0]), getchar();
    len[0]=strlen(str[0]);
    scanf("%d",&n),getchar();
    for(int i=1;i<=n;i++)
    {
        scanf("%[^\r]",str[i]), getchar();
        len[i]=strlen(str[i]);
    }
    for(int i=0;i<=10;i++)ans[i]=calc(str[0],0,len[0]-1,i-5);
    for(int i=1;i<=n;i++)
    {
        int flag=1;
        for(int j=0;j<=10;j++)
            if(ans[j]!=calc(str[i],0,len[i]-1,j-5))
                {flag=0;break;}
        if(flag)printf("%c",'A'+i-1);
    }
    return 0;
}
