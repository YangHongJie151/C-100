#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
// 删除字符串中指定字母函数
char* deleteCharacters(char * str, char * charSet)
{
    int hash [256];//创建一个数组，可以容纳下ASCII码
    if(NULL == charSet)
        return str;
    for(int i = 0; i < 256; i++)//标记所有256个字符都不需要删除（值为0）
        hash[i] = 0;
    for(int i = 0; i < strlen(charSet); i++)//标记需要删除的字符（使对应位置值为1）,hash[97]对应标记为1
        hash[charSet[i]] = 1;
    int currentIndex = 0;
    for(int i = 0; i < strlen(str); i++)//再遍历数组str，通过hash[]数组对比，判定标记的字符不赋给数组str[],其他的字符正常赋值
    {
        if(!hash[str[i]])
            str[currentIndex++] = str[i];//这里的srt[currentIndex++]是currentIndex先赋值，即str[currentIndex]，再currentIndex++；
    }
    str[currentIndex] = '\0';//currentIndex++已经指向下一个位置，赋值'\0';
    return str;
}
 
int main()
{
    char s[5] = "ak";     // 要删除的字母
    char s2[10] = "fuulukgaca";  // 目标字符串
    printf("%s\n", deleteCharacters(s2, s));
    return 0;
}