#include "libasm.h"
#include <stdio.h> // printf()
#include <string.h> // strlen()

static void test_strlen( void )
{
	const char *test_0 = "Hello, world!";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test_4 = "";

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test_0 );
	printf( "strlen()    = %zu\n", strlen( test_0 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test_1 );
	printf( "strlen()    = %zu\n", strlen( test_1 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test_2 );
	printf( "strlen()    = %zu\n", strlen( test_2 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test_3 );
	printf( "strlen()    = %zu\n", strlen( test_3 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test_4 );
	printf( "strlen()    = %zu\n", strlen( test_4 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_4 ) );
}

static void test_strcpy( void )
{
	const char *test_0 = "Hello, world!";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test_4 = "";

	char dest[2000];

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test_0 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_0 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test_1 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_1 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test_2 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_2 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test_3 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_3 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test_4 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_4 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_4 ) );
}

static void test_atoi_base( void )
{
	const char *test_00 = NULL;
	const char *test_01 = "42";
	const char *test_02 = " \t\n\v\f\r\r\f\v\n\t 42";
	const char *test_03 = "\t +--+-";
	const char *test_04 = "\t --42";
	const char *test_05 = "\t +--+-42";
	const char *test_06 = " \t\n\v\f\r\r\f\v\n\t +--+-42";
	const char *test_07 = "  2147483647";
	const char *test_08 = "  -2147483648";
	const char *test_09 = "1234";
	const char *test_10 = "\t +--+-42abc";
	const char *test_11 = "\t +--+-abc";
	const char *test_12 = "\t  abc";
	const char *test_13 = "";
	const char *test_14 = "101010"; // 42
	const char *test_15 = "10011010010"; // 1234
	const char *test_16 = "2a"; // 42
	const char *test_17 = "4d2"; // 1234


	const char *base_2 = "01";
	const char *base_10 = "0123456789";
	const char *base_16 = "0123456789abcdef";

	const char *base_invalid_0 = NULL;
	const char *base_invalid_1 = "0";
	const char *base_invalid_2 = "0123456189";
	const char *base_invalid_3 = "0123456-89";


	printf( "\033[31m--------------------test 00--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_00, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_00, base_10 ) );

	printf( "\033[31m--------------------test 01--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_01, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_01, base_10 ) );

	printf( "\033[31m--------------------test 02--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_02, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_02, base_10 ) );

	printf( "\033[31m--------------------test 03--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_03, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_03, base_10 ) );

	printf( "\033[31m--------------------test 04--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_04, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_04, base_10 ) );

	printf( "\033[31m--------------------test 05--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_05, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_05, base_10 ) );

	printf( "\033[31m--------------------test 06--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_06, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_06, base_10 ) );

	printf( "\033[31m--------------------test 07--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_07, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_07, base_10 ) );

	printf( "\033[31m--------------------test 08--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_08, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_08, base_10 ) );

	printf( "\033[31m--------------------test 09--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_09, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_09, base_10 ) );

	printf( "\033[31m--------------------test 10--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_10, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_10, base_10 ) );

	printf( "\033[31m--------------------test 11--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_11, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_11, base_10 ) );

	printf( "\033[31m--------------------test 12--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_12, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_12, base_10 ) );

	printf( "\033[31m--------------------test 13--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_13, base_10 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_13, base_10 ) );

	// base 2 tests
	printf( "\033[31m--------------------test 14--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_14, base_2 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_14, base_2 ) );

	printf( "\033[31m--------------------test 15--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_15, base_2 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_15, base_2 ) );

	// base 16 tests
	printf( "\033[31m--------------------test 16--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_16, base_16 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_16, base_16 ) );

	printf( "\033[31m--------------------test 17--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_17, base_16 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_17, base_16 ) );

	// Invalid base tests
	printf( "\033[31m--------------------test 18--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_01, base_invalid_0 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_01, base_invalid_0 ) );

	printf( "\033[31m--------------------test 19--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_01, base_invalid_1 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_01, base_invalid_1 ) );

	printf( "\033[31m--------------------test 20--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_01, base_invalid_2 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_01, base_invalid_2 ) );

	printf( "\033[31m--------------------test 21--------------------\033[0m\n" );
	printf( "test: \033[34m\"%s\"\033[0m and \033[34m\"%s\"\033[0m \n", test_01, base_invalid_3 );
	printf( "ft_atoi_base() = \033[32m\"%d\"\033[0m\n", ft_atoi_base( test_01, base_invalid_3 ) );
}


// int main( void )
// {
// 	if ( 1 == 2 ) {
// 		test_strlen();
// 		test_strcpy();
// 	}
// 	test_atoi_base();
// 	return ( 0 );
// }
#include <stdlib.h>
int cmp_int(void *a, void *b)
{
    return (*(int *)a - *(int *)b);
}

t_list *new_node(int value)
{
    t_list *node = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));
    *data = value;
    node->data = data;
    node->next = 0;
    return node;
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("%d -> ", *(int *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

int main(void)
{
	if ( 1 == 2 ) {
		test_strlen();
		test_strcpy();
		test_atoi_base();
	}
    // Création d'une liste non triée: 42 -> 3 -> 15 -> 7
	t_list *list = NULL;
	ft_list_push_front(&list , (void *)42);
	ft_list_push_front(&list , (void *)3);
	ft_list_push_front(&list , (void *)15);
	ft_list_push_front(&list , (void *)7);

    printf("Avant tri:\n");
    print_list(list);

    ft_list_sort(&list, cmp_int);

    printf("Après tri:\n");
    print_list(list);

    return 0;
}
