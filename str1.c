/* string -> collection of char
string complte -> NULL char => '\0'

reverse string print
skill + qode => skillqode
DENIL   => D L E I N
*/
// #include<stdio.h>
// int main()
// {
//     char str[50];
//     printf("Enter string: ");
//     // scanf("%s",str);    // space not allow
//     // scanf("%[^\n]s",str);    // space allow
//     gets(str);  // space allow

//     // printf("your string is %s",str);
//     puts(str);

//     int i;
//     for(i=0;str[i] != '\0';i++);

//     printf("\nString length is :%d",i);
// }






// // NANR
// #include<stdio.h>

// void Urvish()
// {
//     int a,b;
//     printf("\nEnter a and b: ");
//     scanf("%d%d",&a,&b);

//     printf("Multiplication of A and B is: %d",a*b);
// }
// int main()
// {
    
//     Urvish();
// }



// NAWR
#include<stdio.h>

int Urvish()
{
    int a,b;
    printf("\nEnter a and b: ");
    scanf("%d%d",&a,&b);
    return a*b;
}
int main()
{
    
  int a = Urvish();   // function called
  printf("Multiplication of A and B is: %d",a);
}