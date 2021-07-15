#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int left_partstring_find(char* src, char* find)
{
	int i=0, j=0;
	int cnt = 0;
	int sz = strlen(src);
	char str[256] = { 0 };
	strcpy(str, src);
	strncat(str, src, sz - 1);
	
	for (j = 0; j < sz; j++)
	{
		cnt = 0, i=0;
		while(find[i] == str[j])
		{
			i++, j++, cnt++;
		}
		if (cnt == sz)
			return 1;
	}

	return 0;
}



int main()
{
		char src[] = "abcdefg";
		char find[] = "cdefgab";
		int x;
		x = left_partstring_find(src, find);
		printf("%d\n",x);
}