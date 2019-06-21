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

for (nums = '0'; nums < '9'; nums++)
{
for (nums1 = '0'; nums1 <= '9'; nums1++)
{
if (nums == '0' && nums1 < '1')
continue;
if (nums == '1' && nums1 < '2')
continue;
if (nums == '2' && nums1 < '3')
continue;
if (nums == '3' && nums1 < '4')
continue;
if (nums == '4' && nums1 < '5')
continue;
if (nums == '5' && nums1 < '6')
continue;
if (nums == '6' && nums1 < '7')
continue;
if (nums == '7' && nums1 < '8')
continue;
if (nums == '8' && nums1 < '9')
continue;
putchar(nums);
putchar(nums1);
if (nums == '8' && nums1 == '9')
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
