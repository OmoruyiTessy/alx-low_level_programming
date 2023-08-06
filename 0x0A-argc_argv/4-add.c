#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_positive_number(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
		return (false);
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
	    int sum = 0;

	        for (int i = 1; i < argc; i++) {
			        if (is_positive_number(argv[i])) {
					            int num = atoi(argv[i]);
						                if (num >= 0) {
									                sum += num;
											 } else {
												                 printf("Error\n");
														                 return 1;
																             }
								        } else {
										            printf("Error\n");
											                return 1;
													        }
				    }

		    printf("%d\n", sum);
		        return 0;
}
