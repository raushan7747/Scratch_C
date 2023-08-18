// To check the memory allocation by printing their addresses
#include <stdio.h>
int main()
{
    int n;
    float r;
    char k;
    char kr[1];

    printf("The value of %d\n", n); // printing the [GARBAGE] values of variables
    printf("The value of %f\n", r);
    printf("The value of %c\n", k);
    printf("The value of %c\n\n", kr[0]);

    printf("The value of %u\n", &n); // printing the addresses to understand the allocation of memory
    printf("The value of %u\n", &r);
    printf("The value of %u\n", &k);
    printf("The value of %u\n", &kr);

    return 0;
}
/* Humare jo variables hain unko [RAM] me memory kaise allocate hoti hai wah hum upar wale line -> 15
   ko execute karke dekh sakte hain, humare jo variables hain un ko memory allocate hona sabse
   aakhri variables se shuru hoti hai, aur neeche se upar memory me space reserve kiye jaate hain
   jaisa ki humne sabse pehle [integer] declare kiya hai aur akkhri me ik [charater] to aise me
   hum yahi sochenge ki humare memory me sabse pehle space jo reserve hogi wah [integer] ke liye
   hi hogi -> Lekin aisa nhi hai, sabse pehle aakhri variable [character] type ke liye hi hogi
   uske baad neeche se upar jaaate hue aakhri me [integer] type ke variable ke liye addreass
   humare memoty me reserve hogi.
 */