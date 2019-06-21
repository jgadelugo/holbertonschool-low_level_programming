#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;
int nums1;
int nums2;

for (nums = '0'; nums <= '7'; nums++)
{
for (nums1 = nums + 1; nums1 <= '9'; nums1++)
{
for (nums2 = nums1 + 1; nums2 <= '9'; nums2++)
{
putchar(nums);
putchar(nums1);
putchar(nums2);
if (nums == '7' && nums1 == '8' && nums2 == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
