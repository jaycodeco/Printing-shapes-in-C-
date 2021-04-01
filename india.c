#include <stdio.h>
int main(){    
    int a,b,c;    
    int count = 1;    
    for (b = c = 10;      
    a = "- FIGURE?, UMKC,XYZHello Folks,TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!"[b+++21]; )      
        for(; a-- > 64 ; )        
            putchar ( ++c=='Z' ?c = c / 9 :33 ^ b & 1  );    
    
    return 0;}

    /*
Explanation : The long string is simply a binary sequence converted to ASCII.
The first for statement makes bstart out at 10, and the [b+++21] after the string yields 31. 
Treating the string as an array, offset 31 is the start of the “real” data in the string 
(the second line in the code sample you provided). The rest of the code simply loops through 
the bit sequence, converting the 1’s and 0’s to !’s and whitespace and printing one character at a time.

The strange clever part is in the putchar statements. Take the first putchar. ASCII ‘Z’ is 90 in decimal, 
so 90 / 9 = 10 which is a newline character. In the second, decimal 33 is ASCII for ‘!’. 
Toggling the low-order bit of 33 gives you 32, which is ASCII for a space.
This causes ! to be printed if b is odd, and a blank space to be printed if b is even. 
The rest of the code is simply there to walk the “pointer” a through the string.

    */