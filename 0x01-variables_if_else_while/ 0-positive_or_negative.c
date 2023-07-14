/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/*                                              /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: aouaziz    <ayoubouaziz3@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2023-07-14 15:25:04   $aouaziz            \/        \/      \_/  */
/* Updated: 2023-07-14 16:25:04 by aouaziz                                   */
/*                                                                           */
/*****************************************************************************/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is %s\n", n, "negative");
	else if (n > 0)
		printf("%d is %s\n", n, "positive");
	else
		printf("%d is %s\n", n, "zero");
	return (0);

}