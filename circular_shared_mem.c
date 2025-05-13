/*Q. implement a reader and writer function which reads/writes to a shared circular memory. The writer will fill up the shared memory as it writes to it and the reader will drain out the data as it reads.

You need to implement the two functions given below

write_data (uint8_t * pBuf, uint32_t size)

* where pBuf contains the data to be written to the shared memory and size is the number of bytes to be written


read_data (uint8_t *pBuf, uint32_t size)

* where pBuf is the buffer to which data should be read into from the shared memory size is the number of bytes to be read

1) Read and write could happen in any random order.
2) Write fills ups the shared memory and Read will clear the shared memory.
3) if there is NOT ENOUGH space for read and write, it should return error.*/

#include<stdio.h>
#include<stdint.h>
#define SUCCESS 0
#define MEM 256

static int MEMORY[MEM];
static int write =0;
static int read =0;

int data_av()
{
	if(write>=read)
	       return write-read;
	else
		return	MEM - read + write;	
	}
int space_av()
{
	return MEM - data_av();
}

int writer(char* pbuf,uint32_t size)
{
	if(size>space_av())
		return 1;
	for(int i=0;i<size;i++)
	{
		MEMORY[write]=pbuf[i];
		write = (write+1)%MEM;
	}
	return 0;
}

int reader(char* pbuf,uint32_t size)
{
	if(size>data_av())
		return 1;
	for(int i=0;i<size;i++)
	{
		pbuf[i]=MEMORY[read];
		read = (read+1)%MEM;
	}
	return 0;
}



int main()
{
    uint8_t write_buf[] = "HelloWorld";
    uint8_t read_buf[20] = {0};

    if (writer(write_buf, 10) == SUCCESS)
        printf("Write success\n");
    else
        printf("Write failed\n");

    if (reader(read_buf, 10) == SUCCESS)
        printf("Read success: %s\n", read_buf);
    else
        printf("Read failed\n");

    return 0;
}




