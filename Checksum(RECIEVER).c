#include<stdio.h>
#include<string.h>

int main()
{   char sum[20],checksum[20];
    int i,len;
    char sum1[20],complement[20];
    printf("Enter Sum(from sender side): ");
    gets(sum);
    printf("Enter checksum(From sender side):");
    gets(checksum);

    if(strlen(sum)==strlen(checksum)){
		len = strlen(sum);
		char carry='0';

		for(i=len-1;i>=0;i--)
        {
			if(sum[i]=='0' && checksum[i]=='0' && carry=='0')
            {
                sum1[i]='0';
                carry='0';
            }
            else if(sum[i]=='0' && checksum[i]=='0' && carry=='1')
            {
                sum1[i]='1';
                carry='0';

            }
            else if(sum[i]=='0' && checksum[i]=='1' && carry=='0')
            {
                sum1[i]='1';
                carry='0';

            }
            else if(sum[i]=='0' && checksum[i]=='1' && carry=='1')
            {
                sum1[i]='0';
                carry='1';

            }
            else if(sum[i]=='1' && checksum[i]=='0' && carry=='0')
            {
                sum1[i]='1';
                carry='0';

            }
            else if(sum[i]=='1' && checksum[i]=='0' && carry=='1')
            {
                sum1[i]='0';
                carry='1';

            }
            else if(sum[i]=='1' && checksum[i]=='1' && carry=='0')
            {
                sum1[i]='0';
                carry='1';

            }
            else if(sum[i]=='1' && checksum[i]=='1' && carry=='1')
            {
                sum1[i]='1';
                carry='1';

            }
            else
                break;
        }

        printf("***RECIEVER SIDE PROCESS***");
		printf("\nSum=%s",sum1);

		for(i=0;i<len;i++)
        {
            if(sum1[i]=='0')
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
    for(i=0;i<len;i++){
       if(complement[i]='0'){
          printf("***No Error in Communication***");
    }
       else{
          printf("***Error in Communication***");
        }
	}

}
