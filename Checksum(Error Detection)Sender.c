#include<stdio.h>
#include<string.h>

int main()
{   char inputString[100], a[100], b[100];
    int length, mid, i, k,len;
    printf("Enter a Message bit:");
    gets(inputString);
    length = strlen(inputString);

    mid = length/2;
    for(i = 0; i < mid; i++) {
        a[i]= inputString[i];
    }
    a[i] = '\0';

    for(i = mid, k = 0; i <= length; i++, k++) {
        b[k]= inputString[i];
    }

    printf("First_half: %s\n",a);
    printf("Second_half : %s\n",b);
    char sum[20],complement[20];

    if(strlen(a)==strlen(b)){
		len = strlen(a);
		char carry='0';

		for(i=len-1;i>=0;i--)
        {
			if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';

            }
            else
                break;
        }
        printf("***SENDER SIDE PROCESS***");
		printf("\nSum=%s",sum);

		for(i=0;i<len;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }


        if(carry=='1')
            carry='0';
        else
            carry='1';

		printf("\nChecksum=%s",complement);
	}
	else {
		printf("\n***ERROR***");
	}
	return 0;

}
