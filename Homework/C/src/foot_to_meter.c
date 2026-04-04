#include <stdio.h>
int main(void){
    printf("请输入您身高的英制单位（分别输入身高的英尺和英寸），"
        "\n如输入\'5 7\'表示5尺7寸：");

    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("您的身高是%f米。\n",
        ((foot + inch / 12) * 0.3048));
    
    return 0;
}