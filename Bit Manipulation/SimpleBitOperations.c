#include <stdio.h>

/* Right Shift by No */
#define RSHFT_REG(REG,NO)       (REG >>= NO)

/* Left Shift by NO */
#define LSHFT_REG(REG,NO)       (REG <<= NO)

/* Circular Right Shift */
#define CRSHFT_REG(REG,NO)      ((REG >> NO) | (REG << (sizeof(reg) * 8 - NO)))

/* Circular Left Shift */
#define CLSHFT_REG(REG,NO)      ((REG << NO) | (REG >> (sizeof(reg) * 8 - NO)))

/* Toggle a Register Value */
#define TGL_REG(REG)            (REG ^= -1)

/* Set The High half word in a Register */ 
#define SET_H_NIB(REG)          (REG |= (-1 << (sizeof(REG) * 4)))    

/* Clear The High half word in a Register */
#define CLR_H_NIB(REG)          (REG &= ~(-1 << (sizeof(REG) * 4)))  

/* Get The High half word in a Register  */
#define GET_H_NIB(REG)          ((REG & (-1 << (sizeof(REG) * 4))) >> (sizeof(REG) * 4)) 

/* Toggle the High half word in a Register */
#define TGL_H_NIB(REG)          (REG ^= (-1 << (sizeof(REG) * 4)))

/* Assign The High half word in a Register */
#define ASSIGN_H_NIB(REG,VALUE) (REG = (REG & ~(-1 << (sizeof(REG) * 4))) | (VALUE << (sizeof(REG) * 4)))

/* Set The Low half word in a Register */
#define SET_L_NIB(REG)          (REG |= ~(-1 << (sizeof(REG) * 4)))

/* Clear The Low half word in a Register  */
#define CLR_L_NIB(REG)          (REG &= (-1 << (sizeof(REG) * 4)))      

/* Get The Low half word in a Register */
#define GET_L_NIB(REG)          ((REG & ~(-1 << (sizeof(REG) *4))))     

/* Assign the Low half word in a Register */
#define ASSIGN_L_NIB(REG,VALUE) (REG = (REG & (-1 << (sizeof(REG) *4))) | VALUE)  

/* Toggle the Low half word in a Register */
#define TGL_L_NIB(REG)          (REG ^= ~(-1 << (sizeof(REG) * 4)))  

/* Swap the half words in a Register */
#define SWAP_NIB(REG)           (REG = ((REG & (-1 << (sizeof(REG) * 4))) >> (sizeof(REG) * 4)) | ((REG & ~(-1 << (sizeof(REG) * 4))) << (sizeof(REG) * 4)))

unsigned int setIthBit(unsigned int var, unsigned int i) 
{
    return (var | (1 << i));
}

unsigned int clearIthBit(unsigned int var, unsigned int i) 
{
    return (var & ~(1 << i));
}

unsigned int toggleIthBit(unsigned int var, unsigned int i) 
{
    return (var ^ (1 << i));
}

unsigned int getIthBit(unsigned int var, unsigned int i) 
{
    return ((var >> i) & 1);
}

unsigned int positionOfRightMostOne(unsigned int var) 
{
    int pos = 1;
    while ((var & 1) == 0) 
    {
        var >>= 1;
        pos++;
    }
    return pos;
}

unsigned int setRightMostZero(unsigned int var) 
{
    return var | (var + 1);
}

unsigned int clearRightMostOne(unsigned int var) 
{
    return (var & (var - 1));
}

unsigned int setTrailingZeros(unsigned int var) 
{
    return var | (var - 1);
}

unsigned int clearTrailingZeros(unsigned int var) 
{
    return var & (var + 1);
}

unsigned int longestSequenceOfOnes(unsigned int var) 
{
    int count = 0, maxCount = 0;
    while (var != 0) 
    {
        if ((var & 1) == 1) 
        {
            count++;
        } 
        else 
        {
            count = 0;
        }
        if (count > maxCount) 
        {
            maxCount = count;
        }
        var >>= 1;
    }
    return maxCount;
}

unsigned int isEven1(unsigned int var) 
{
    return !(var & 1);
}

unsigned int isEven2(unsigned int var) 
{
    /* it's evern when (var / 2) * 2 == var, same but by using shift operators*/
    return (((var >> 1) << 1) == var);
}

unsigned int isPowerOfTwo1(unsigned int var) 
{
    unsigned int ret = 1;
    if(var == 0)
    {
        ret = 0;
    }
    while (var != 0)
    {
        if(var % 2 != 0)
        {
            ret = 0;
            break;
        }
        var /= 2;
    }
    return ret;
}

unsigned int isPowerOfTwo2(unsigned int var) 
{
    return !(var & (var -1));
}

unsigned int isPowerOfFour1(unsigned int var) 
{
    unsigned int ret = 1;
    if(var == 0)
    {
        ret = 0;
    }
    while (var != 0)
    {
        if(var % 4 != 0)
        {
            ret = 0;
            break;
        }
        var /= 4;
    }
    return ret;
}

unsigned int isPowerOfFour2(unsigned int var) 
{
    return !(var & (var -1)) && ((var % 3) == 1);
}

unsigned int isPowerOfEight1(unsigned int var) 
{
    unsigned int ret = 1;
    if(var == 0)
    {
        ret = 0;
    }
    while (var != 0)
    {
        if(var % 8 != 0)
        {
            ret = 0;
            break;
        }
        var /= 8;
    }
    return ret;
}

unsigned int isPowerOfEight2(unsigned int var) 
{
    return !(var & (var -1)) && ((var % 7) == 1);
}

int missingNumber(int* arr , int n) 
{
    int missingNumber = 0, i;
    for (i = 0; i < n; i++) 
    {
        missingNumber ^= arr[i] ^ (i + 1);
    }
    return missingNumber;
}

void decimalToBinary(int var) 
{
    int bit, i, arr[sizeof(var) * 8];
    printf("Binary representation of %d is: \n", var);
    for(i = 0; i < sizeof(var) * 8; i++)
    {
        bit = (var >> i) & 1;
        arr[i] = bit;
    }
    for(i = sizeof(var) * 8 - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

unsigned int areEqualNumbersWithoutUsingEqual(unsigned int var1, unsigned int var2)
{
    return (var1 ^ var2 == 0);
}

int main(void)
{
    return 0;
}