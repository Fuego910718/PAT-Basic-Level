//1002 写出这个数

#include <stdio.h>
#include <string.h>

int main() {
    char table[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char n[100];
    scanf("%s",n);
    int sum = 0;//sum：各位数字之和

    //1、将n的每一位数相加，存入sum
    for (int i = 0; i < strlen(n); ++i) {
        sum += n[i] - '0';
    }

    //2、按位输出sum，需将sum按位读取，存入res数组
    char res[100];
    int j = 0;
    while (sum>0){
        res[j++] += sum%10 + '0';
        sum /= 10;
    }

    //3、将res数组从后向前读取，并按照table进行输出
    for (int i = j-1; i >= 0; i--) {
        int num = res[i]-'0';
        printf("%s",table[num]);
        if(i>0) {
            printf(" ");//控制个位数后无空格
        }
    }
    return 0;
}
