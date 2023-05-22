
int convertLittleToBigOrBigToLittle(int num)
{
    return (((num & 0x0000FFFF) << 16) | ((num & 0xFFFF0000) >> 16));
}

int convertLittleToBigOrBigToLittle_generic(int num)
{
    return (((num & (-1 << (sizeof(num) * 4))) >> (sizeof(num) * 4)) | ((num & 0xFFFF0000) >> 16));
}
