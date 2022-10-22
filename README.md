# ipext
This C program executes an iplook query in shellcode.
The shellcode is generated with msfvenom.

## Usage
```bash
#Clone this repository
$ git clone https://github.com/insidious-security/ipext.git

#Compile the code
$ gcc -fno-stack-protector -z execstack ipext.c -o ipext

#Move the bin to /usr/bin/
sudo mv ipext /usr/bin/

#Execute
$ ipext
```

## Don't trust the shellcode?
Good, you shouldn't! Generate it yourself..

```bash
#Create the shellcode with msfvenom
$ msfvenom -p linux/x64/exec CMD='echo $(curl -s ifconfig.me)'  -f c

#Copy the shellcode output into the ipext.c source and compile the source as desribed above
```
