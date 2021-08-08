/*************************************************************************
    > File Name: zlibtest.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: Sun 08 Aug 2021 12:16:03 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<zlib.h>

int main(int argc,char** argv)
{
	unsigned char* src = argv[1];
	unsigned long len = sizeof(src);
	unsigned long len2 = sizeof(src);

	printf("src is --> %s \n",src);

	unsigned char des[2048] = {
		0
	};
	unsigned long deslen = sizeof(des);


	unsigned char buf[2048] = {
		0
	};
	unsigned long buflen = sizeof(buf);


	compress(buf,&buflen,src,len);
	printf("buflen is %ld\n",buflen);

	uncompress(buf,&len2,des,deslen);

	printf("deslen is -->%s \n",des);
	return 0;
}
